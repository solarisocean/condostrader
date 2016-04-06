<?php

function _rets_connection_test() {

  $rets_login_url = variable_get('rets_login_url', '');
  $rets_username = variable_get('rets_username', '');
  $rets_password = variable_get('rets_password', '');
  $rets_user_agent = variable_get('rets_user_agent', '');
  $rets_user_agent_password = variable_get('rets_user_agent_password', '');

  libraries_load('torontomlsapi');


// start rets connection
  $rets = new phRETS;

// Uncomment and change the following if you're connecting
// to a server that supports a version other than RETS 1.5
//$rets->AddHeader("RETS-Version", "RETS/1.7.2");

  $rets->AddHeader("User-Agent", $rets_user_agent);

  echo "<br><br><br><br>+ Connecting to {$rets_login_url} as {$rets_username}<br>\n";
  $connect = $rets->Connect($rets_login_url, $rets_username, $rets_password, $rets_user_agent_password);

// check for errors
  if ($connect) {
    echo "  + Connected<br>\n";
  }
  else {
    echo "  + Not connected:<br>\n";
    print_r($rets->Error());
    exit;
  }

  $types = $rets->GetMetadataTypes();

// check for errors
  if (!$types) {
    print_r($rets->Error());
  }
  else {
    foreach ($types as $type) {
      echo "+ Resource {$type['Resource']}<br>\n";

      foreach ($type['Data'] as $class) {
        echo "  + Class {$class['ClassName']}<br>\n";
      }
    }
  }

  echo "+ Disconnecting<br>\n";
  $rets->Disconnect();

  return 'test';
}
