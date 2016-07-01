CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Configuration

INTRODUCTION
------------

This module allow add entity view count statistics for all entity types,
when this are viewed (entity view mode full).

It works like statistics module, it's based on it,
but is integrated with all entity types.

You can store for each entity type daily views, total views, and the last view.

CONFIGURATION
-------------
You can configure the module in admin/config/system/entity-statistics
After enabling this module you should enable which entity types you want track.

If your pages are cached, it's recommendable to enable
'Use Ajax to increment the counter' option. You will need check this option
in some cases due to increment is done by url check, and sometimes pattern
doesn't coincides! Only works when entity uri has
this pattern:'[entity_type]/[entity_id]'

@NOTE: if you use ajax option, an ajax call will be made to a aislated php
file. If your site is configured to be secure, this file couldn't be called!
You should make an exception for this file.
