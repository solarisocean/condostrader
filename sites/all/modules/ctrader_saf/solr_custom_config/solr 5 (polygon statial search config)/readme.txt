Put jts-1.13.jar file in '/opt/solr-5.2.1/server/webapps/solr.war/WEB-INF/lib/'.

Make sure that you have rpts_* field in your solr index.
(or if doesn't work in '/opt/solr-5.2.1/server/lib/')



I have changed schema.xml file. Add (spatialContextFactory="com.spatial4j.core.context.jts.JtsSpatialContextFactory").


It could be some problem with data indexing. Restart solr, exclude rpts_* field from index and save. And include it again and save.


Usefull links:
http://comments.gmane.org/gmane.comp.jakarta.lucene.solr.user/91089
http://stackoverflow.com/questions/27041989/exception-indexing-polygons-with-solr-jts-not-found
http://comments.gmane.org/gmane.comp.jakarta.lucene.solr.user/118886
http://search.maven.org/#search|gav|1|g%3A%22com.vividsolutions%22%20AND%20a%3A%22jts%22
https://cwiki.apache.org/confluence/display/solr/Spatial+Search



******************************************
examples
*****************************************
/**
 * Implements hook_search_api_solr_field_mapping_alter().
 *
 * Makes rpts_* field from text field.
 */
function ctrader_saf_search_api_solr_field_mapping_alter(SearchApiIndex $index, array &$fields) {
  $field_name = 'field_search_point_string';
  if (isset($fields[$field_name])) {
    $fields[$field_name] = 'rpts_' . $field_name;
  }
}

this is how indexed field looks like in index (point somewhere in Toronto):
"rpts_field_search_point_string": "43.638608000000,-79.411857500000",


query example (put this on input with label 'fq' in your solr core query page (http://localhost:8983/solr/#/<core_name>/query)):
rpts_field_search_point_string:"Intersects(POLYGON((-79.46685791015625 43.67134832596868,-79.40162658691405 43.66985832954972,-79.40025329589844 43.652969118285434,-79.40780639648438 43.64005063334696,-79.4483184814453 43.62215891380659,-79.47784423828125 43.62762639320158,-79.49226379394531 43.642535173141056,-79.486083984375 43.67234163636449,-79.4805908203125 43.67780454967293,-79.46685791015625 43.67134832596868)))"
