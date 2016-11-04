CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration
 * FAQ


INTRODUCTION
------------

Drupal 7 has built-in revisioning functionality for entities and by default
for each field added to nodes, users, taxonomy terms and other entities in
addition to "current" field's data it stores revisions data. In case there is
only one revision for entity this means that revisions data is just duplication
of "current" data. And there are times when there is no need to have more than
one revision for entities of some types/bundles and storing of revisions data is
unnecessary and just a waste of storage space, for example, if your site uses
SaaS based services for loading nodes, users or other entities.

Field SQL norevisions solves this problem by giving a choice to disable
fields revisions for specific entities and bundles. It also improves performance
on saving entities by avoiding of writing fields revisions data to the storage.


Requirements
------------

Field SQL norevisions extends Drupal default field storage which is called
"Field SQL storage" so this is the only requirement.


Installation
------------

Install as you would normally install a contributed Drupal module. See:  
https://drupal.org/documentation/install/modules-themes/modules-7
for further information.


Configuration
-------------

 * Select entities that you want to disable fields revisions on  
   Configuration » System » Field SQL norevisions » Settings

 * When enabling on existing site you'll probably want to remove fields
   revisions data for entities which is configured to not store fields revisions
   on the module's settings page, for example to free some space. This can be
   done on  
   Configuration » System » Field SQL norevisions » Delete revisions data  
   Note: In case there are several revisions for entity there is no way to
   restore fields revisions except current revision after deletion.


FAQ
---

Q: How can I evaluate storage space savings after installing the module?

A: You may try the following query on MySQL to get total database(s)
   sizes info (before and after module installation):  
   SELECT table_schema "Database name",  
     SUM( data_length + index_length ) /1024 /1024 "Database size in MB"  
   FROM information_schema.TABLES  
   GROUP BY table_schema

   The following query will give you the sizes of tables inside particular
   database (replace DatabaseName by needed name):  
   SELECT table_name AS "Table",  
     ROUND(((data_length + index_length) / 1024 / 1024), 2) AS "Size in MB"  
   FROM information_schema.TABLES  
   WHERE table_schema = "DatabaseName"  
   ORDER BY (data_length + index_length) DESC;

   Finally the following query will give you the sizes of tables which store
   fields revisions data (replace DatabaseName by needed name):  
   SELECT SUM(ROUND(((data_length + index_length) / 1024 / 1024), 2))  
     "Total size in MB"  
   FROM information_schema.TABLES  
   WHERE table_schema = "DatabaseName"  
     AND TABLE_NAME LIKE 'field_revision_%'  
   ORDER BY (data_length + index_length) DESC;


Q: What performance improvements on entities saving I may expect after
   installing the module?

A: Check the following articles for some info about performance improvements:

   - http://posulliv.github.io/2013/01/08/norevisions-field/
   - http://www.ambidev.com/make-your-drupal-7-faster-by-removing-all-revisions/


Q: Fields revisions tables still in database, although empty. Shouldn't they be
   removed from database?

A: No. First of all, it's possible to share the same field between revisionable
   and non-revisionable entities/bundles at the same time so revisionable entity
   will save revisions data to database but non-revisionable won't. Second, even
   if field is not shared with revisionable entity/bundle so its revisions table
   will stay empty, table should still stay in database because of compatibility
   reasons.


Q: How can I roll back to revisioning?

A: First of all you need to un-tick entities/bundles you want to roll back
   to revisioning functionality on the module's settings page  
   Configuration » System » Field SQL norevisions » Settings

   Then you need to re-save each entity of type/bundle you need to roll back to
   revisioning functionality to write "current" fields data to fields revisions
   tables. Views Bulk Operations (VBO) (https://www.drupal.org/project/views_bulk_operations)
   module may be helpful in building UI for re-saving entities.

   Note:  basically there is no way to restore all revisions data after deletion
   from fields revisions tables (for example, via module's
   "Delete revisions data" form).


Q: How can I upgrade the module from 7.x-1.x to 7.x-2.x?

A: Basically there is no upgrade path in the 7.x-2.x branch for easy upgrade via
   update.php script, trying to just replace the module by 7.x-2.x will break
   your site. But patches are always welcome.
