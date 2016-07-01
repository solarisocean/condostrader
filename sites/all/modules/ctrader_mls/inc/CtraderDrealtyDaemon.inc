<?php

class CtraderDrealtyDaemon extends drealtyDaemon {

  public function CheckListingStatuses(drealtyConnectionEntity $connection) {

    $mappings = $connection->ResourceMappings();
    $resources = $connection->Resources();
    $key_field = "";
    $chunks = 0;
    $report_data = array();
    $in_rets = array();

    foreach ($mappings as $mapping) {
      $resource = $this->dm->FetchResource($mapping->rid);
      if($resource && in_array($resource->systemname, array('Property', 'Listing'))) { // only do it for Listings (not Offices, Agents, or any other resources)
        $classes = $connection->FetchClasses($resource);
        foreach ($classes as $class) {
          if ($class->enabled) {

            $in_db = db_select('drealty_listing', 'dl')
              ->fields('dl', array('id', 'rets_key', 'rets_id'))
              ->condition('conid', $connection->conid)
              ->condition('class', $class->cid)
              ->condition('active', 1)
              ->orderBy('rets_key')
              ->execute()
              ->fetchAllAssoc('rets_key');

            $report_data[$class->cid]['bundle'] = $class->bundle;

            if($in_db)
              $report_data[$class->cid]['in_db_count'] = count($in_db);

            $fieldmappings = $connection->FetchFieldMappings($resource, $class);
            $key_field = $fieldmappings['rets_key']->systemname;
            $id_field = $fieldmappings['rets_id']->systemname;
            $fields = array($key_field, $id_field);

            switch ($class->query_type) {
              case 1: // @todo: needs work, not accounted for yet
              case 3:// @todo: needs work, not accounted for yet
                break;
              case 2:
                $query = array();
                $custom_query = token_replace($class->override_status_query_text, array('drealty-class' => $class));
                $query[] = $custom_query;
                break;
              case 0:
              default:
                $statuses = $class->status_values;
                $status_q = "|$statuses";
                $query_field = 'rets_status';
                $query = array();
                $query[] = "{$fieldmappings[$query_field]->systemname}={$status_q}";
            }

            if($class->query_type == 1) {
              // @todo: needs work
              drupal_set_message(t("Unsupported query option. Only supports queries with offsets."), 'error');
              return;
            }
            else if($class->query_type == 3) {
              // @todo: needs work
              drupal_set_message(t("Unsupported query option. Only supports queries with offsets."), 'error');
              return;
            }
            else {
              $offset = 0;
              $rets = $this->dc->rets;
              $this->dc->rets->SetParam("offset_support", TRUE);

              if ($this->dc->connect($connection->conid)) {
                $q = implode('),(', $query);

                $optional_params = array(
                  'Format' => 'COMPACT-DECODED',
                );

                $search = $rets->SearchQuery($resource->systemname, $class->systemname, "($q)", $optional_params);

                $in_rets_count = $rets->NumRows();
                $report_data[$class->cid]['in_rets_count'] = $in_rets_count;

                if ($in_rets_count > 0) {
                  while ($listing = $rets->FetchRow($search)) {
                    $in_rets[$listing[$key_field]] = $listing[$id_field];

                    db_update('drealty_listing')
                      ->fields(array('active' => 1, 'inactive_date' => NULL))
                      ->condition('rets_id', $listing[$id_field], '=')
                      ->execute();
                  }
                }

                if ($error = $rets->Error()) {
                  watchdog('drealty_report', 'drealty encountered an error: (Type: @type Code: @code Msg: @text)', array("@type" => $error['type'], "@code" => $error['code'], "@text" => $error['text']), WATCHDOG_WARNING);
                }
                $rets->FreeResult($search);
              }
            }
          }
        }
        unset($mappings, $resources, $fieldmappings, $query);
      }
    }
    $this->dc->disconnect();

    return $report_data;
  }

}
