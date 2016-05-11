<?php
/**
 * @file
 * ctf_content_types_toronto_condo.features.inc
 */

/**
 * Implements hook_default_drealty_listing_type().
 */
function ctf_content_types_toronto_condo_default_drealty_listing_type() {
  $items = array();
  $items['toronto_condo'] = entity_import('drealty_listing_type', '{
    "weight" : "0",
    "locked" : "0",
    "data" : null,
    "fields" : {
      "field_toronto_gallery" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : { "fid" : [ "fid" ] },
        "settings" : { "default_image" : 8668, "uri_scheme" : "public" },
        "translatable" : "0",
        "foreign keys" : { "fid" : { "table" : "file_managed", "columns" : { "fid" : "fid" } } },
        "field_name" : "field_toronto_gallery",
        "type" : "image",
        "module" : "image",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "-1",
        "deleted" : "0",
        "columns" : {
          "fid" : {
            "description" : "The {file_managed}.fid being referenced in this field.",
            "type" : "int",
            "not null" : false,
            "unsigned" : true
          },
          "alt" : {
            "description" : "Alternative image text, for the image\\u0027s \\u0027alt\\u0027 attribute.",
            "type" : "varchar",
            "length" : 512,
            "not null" : false
          },
          "title" : {
            "description" : "Image title text, for the image\\u0027s \\u0027title\\u0027 attribute.",
            "type" : "varchar",
            "length" : 1024,
            "not null" : false
          },
          "width" : {
            "description" : "The width of the image in pixels.",
            "type" : "int",
            "unsigned" : true
          },
          "height" : {
            "description" : "The height of the image in pixels.",
            "type" : "int",
            "unsigned" : true
          }
        }
      },
      "field_laundry__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_laundry__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_laundry_lev__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_laundry_lev__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_lease_term__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_lease_term__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level1__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level1__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level10__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level10__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level11__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level11__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level12__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level12__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level2__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level2__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level3__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level3__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level4__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level4__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level5__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level5__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level6__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level6__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level7__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level7__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level8__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level8__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_level9__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_level9__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_locker__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_locker__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_locker_num__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_locker_num__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_lp_dol__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_lp_dol__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_maint__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_maint__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_comel_inc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_comel_inc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_cond_txinc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_cond_txinc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_condo_corp__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_condo_corp__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_condo_exp__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_condo_exp__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_constr1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_constr1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_constr2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_constr2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_corp_num__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_corp_num__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_county__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_county__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_cross_st__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_cross_st__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_elevator__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_elevator__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_ens_lndry__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_ens_lndry__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_extras__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_extras__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_fpl_num__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_fpl_num__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_fuel__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_fuel__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_furnished__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_furnished__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_gar__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_gar__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_heat_inc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_heat_inc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_heating__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_heating__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_hydro_inc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_hydro_inc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_insur_bldg__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_insur_bldg__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_kit_plus__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_kit_plus__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mmap_page__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_mmap_page__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_wcloset_t2__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_wcloset_t2__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_wcloset_t2lvl__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_wcloset_t2lvl__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_wcloset_t3__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_t3__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_t3lvl__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_wcloset_t3lvl__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_wcloset_t4__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_t4__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_t4lvl__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_wcloset_t4lvl__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_wcloset_t5__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_t5__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_t5lvl__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_wcloset_t5lvl__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_yr__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_yr__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_yr_built__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_yr_built__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_zip__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_zip__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_zoning__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_zoning__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_a_c__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_a_c__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_prop_feat3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_prop_feat3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_prop_feat4_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_prop_feat4_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_prop_feat5_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_prop_feat5_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_prop_feat6_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_prop_feat6_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm9_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm9_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm9_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm9_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_pets__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_pets__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_prkg_inc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_prkg_inc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_prop_feat1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_prop_feat1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_prop_feat2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_prop_feat2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_pvt_ent__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_pvt_ent__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_retirement__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_retirement__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rltr__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rltr__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm1_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm1_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm1_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm1_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_ml_num__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_ml_num__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm1_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm1_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm1_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm1_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm1_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm1_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm10_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm10_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm10_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm10_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm10_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm10_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm10_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm10_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm10_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm10_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm10_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm10_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm11_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm11_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm11_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm11_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_spec_des6_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_spec_des6_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_sqft__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_sqft__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_st__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_st__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_st_dir__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_st_dir__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_st_num__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_st_num__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_st_sfx__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_st_sfx__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_status__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_status__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_stories__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_stories__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_style__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_style__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_taxes__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_taxes__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_tour_url__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_tour_url__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_community_code__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_community_code__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_area_code__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_area_code__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_tv__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_tv__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_type_own_srch__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_type_own_srch__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_type_own1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_type_own1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_uffi__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_uffi__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_unit_num__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_unit_num__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_water_inc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_water_inc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_wcloset_p1__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_p1__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_p2__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_p2__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_p3__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_p3__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_p4__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_p4__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_p5__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_p5__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_t1__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_wcloset_t1__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_wcloset_t1lvl__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_wcloset_t1lvl__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mmap_row__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_mmap_row__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_num_kit__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_num_kit__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_parcel_id__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_parcel_id__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_chgs__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_park_chgs__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_park_desig__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_park_desig__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_desig_2__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_park_desig_2__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_fac__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_park_fac__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_lgl_desc1__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_park_lgl_desc1__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_lgl_desc2__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_park_lgl_desc2__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_spc1__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_park_spc1__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_spcs__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_park_spcs__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_patio_ter__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_patio_ter__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm7_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm7_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm7_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm7_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm7_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm7_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm7_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm7_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm8_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm8_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm8_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm8_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm8_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm8_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm8_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm8_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm8_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm8_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm8_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm8_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm9_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm9_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm9_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm9_dc2_out__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm9_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm9_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm9_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm9_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rms__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rms__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rooms_plus__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rooms_plus__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_s_r__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_s_r__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_share_perc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_share_perc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_spec_des1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_spec_des1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_spec_des2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_spec_des2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_spec_des3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_spec_des3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_spec_des4_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_spec_des4_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_spec_des5_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_spec_des5_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_outof_area__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_outof_area__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_park_spc2__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_park_spc2__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm11_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm11_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm11_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm11_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm11_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm11_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm11_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm11_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm12_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm12_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm12_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm12_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm12_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm12_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm12_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm12_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm12_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm12_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm12_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm12_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm2_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm2_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm2_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm2_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm2_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm2_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm2_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm2_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm3_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm3_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm3_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm3_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm3_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm3_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm3_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm3_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm3_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm3_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm4_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm4_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm4_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm4_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm4_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm4_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm4_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm4_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm4_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm4_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm4_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm4_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm5_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm5_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm5_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm5_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm5_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm5_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm5_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm5_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm5_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm5_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm5_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm5_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm6_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm6_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm6_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm6_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm6_dc3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm6_dc3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm6_len__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm6_len__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm6_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm6_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm6_wth__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_rm6_wth__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_rm7_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm7_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm7_dc2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm7_dc2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_den_fr__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_den_fr__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_disp_addr__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_disp_addr__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_area__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_area__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_community__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_community__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_municipality_code__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_municipality_code__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_municipality_district__tor" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_municipality_district__tor",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_municipality__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_municipality__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_addr__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_addr__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_all_inc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_all_inc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_apt_num__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_apt_num__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_ass_year__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_ass_year__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_bath_tot__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_bath_tot__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_bldg_amen1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bldg_amen1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_bldg_amen2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bldg_amen2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_bldg_amen3_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bldg_amen3_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_bldg_amen4_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bldg_amen4_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_bldg_amen5_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bldg_amen5_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_bldg_amen6_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bldg_amen6_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_br__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_br__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_br_plus__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_br_plus__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_bsmt1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bsmt1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_cable__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_cable__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_cac_inc__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_cac_inc__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_central_vac__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_central_vac__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mmap_col__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_mmap_col__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_gar_type__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_gar_type__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_rm2_dc1_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_rm2_dc1_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_bsmt2_out__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_bsmt2_out__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_ad_text__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : [],
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_ad_text__torcond",
        "type" : "text_long",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "text", "size" : "big", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_vtour_updt__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : {
          "granularity" : {
            "day" : "day",
            "hour" : "hour",
            "minute" : "minute",
            "month" : "month",
            "year" : "year"
          },
          "timezone_db" : "UTC",
          "todate" : "",
          "tz_handling" : "site"
        },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_vtour_updt__torcond",
        "type" : "datetime",
        "module" : "date",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "datetime",
            "mysql_type" : "datetime",
            "pgsql_type" : "timestamp without time zone",
            "sqlite_type" : "varchar",
            "sqlsrv_type" : "smalldatetime",
            "not null" : false,
            "sortable" : true,
            "views" : true
          }
        }
      },
      "field_timestamp_sql__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : {
          "granularity" : {
            "day" : "day",
            "hour" : "hour",
            "minute" : "minute",
            "month" : "month",
            "year" : "year"
          },
          "timezone_db" : "UTC",
          "todate" : "",
          "tz_handling" : "site"
        },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_timestamp_sql__torcond",
        "type" : "datetime",
        "module" : "date",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "datetime",
            "mysql_type" : "datetime",
            "pgsql_type" : "timestamp without time zone",
            "sqlite_type" : "varchar",
            "sqlsrv_type" : "smalldatetime",
            "not null" : false,
            "sortable" : true,
            "views" : true
          }
        }
      },
      "field_idx_dt__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : {
          "granularity" : {
            "day" : "day",
            "hour" : "hour",
            "minute" : "minute",
            "month" : "month",
            "year" : "year"
          },
          "timezone_db" : "UTC",
          "todate" : "",
          "tz_handling" : "site"
        },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_idx_dt__torcond",
        "type" : "datetime",
        "module" : "date",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "datetime",
            "mysql_type" : "datetime",
            "pgsql_type" : "timestamp without time zone",
            "sqlite_type" : "varchar",
            "sqlsrv_type" : "smalldatetime",
            "not null" : false,
            "sortable" : true,
            "views" : true
          }
        }
      },
      "field_pix_updt__torcond" : {
        "entity_types" : [
          "drealty_listing",
          "drealty_office",
          "drealty_agent",
          "drealty_openhouse"
        ],
        "indexes" : [],
        "settings" : {
          "granularity" : {
            "day" : "day",
            "hour" : "hour",
            "minute" : "minute",
            "month" : "month",
            "year" : "year"
          },
          "timezone_db" : "UTC",
          "todate" : "",
          "tz_handling" : "site"
        },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_pix_updt__torcond",
        "type" : "datetime",
        "module" : "date",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "datetime",
            "mysql_type" : "datetime",
            "pgsql_type" : "timestamp without time zone",
            "sqlite_type" : "varchar",
            "sqlsrv_type" : "smalldatetime",
            "not null" : false,
            "sortable" : true,
            "views" : true
          }
        }
      },
      "field_test_geofilld" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : {
          "bbox" : [ "top", "bottom", "left", "right" ],
          "bottom" : [ "bottom" ],
          "centroid" : [ "lat", "lon" ],
          "geohash" : [ "geohash" ],
          "lat" : [ "lat" ],
          "left" : [ "left" ],
          "lon" : [ "lon" ],
          "right" : [ "right" ],
          "top" : [ "top" ]
        },
        "settings" : { "backend" : "default", "srid" : 4326 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_test_geofilld",
        "type" : "geofield",
        "module" : "geofield",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "geom" : { "type" : "blob", "size" : "big", "not null" : false },
          "geo_type" : { "type" : "varchar", "default" : "", "length" : 64 },
          "lat" : { "type" : "numeric", "precision" : 18, "scale" : 12, "not null" : false },
          "lon" : { "type" : "numeric", "precision" : 18, "scale" : 12, "not null" : false },
          "left" : { "type" : "numeric", "precision" : 18, "scale" : 12, "not null" : false },
          "top" : { "type" : "numeric", "precision" : 18, "scale" : 12, "not null" : false },
          "right" : { "type" : "numeric", "precision" : 18, "scale" : 12, "not null" : false },
          "bottom" : { "type" : "numeric", "precision" : 18, "scale" : 12, "not null" : false },
          "geohash" : { "type" : "varchar", "length" : 16, "not null" : false }
        }
      },
      "field_address_full__torcond" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "field_name" : "field_address_full__torcond",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_city_region__torcond" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : { "tid" : [ "tid" ] },
        "settings" : { "allowed_values" : [ { "vocabulary" : "neighbourhoods", "parent" : 0 } ] },
        "translatable" : "0",
        "foreign keys" : { "tid" : { "table" : "taxonomy_term_data", "columns" : { "tid" : "tid" } } },
        "field_name" : "field_city_region__torcond",
        "type" : "taxonomy_term_reference",
        "module" : "taxonomy",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "-1",
        "deleted" : "0",
        "columns" : { "tid" : { "type" : "int", "unsigned" : true, "not null" : false } }
      },
      "field_price_per_sqft__torcond" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_price_per_sqft__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_sqft_range_max__torcond" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : [],
        "settings" : [],
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_sqft_range_max__torcond",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_sqft_range_min__torcond" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : [],
        "settings" : [],
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_sqft_range_min__torcond",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_old_price_value_torcond" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "precision" : "10", "scale" : "2", "decimal_separator" : "." },
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_old_price_value_torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "-1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "numeric",
            "precision" : "10",
            "scale" : "2",
            "not null" : false
          }
        }
      },
      "field_old_price_value__torcond" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_old_price_value__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "-1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      }
    },
    "field_instances" : {
      "field_toronto_gallery" : {
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "image",
            "settings" : { "image_link" : "", "image_style" : "" },
            "type" : "image",
            "weight" : 0
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Toronto gallery",
        "required" : 0,
        "settings" : {
          "alt_field" : 0,
          "default_image" : 14989,
          "file_directory" : "condo_media",
          "file_extensions" : "png gif jpg jpeg",
          "max_filesize" : "",
          "max_resolution" : "",
          "min_resolution" : "",
          "title_field" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "image",
          "settings" : { "preview_image_style" : "thumbnail", "progress_indicator" : "throbber" },
          "type" : "image_image",
          "weight" : "1"
        },
        "id" : "299",
        "field_id" : "291",
        "field_name" : "field_toronto_gallery",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_laundry__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 1
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Laundry",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 2
        },
        "id" : "300",
        "field_id" : "292",
        "field_name" : "field_laundry__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_laundry_lev__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 2
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Laundry_lev",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 3
        },
        "id" : "301",
        "field_id" : "293",
        "field_name" : "field_laundry_lev__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_lease_term__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 3
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Lease_term",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 4
        },
        "id" : "302",
        "field_id" : "294",
        "field_name" : "field_lease_term__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level1__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 4
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level1",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 5
        },
        "id" : "303",
        "field_id" : "295",
        "field_name" : "field_level1__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level10__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 5
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level10",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 6
        },
        "id" : "304",
        "field_id" : "296",
        "field_name" : "field_level10__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level11__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 6
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level11",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 7
        },
        "id" : "305",
        "field_id" : "297",
        "field_name" : "field_level11__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level12__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 7
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level12",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 8
        },
        "id" : "306",
        "field_id" : "298",
        "field_name" : "field_level12__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level2__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 8
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level2",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 9
        },
        "id" : "307",
        "field_id" : "299",
        "field_name" : "field_level2__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level3__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 9
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level3",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 10
        },
        "id" : "308",
        "field_id" : "300",
        "field_name" : "field_level3__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level4__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 10
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level4",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 11
        },
        "id" : "309",
        "field_id" : "301",
        "field_name" : "field_level4__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level5__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 11
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level5",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 12
        },
        "id" : "310",
        "field_id" : "302",
        "field_name" : "field_level5__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level6__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 12
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level6",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 13
        },
        "id" : "311",
        "field_id" : "303",
        "field_name" : "field_level6__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level7__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 13
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level7",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 14
        },
        "id" : "312",
        "field_id" : "304",
        "field_name" : "field_level7__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level8__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 14
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level8",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 15
        },
        "id" : "313",
        "field_id" : "305",
        "field_name" : "field_level8__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_level9__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 15
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Level9",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 16
        },
        "id" : "314",
        "field_id" : "306",
        "field_name" : "field_level9__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_locker__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 16
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Locker",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 17
        },
        "id" : "315",
        "field_id" : "307",
        "field_name" : "field_locker__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_locker_num__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 17
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Locker_num",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 18
        },
        "id" : "316",
        "field_id" : "308",
        "field_name" : "field_locker_num__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_lp_dol__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 18
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Lp_dol",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 19 },
        "id" : "317",
        "field_id" : "309",
        "field_name" : "field_lp_dol__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_maint__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 19
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Maint",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 20 },
        "id" : "318",
        "field_id" : "310",
        "field_name" : "field_maint__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_comel_inc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 21
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Comel_inc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 22
        },
        "id" : "320",
        "field_id" : "311",
        "field_name" : "field_comel_inc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_cond_txinc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 22
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Cond_txinc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 23
        },
        "id" : "321",
        "field_id" : "312",
        "field_name" : "field_cond_txinc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_condo_corp__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 23
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Condo_corp",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 24
        },
        "id" : "322",
        "field_id" : "313",
        "field_name" : "field_condo_corp__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_condo_exp__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 24
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Condo_exp",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 25
        },
        "id" : "323",
        "field_id" : "314",
        "field_name" : "field_condo_exp__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_constr1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 25
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Constr1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 26
        },
        "id" : "324",
        "field_id" : "315",
        "field_name" : "field_constr1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_constr2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 26
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Constr2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 27
        },
        "id" : "325",
        "field_id" : "316",
        "field_name" : "field_constr2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_corp_num__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 27
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Corp_num",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 28 },
        "id" : "326",
        "field_id" : "317",
        "field_name" : "field_corp_num__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_county__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 28
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "County",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 29
        },
        "id" : "327",
        "field_id" : "318",
        "field_name" : "field_county__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_cross_st__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 29
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Cross_st",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 30
        },
        "id" : "328",
        "field_id" : "319",
        "field_name" : "field_cross_st__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_elevator__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 30
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Elevator",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 31
        },
        "id" : "329",
        "field_id" : "320",
        "field_name" : "field_elevator__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_ens_lndry__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 31
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Ens_lndry",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 32
        },
        "id" : "330",
        "field_id" : "321",
        "field_name" : "field_ens_lndry__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_extras__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 32
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Extras",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 33
        },
        "id" : "331",
        "field_id" : "322",
        "field_name" : "field_extras__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_fpl_num__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 33
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Fpl_num",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 34
        },
        "id" : "332",
        "field_id" : "323",
        "field_name" : "field_fpl_num__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_fuel__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 34
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Fuel",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 35
        },
        "id" : "333",
        "field_id" : "324",
        "field_name" : "field_fuel__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_furnished__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 35
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Furnished",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 36
        },
        "id" : "334",
        "field_id" : "325",
        "field_name" : "field_furnished__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_gar__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 36
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Gar",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 37 },
        "id" : "335",
        "field_id" : "326",
        "field_name" : "field_gar__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_heat_inc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 38
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Heat_inc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 39
        },
        "id" : "337",
        "field_id" : "327",
        "field_name" : "field_heat_inc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_heating__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 39
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Heating",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 40
        },
        "id" : "338",
        "field_id" : "328",
        "field_name" : "field_heating__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_hydro_inc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 40
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Hydro_inc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 41
        },
        "id" : "339",
        "field_id" : "329",
        "field_name" : "field_hydro_inc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_insur_bldg__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 41
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Insur_bldg",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 42
        },
        "id" : "340",
        "field_id" : "330",
        "field_name" : "field_insur_bldg__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_kit_plus__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 42
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Kit_plus",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 43
        },
        "id" : "341",
        "field_id" : "331",
        "field_name" : "field_kit_plus__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mmap_page__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 43
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Mmap_page",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 44
        },
        "id" : "342",
        "field_id" : "332",
        "field_name" : "field_mmap_page__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t2__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 44
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t2",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "45"
        },
        "id" : "343",
        "field_id" : "333",
        "field_name" : "field_wcloset_t2__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t2lvl__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 45
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t2lvl",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "46"
        },
        "id" : "344",
        "field_id" : "334",
        "field_name" : "field_wcloset_t2lvl__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t3__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 46
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t3",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "47"
        },
        "id" : "345",
        "field_id" : "335",
        "field_name" : "field_wcloset_t3__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t3lvl__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 47
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t3lvl",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "48"
        },
        "id" : "346",
        "field_id" : "336",
        "field_name" : "field_wcloset_t3lvl__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t4__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 48
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t4",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "49"
        },
        "id" : "347",
        "field_id" : "337",
        "field_name" : "field_wcloset_t4__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t4lvl__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 49
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t4lvl",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "50"
        },
        "id" : "348",
        "field_id" : "338",
        "field_name" : "field_wcloset_t4lvl__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t5__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 50
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t5",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "51"
        },
        "id" : "349",
        "field_id" : "339",
        "field_name" : "field_wcloset_t5__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t5lvl__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 51
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t5lvl",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "52"
        },
        "id" : "350",
        "field_id" : "340",
        "field_name" : "field_wcloset_t5lvl__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_yr__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 52
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Yr",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "53"
        },
        "id" : "351",
        "field_id" : "341",
        "field_name" : "field_yr__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_yr_built__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 53
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Yr_built",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "54"
        },
        "id" : "352",
        "field_id" : "342",
        "field_name" : "field_yr_built__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_zip__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 54
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Zip",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "55"
        },
        "id" : "353",
        "field_id" : "343",
        "field_name" : "field_zip__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_zoning__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 55
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Zoning",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "56"
        },
        "id" : "354",
        "field_id" : "344",
        "field_name" : "field_zoning__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_a_c__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 56
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "A_c",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 57
        },
        "id" : "355",
        "field_id" : "345",
        "field_name" : "field_a_c__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_prop_feat3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 57
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Prop_feat3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 58
        },
        "id" : "356",
        "field_id" : "346",
        "field_name" : "field_prop_feat3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_prop_feat4_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 58
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Prop_feat4_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 59
        },
        "id" : "357",
        "field_id" : "347",
        "field_name" : "field_prop_feat4_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_prop_feat5_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 59
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Prop_feat5_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 60
        },
        "id" : "358",
        "field_id" : "348",
        "field_name" : "field_prop_feat5_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_prop_feat6_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 60
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Prop_feat6_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 61
        },
        "id" : "359",
        "field_id" : "349",
        "field_name" : "field_prop_feat6_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm9_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 61
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm9_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "62"
        },
        "id" : "360",
        "field_id" : "350",
        "field_name" : "field_rm9_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm9_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 62
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm9_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "63"
        },
        "id" : "361",
        "field_id" : "351",
        "field_name" : "field_rm9_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_pets__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 63
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Pets",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 64
        },
        "id" : "362",
        "field_id" : "352",
        "field_name" : "field_pets__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_prkg_inc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 64
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Prkg_inc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 65
        },
        "id" : "363",
        "field_id" : "353",
        "field_name" : "field_prkg_inc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_prop_feat1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 65
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Prop_feat1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 66
        },
        "id" : "364",
        "field_id" : "354",
        "field_name" : "field_prop_feat1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_prop_feat2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 66
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Prop_feat2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 67
        },
        "id" : "365",
        "field_id" : "355",
        "field_name" : "field_prop_feat2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_pvt_ent__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 67
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Pvt_ent",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 68
        },
        "id" : "366",
        "field_id" : "356",
        "field_name" : "field_pvt_ent__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_retirement__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 68
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Retirement",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 69
        },
        "id" : "367",
        "field_id" : "357",
        "field_name" : "field_retirement__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rltr__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 69
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rltr",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 70
        },
        "id" : "368",
        "field_id" : "358",
        "field_name" : "field_rltr__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm1_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 70
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm1_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 71
        },
        "id" : "369",
        "field_id" : "359",
        "field_name" : "field_rm1_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm1_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 71
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm1_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 72
        },
        "id" : "370",
        "field_id" : "360",
        "field_name" : "field_rm1_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_ml_num__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 72
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Ml_num",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 73
        },
        "id" : "371",
        "field_id" : "361",
        "field_name" : "field_ml_num__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm1_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 73
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm1_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 74
        },
        "id" : "372",
        "field_id" : "362",
        "field_name" : "field_rm1_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm1_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 74
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm1_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 75 },
        "id" : "373",
        "field_id" : "363",
        "field_name" : "field_rm1_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 75
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 76
        },
        "id" : "374",
        "field_id" : "364",
        "field_name" : "field_rm1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm1_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 76
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm1_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 77 },
        "id" : "375",
        "field_id" : "365",
        "field_name" : "field_rm1_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm10_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 77
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm10_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 78
        },
        "id" : "376",
        "field_id" : "366",
        "field_name" : "field_rm10_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm10_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 78
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm10_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 79
        },
        "id" : "377",
        "field_id" : "367",
        "field_name" : "field_rm10_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm10_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 79
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm10_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 80
        },
        "id" : "378",
        "field_id" : "368",
        "field_name" : "field_rm10_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm10_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 80
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm10_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 81 },
        "id" : "379",
        "field_id" : "369",
        "field_name" : "field_rm10_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm10_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 81
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm10_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 82
        },
        "id" : "380",
        "field_id" : "370",
        "field_name" : "field_rm10_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm10_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 82
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm10_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 83 },
        "id" : "381",
        "field_id" : "371",
        "field_name" : "field_rm10_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm11_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 83
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm11_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 84
        },
        "id" : "382",
        "field_id" : "372",
        "field_name" : "field_rm11_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm11_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 84
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm11_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 85
        },
        "id" : "383",
        "field_id" : "373",
        "field_name" : "field_rm11_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_spec_des6_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 85
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Spec_des6_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "86"
        },
        "id" : "384",
        "field_id" : "374",
        "field_name" : "field_spec_des6_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_sqft__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 86
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Sqft",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "87"
        },
        "id" : "385",
        "field_id" : "375",
        "field_name" : "field_sqft__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_st__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 87
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "St",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "88"
        },
        "id" : "386",
        "field_id" : "376",
        "field_name" : "field_st__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_st_dir__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 88
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "St_dir",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "89"
        },
        "id" : "387",
        "field_id" : "377",
        "field_name" : "field_st_dir__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_st_num__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 89
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "St_num",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "90"
        },
        "id" : "388",
        "field_id" : "378",
        "field_name" : "field_st_num__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_st_sfx__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 90
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "St_sfx",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "91"
        },
        "id" : "389",
        "field_id" : "379",
        "field_name" : "field_st_sfx__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_status__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 91
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Status",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "92"
        },
        "id" : "390",
        "field_id" : "380",
        "field_name" : "field_status__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_stories__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 92
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Stories",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "93"
        },
        "id" : "391",
        "field_id" : "381",
        "field_name" : "field_stories__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_style__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 93
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Style",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "94"
        },
        "id" : "392",
        "field_id" : "382",
        "field_name" : "field_style__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_taxes__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 94
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Taxes",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "95"
        },
        "id" : "393",
        "field_id" : "383",
        "field_name" : "field_taxes__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_tour_url__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 95
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Tour_url",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "96"
        },
        "id" : "394",
        "field_id" : "384",
        "field_name" : "field_tour_url__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_community_code__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 96
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Community_code",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 97
        },
        "id" : "395",
        "field_id" : "385",
        "field_name" : "field_community_code__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_area_code__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 97
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Area_code",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 98
        },
        "id" : "396",
        "field_id" : "386",
        "field_name" : "field_area_code__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_tv__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 98
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Tv",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "99"
        },
        "id" : "397",
        "field_id" : "387",
        "field_name" : "field_tv__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_type_own_srch__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 99
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "3_3_CondoProperty" : {
              "class_id" : 9,
              "conid" : 3,
              "rets_field" : "Type_own_srch - Type",
              "rid" : 3
            }
          }
        },
        "label" : "Type_own_srch",
        "required" : 0,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "100"
        },
        "id" : "398",
        "field_id" : "388",
        "field_name" : "field_type_own_srch__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_type_own1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 100
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Type_own1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "101"
        },
        "id" : "399",
        "field_id" : "389",
        "field_name" : "field_type_own1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_uffi__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 101
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Uffi",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "102"
        },
        "id" : "400",
        "field_id" : "390",
        "field_name" : "field_uffi__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_unit_num__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 102
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Unit_num",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "103"
        },
        "id" : "401",
        "field_id" : "391",
        "field_name" : "field_unit_num__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_water_inc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 104
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Water_inc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "105"
        },
        "id" : "403",
        "field_id" : "393",
        "field_name" : "field_water_inc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_p1__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 105
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_p1",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "106"
        },
        "id" : "404",
        "field_id" : "394",
        "field_name" : "field_wcloset_p1__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_p2__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 106
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_p2",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "107"
        },
        "id" : "405",
        "field_id" : "395",
        "field_name" : "field_wcloset_p2__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_p3__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 107
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_p3",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "108"
        },
        "id" : "406",
        "field_id" : "396",
        "field_name" : "field_wcloset_p3__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_p4__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 108
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_p4",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "109"
        },
        "id" : "407",
        "field_id" : "397",
        "field_name" : "field_wcloset_p4__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_p5__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 109
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_p5",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "110"
        },
        "id" : "408",
        "field_id" : "398",
        "field_name" : "field_wcloset_p5__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t1__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 110
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t1",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "111"
        },
        "id" : "409",
        "field_id" : "399",
        "field_name" : "field_wcloset_t1__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_wcloset_t1lvl__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 111
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Wcloset_t1lvl",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "112"
        },
        "id" : "410",
        "field_id" : "400",
        "field_name" : "field_wcloset_t1lvl__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mmap_row__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 112
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Mmap_row",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 113
        },
        "id" : "411",
        "field_id" : "401",
        "field_name" : "field_mmap_row__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_num_kit__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 113
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Num_kit",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 114
        },
        "id" : "412",
        "field_id" : "402",
        "field_name" : "field_num_kit__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_parcel_id__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 115
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Parcel_id",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 116
        },
        "id" : "414",
        "field_id" : "403",
        "field_name" : "field_parcel_id__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_chgs__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 116
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_chgs",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 117
        },
        "id" : "415",
        "field_id" : "404",
        "field_name" : "field_park_chgs__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_desig__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 117
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_desig",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 118
        },
        "id" : "416",
        "field_id" : "405",
        "field_name" : "field_park_desig__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_desig_2__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 118
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_desig_2",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 119
        },
        "id" : "417",
        "field_id" : "406",
        "field_name" : "field_park_desig_2__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_fac__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 119
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_fac",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 120
        },
        "id" : "418",
        "field_id" : "407",
        "field_name" : "field_park_fac__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_lgl_desc1__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 120
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_lgl_desc1",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 121
        },
        "id" : "419",
        "field_id" : "408",
        "field_name" : "field_park_lgl_desc1__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_lgl_desc2__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 121
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_lgl_desc2",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 122
        },
        "id" : "420",
        "field_id" : "409",
        "field_name" : "field_park_lgl_desc2__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_spc1__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 122
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_spc1",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 123
        },
        "id" : "421",
        "field_id" : "410",
        "field_name" : "field_park_spc1__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_spcs__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 124
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_spcs",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 125
        },
        "id" : "423",
        "field_id" : "411",
        "field_name" : "field_park_spcs__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_patio_ter__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 125
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Patio_ter",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 126
        },
        "id" : "424",
        "field_id" : "412",
        "field_name" : "field_patio_ter__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm7_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 126
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm7_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "127"
        },
        "id" : "425",
        "field_id" : "413",
        "field_name" : "field_rm7_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm7_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 127
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm7_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "128"
        },
        "id" : "426",
        "field_id" : "414",
        "field_name" : "field_rm7_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm7_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 128
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm7_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "129"
        },
        "id" : "427",
        "field_id" : "415",
        "field_name" : "field_rm7_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm7_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 129
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm7_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "130"
        },
        "id" : "428",
        "field_id" : "416",
        "field_name" : "field_rm7_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm8_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 130
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm8_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "131"
        },
        "id" : "429",
        "field_id" : "417",
        "field_name" : "field_rm8_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm8_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 131
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm8_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "132"
        },
        "id" : "430",
        "field_id" : "418",
        "field_name" : "field_rm8_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm8_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 132
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm8_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "133"
        },
        "id" : "431",
        "field_id" : "419",
        "field_name" : "field_rm8_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm8_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 133
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm8_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "134"
        },
        "id" : "432",
        "field_id" : "420",
        "field_name" : "field_rm8_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm8_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 134
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm8_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "135"
        },
        "id" : "433",
        "field_id" : "421",
        "field_name" : "field_rm8_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm8_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 135
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm8_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "136"
        },
        "id" : "434",
        "field_id" : "422",
        "field_name" : "field_rm8_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm9_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 136
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm9_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "137"
        },
        "id" : "435",
        "field_id" : "423",
        "field_name" : "field_rm9_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm9_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 137
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm9_dc2_out",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "138"
        },
        "id" : "436",
        "field_id" : "424",
        "field_name" : "field_rm9_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm9_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 138
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm9_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "139"
        },
        "id" : "437",
        "field_id" : "425",
        "field_name" : "field_rm9_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm9_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 139
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm9_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "140"
        },
        "id" : "438",
        "field_id" : "426",
        "field_name" : "field_rm9_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rms__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 140
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rms",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "141"
        },
        "id" : "439",
        "field_id" : "427",
        "field_name" : "field_rms__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rooms_plus__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 141
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rooms_plus",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "142"
        },
        "id" : "440",
        "field_id" : "428",
        "field_name" : "field_rooms_plus__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_s_r__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 142
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "S_r",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "143"
        },
        "id" : "441",
        "field_id" : "429",
        "field_name" : "field_s_r__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_share_perc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 143
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Share_perc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "144"
        },
        "id" : "442",
        "field_id" : "430",
        "field_name" : "field_share_perc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_spec_des1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 144
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Spec_des1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "145"
        },
        "id" : "443",
        "field_id" : "431",
        "field_name" : "field_spec_des1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_spec_des2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 145
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Spec_des2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "146"
        },
        "id" : "444",
        "field_id" : "432",
        "field_name" : "field_spec_des2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_spec_des3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 146
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Spec_des3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "147"
        },
        "id" : "445",
        "field_id" : "433",
        "field_name" : "field_spec_des3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_spec_des4_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 147
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Spec_des4_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "148"
        },
        "id" : "446",
        "field_id" : "434",
        "field_name" : "field_spec_des4_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_spec_des5_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 148
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Spec_des5_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "149"
        },
        "id" : "447",
        "field_id" : "435",
        "field_name" : "field_spec_des5_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_outof_area__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 149
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Outof_area",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 150
        },
        "id" : "448",
        "field_id" : "436",
        "field_name" : "field_outof_area__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_park_spc2__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 150
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Park_spc2",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 151
        },
        "id" : "449",
        "field_id" : "437",
        "field_name" : "field_park_spc2__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm11_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 151
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm11_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 152
        },
        "id" : "450",
        "field_id" : "438",
        "field_name" : "field_rm11_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm11_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 152
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm11_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 153
        },
        "id" : "451",
        "field_id" : "439",
        "field_name" : "field_rm11_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm11_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 153
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm11_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 154
        },
        "id" : "452",
        "field_id" : "440",
        "field_name" : "field_rm11_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm11_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 154
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm11_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 155
        },
        "id" : "453",
        "field_id" : "441",
        "field_name" : "field_rm11_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm12_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 155
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm12_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 156
        },
        "id" : "454",
        "field_id" : "442",
        "field_name" : "field_rm12_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm12_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 156
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm12_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 157
        },
        "id" : "455",
        "field_id" : "443",
        "field_name" : "field_rm12_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm12_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 157
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm12_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 158
        },
        "id" : "456",
        "field_id" : "444",
        "field_name" : "field_rm12_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm12_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 158
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm12_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 159
        },
        "id" : "457",
        "field_id" : "445",
        "field_name" : "field_rm12_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm12_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 159
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm12_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 160
        },
        "id" : "458",
        "field_id" : "446",
        "field_name" : "field_rm12_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm12_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 160
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm12_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 161
        },
        "id" : "459",
        "field_id" : "447",
        "field_name" : "field_rm12_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm2_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 162
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm2_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 163
        },
        "id" : "461",
        "field_id" : "448",
        "field_name" : "field_rm2_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm2_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 163
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm2_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 164
        },
        "id" : "462",
        "field_id" : "449",
        "field_name" : "field_rm2_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm2_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 164
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm2_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 165
        },
        "id" : "463",
        "field_id" : "450",
        "field_name" : "field_rm2_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 165
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 166
        },
        "id" : "464",
        "field_id" : "451",
        "field_name" : "field_rm2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm2_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 166
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm2_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 167
        },
        "id" : "465",
        "field_id" : "452",
        "field_name" : "field_rm2_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm3_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 167
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm3_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 168
        },
        "id" : "466",
        "field_id" : "453",
        "field_name" : "field_rm3_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm3_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 168
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm3_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "169"
        },
        "id" : "467",
        "field_id" : "454",
        "field_name" : "field_rm3_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm3_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 169
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm3_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "170"
        },
        "id" : "468",
        "field_id" : "455",
        "field_name" : "field_rm3_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm3_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 170
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm3_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "171"
        },
        "id" : "469",
        "field_id" : "456",
        "field_name" : "field_rm3_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 171
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "172"
        },
        "id" : "470",
        "field_id" : "457",
        "field_name" : "field_rm3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm3_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 172
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm3_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "173"
        },
        "id" : "471",
        "field_id" : "458",
        "field_name" : "field_rm3_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm4_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 173
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm4_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "174"
        },
        "id" : "472",
        "field_id" : "459",
        "field_name" : "field_rm4_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm4_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 174
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm4_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "175"
        },
        "id" : "473",
        "field_id" : "460",
        "field_name" : "field_rm4_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm4_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 175
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm4_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "176"
        },
        "id" : "474",
        "field_id" : "461",
        "field_name" : "field_rm4_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm4_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 176
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm4_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "177"
        },
        "id" : "475",
        "field_id" : "462",
        "field_name" : "field_rm4_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm4_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 177
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm4_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "178"
        },
        "id" : "476",
        "field_id" : "463",
        "field_name" : "field_rm4_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm4_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 178
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm4_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "179"
        },
        "id" : "477",
        "field_id" : "464",
        "field_name" : "field_rm4_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm5_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 179
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm5_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "180"
        },
        "id" : "478",
        "field_id" : "465",
        "field_name" : "field_rm5_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm5_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 180
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm5_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "181"
        },
        "id" : "479",
        "field_id" : "466",
        "field_name" : "field_rm5_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm5_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 181
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm5_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "182"
        },
        "id" : "480",
        "field_id" : "467",
        "field_name" : "field_rm5_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm5_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 182
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm5_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "183"
        },
        "id" : "481",
        "field_id" : "468",
        "field_name" : "field_rm5_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm5_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 183
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm5_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "184"
        },
        "id" : "482",
        "field_id" : "469",
        "field_name" : "field_rm5_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm5_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 184
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm5_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "185"
        },
        "id" : "483",
        "field_id" : "470",
        "field_name" : "field_rm5_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm6_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 185
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm6_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "186"
        },
        "id" : "484",
        "field_id" : "471",
        "field_name" : "field_rm6_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm6_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 186
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm6_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "187"
        },
        "id" : "485",
        "field_id" : "472",
        "field_name" : "field_rm6_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm6_dc3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 187
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm6_dc3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "188"
        },
        "id" : "486",
        "field_id" : "473",
        "field_name" : "field_rm6_dc3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm6_len__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 188
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm6_len",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "189"
        },
        "id" : "487",
        "field_id" : "474",
        "field_name" : "field_rm6_len__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm6_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 189
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm6_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "190"
        },
        "id" : "488",
        "field_id" : "475",
        "field_name" : "field_rm6_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm6_wth__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 190
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm6_wth",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "191"
        },
        "id" : "489",
        "field_id" : "476",
        "field_name" : "field_rm6_wth__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm7_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 191
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm7_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "192"
        },
        "id" : "490",
        "field_id" : "477",
        "field_name" : "field_rm7_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm7_dc2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 192
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm7_dc2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : "193"
        },
        "id" : "491",
        "field_id" : "478",
        "field_name" : "field_rm7_dc2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_den_fr__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 193
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Den_fr",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 194
        },
        "id" : "492",
        "field_id" : "479",
        "field_name" : "field_den_fr__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_disp_addr__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 194
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Disp_addr",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 195
        },
        "id" : "493",
        "field_id" : "480",
        "field_name" : "field_disp_addr__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_area__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 196
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Area",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 197
        },
        "id" : "495",
        "field_id" : "482",
        "field_name" : "field_area__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_community__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 197
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Community",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 198
        },
        "id" : "496",
        "field_id" : "483",
        "field_name" : "field_community__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_municipality_code__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 198
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Municipality_code",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 199
        },
        "id" : "497",
        "field_id" : "484",
        "field_name" : "field_municipality_code__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_municipality_district__tor" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 199
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Municipality_district",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 200
        },
        "id" : "498",
        "field_id" : "485",
        "field_name" : "field_municipality_district__tor",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_municipality__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 200
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Municipality",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 201
        },
        "id" : "499",
        "field_id" : "486",
        "field_name" : "field_municipality__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_addr__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 204
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Addr",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 205
        },
        "id" : "503",
        "field_id" : "490",
        "field_name" : "field_addr__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_all_inc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 205
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "All_inc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 206
        },
        "id" : "504",
        "field_id" : "491",
        "field_name" : "field_all_inc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_apt_num__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 206
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Apt_num",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 207
        },
        "id" : "505",
        "field_id" : "492",
        "field_name" : "field_apt_num__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_ass_year__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 207
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Ass_year",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 208
        },
        "id" : "506",
        "field_id" : "493",
        "field_name" : "field_ass_year__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bath_tot__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 208
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bath_tot",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 209
        },
        "id" : "507",
        "field_id" : "494",
        "field_name" : "field_bath_tot__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bldg_amen1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 209
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bldg_amen1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 210
        },
        "id" : "508",
        "field_id" : "495",
        "field_name" : "field_bldg_amen1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bldg_amen2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 210
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bldg_amen2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 211
        },
        "id" : "509",
        "field_id" : "496",
        "field_name" : "field_bldg_amen2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bldg_amen3_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 211
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bldg_amen3_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 212
        },
        "id" : "510",
        "field_id" : "497",
        "field_name" : "field_bldg_amen3_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bldg_amen4_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 212
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bldg_amen4_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 213
        },
        "id" : "511",
        "field_id" : "498",
        "field_name" : "field_bldg_amen4_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bldg_amen5_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 213
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bldg_amen5_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 214
        },
        "id" : "512",
        "field_id" : "499",
        "field_name" : "field_bldg_amen5_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bldg_amen6_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 214
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bldg_amen6_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 215
        },
        "id" : "513",
        "field_id" : "500",
        "field_name" : "field_bldg_amen6_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_br__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 215
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Br",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 216
        },
        "id" : "514",
        "field_id" : "501",
        "field_name" : "field_br__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_br_plus__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 216
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Br_plus",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 217
        },
        "id" : "515",
        "field_id" : "502",
        "field_name" : "field_br_plus__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bsmt1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 217
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bsmt1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 218
        },
        "id" : "516",
        "field_id" : "503",
        "field_name" : "field_bsmt1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_cable__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 218
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Cable",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 219
        },
        "id" : "517",
        "field_id" : "504",
        "field_name" : "field_cable__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_cac_inc__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 219
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Cac_inc",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 220
        },
        "id" : "518",
        "field_id" : "505",
        "field_name" : "field_cac_inc__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_central_vac__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 220
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Central_vac",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 221
        },
        "id" : "519",
        "field_id" : "506",
        "field_name" : "field_central_vac__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mmap_col__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 221
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Mmap_col",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 222
        },
        "id" : "520",
        "field_id" : "507",
        "field_name" : "field_mmap_col__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_gar_type__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 222
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Gar_type",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 223
        },
        "id" : "521",
        "field_id" : "508",
        "field_name" : "field_gar_type__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_rm2_dc1_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 223
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Rm2_dc1_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 224
        },
        "id" : "522",
        "field_id" : "509",
        "field_name" : "field_rm2_dc1_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bsmt2_out__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 224
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Bsmt2_out",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 225
        },
        "id" : "523",
        "field_id" : "510",
        "field_name" : "field_bsmt2_out__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_ad_text__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 225
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Ad_text",
        "required" : false,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "module" : "text",
          "settings" : { "rows" : 5 },
          "type" : "text_textarea",
          "weight" : 226
        },
        "id" : "524",
        "field_id" : "511",
        "field_name" : "field_ad_text__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_vtour_updt__torcond" : {
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "date",
            "settings" : {
              "format_type" : "long",
              "fromto" : "both",
              "multiple_from" : "",
              "multiple_number" : "",
              "multiple_to" : "",
              "show_remaining_days" : false
            },
            "type" : "date_default",
            "weight" : 226
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Vtour_updt",
        "required" : false,
        "settings" : {
          "default_value" : "now",
          "default_value2" : "same",
          "default_value_code" : "",
          "default_value_code2" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "date",
          "settings" : {
            "increment" : 15,
            "input_format" : "m\\/d\\/Y - H:i:s",
            "input_format_custom" : "",
            "label_position" : "above",
            "text_parts" : [],
            "year_range" : "-3:+3"
          },
          "type" : "date_select",
          "weight" : "227"
        },
        "id" : "525",
        "field_id" : "512",
        "field_name" : "field_vtour_updt__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_timestamp_sql__torcond" : {
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "date",
            "settings" : {
              "format_type" : "long",
              "fromto" : "both",
              "multiple_from" : "",
              "multiple_number" : "",
              "multiple_to" : "",
              "show_remaining_days" : false
            },
            "type" : "date_default",
            "weight" : 227
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Timestamp_sql",
        "required" : false,
        "settings" : {
          "default_value" : "now",
          "default_value2" : "same",
          "default_value_code" : "",
          "default_value_code2" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "date",
          "settings" : {
            "increment" : 15,
            "input_format" : "m\\/d\\/Y - H:i:s",
            "input_format_custom" : "",
            "label_position" : "above",
            "text_parts" : [],
            "year_range" : "-3:+3"
          },
          "type" : "date_select",
          "weight" : "228"
        },
        "id" : "526",
        "field_id" : "513",
        "field_name" : "field_timestamp_sql__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_idx_dt__torcond" : {
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "date",
            "settings" : {
              "format_type" : "long",
              "fromto" : "both",
              "multiple_from" : "",
              "multiple_number" : "",
              "multiple_to" : "",
              "show_remaining_days" : false
            },
            "type" : "date_default",
            "weight" : 228
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Idx_dt",
        "required" : false,
        "settings" : {
          "default_value" : "now",
          "default_value2" : "same",
          "default_value_code" : "",
          "default_value_code2" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "date",
          "settings" : {
            "increment" : 15,
            "input_format" : "m\\/d\\/Y - H:i:s",
            "input_format_custom" : "",
            "label_position" : "above",
            "text_parts" : [],
            "year_range" : "-3:+3"
          },
          "type" : "date_select",
          "weight" : 229
        },
        "id" : "527",
        "field_id" : "514",
        "field_name" : "field_idx_dt__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_pix_updt__torcond" : {
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "date",
            "settings" : {
              "format_type" : "long",
              "fromto" : "both",
              "multiple_from" : "",
              "multiple_number" : "",
              "multiple_to" : "",
              "show_remaining_days" : false
            },
            "type" : "date_default",
            "weight" : 229
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Pix_updt",
        "required" : false,
        "settings" : {
          "default_value" : "now",
          "default_value2" : "same",
          "default_value_code" : "",
          "default_value_code2" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "date",
          "settings" : {
            "increment" : 15,
            "input_format" : "m\\/d\\/Y - H:i:s",
            "input_format_custom" : "",
            "label_position" : "above",
            "text_parts" : [],
            "year_range" : "-3:+3"
          },
          "type" : "date_select",
          "weight" : 230
        },
        "id" : "528",
        "field_id" : "515",
        "field_name" : "field_pix_updt__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_test_geofilld" : {
        "default_value" : [],
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "geofield",
            "settings" : { "data" : "full" },
            "type" : "geofield_wkt",
            "weight" : 230
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "4_4_CondoProperty" : { "class_id" : 12, "conid" : 4, "rets_field" : 1, "rid" : 4 } }
        },
        "label" : "Location",
        "required" : 0,
        "settings" : { "user_register_form" : false },
        "widget" : {
          "active" : 1,
          "module" : "geocoder",
          "settings" : {
            "delta_handling" : "default",
            "geocoder_field" : "field_address_full__torcond",
            "geocoder_handler" : "google",
            "handler_settings" : {
              "drealty.google" : {
                "all_results" : 0,
                "geometry_type" : "point",
                "reject_results" : {
                  "APPROXIMATE" : 0,
                  "GEOMETRIC_CENTER" : 0,
                  "RANGE_INTERPOLATED" : 0,
                  "ROOFTOP" : 0
                }
              },
              "google" : {
                "all_results" : 0,
                "biasing" : { "bounds" : "", "components" : "", "region" : "CA" },
                "geometry_type" : "point",
                "reject_results" : {
                  "APPROXIMATE" : 0,
                  "GEOMETRIC_CENTER" : 0,
                  "RANGE_INTERPOLATED" : 0,
                  "ROOFTOP" : 0
                }
              }
            }
          },
          "type" : "geocoder",
          "weight" : "231"
        },
        "id" : "529",
        "field_id" : "516",
        "field_name" : "field_test_geofilld",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_address_full__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 231
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "3_3_CondoProperty" : {
              "class_id" : 9,
              "conid" : 3,
              "rets_field" : "Addr - Address",
              "rid" : 3
            }
          }
        },
        "label" : "Full address",
        "required" : 0,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 232
        },
        "id" : "531",
        "field_id" : "518",
        "field_name" : "field_address_full__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_city_region__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "taxonomy",
            "settings" : [],
            "type" : "taxonomy_term_reference_link",
            "weight" : 232
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "City region",
        "required" : 0,
        "settings" : { "user_register_form" : false },
        "widget" : {
          "active" : 1,
          "module" : "options",
          "settings" : [],
          "type" : "options_select",
          "weight" : 233
        },
        "id" : "532",
        "field_id" : "519",
        "field_name" : "field_city_region__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_price_per_sqft__torcond" : {
        "default_value" : [ { "value" : 0 } ],
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 237
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "Price per sqft",
        "required" : 0,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 238
        },
        "id" : "535",
        "field_id" : "522",
        "field_name" : "field_price_per_sqft__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_sqft_range_max__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 0,
              "thousand_separator" : ""
            },
            "type" : "number_integer",
            "weight" : 236
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "label" : "Sqft range max",
        "required" : false,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "237"
        },
        "id" : "536",
        "field_id" : "523",
        "field_name" : "field_sqft_range_max__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_sqft_range_min__torcond" : {
        "default_value" : [ { "value" : 0 } ],
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 0,
              "thousand_separator" : ""
            },
            "type" : "number_integer",
            "weight" : 235
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "Sqft range min",
        "required" : 0,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : "236"
        },
        "id" : "537",
        "field_id" : "524",
        "field_name" : "field_sqft_range_min__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_old_price_value_torcond" : {
        "label" : "Old price value",
        "widget" : {
          "weight" : "239",
          "type" : "number",
          "module" : "number",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "number_decimal",
            "settings" : {
              "thousand_separator" : "",
              "decimal_separator" : ".",
              "scale" : 2,
              "prefix_suffix" : true
            },
            "module" : "number",
            "weight" : 238
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : { "hash_exclude" : 0 },
        "default_value" : null,
        "id" : "540",
        "field_id" : "526",
        "field_name" : "field_old_price_value_torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_old_price_value__torcond" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "number",
            "settings" : {
              "decimal_separator" : ".",
              "prefix_suffix" : true,
              "scale" : 2,
              "thousand_separator" : ""
            },
            "type" : "number_decimal",
            "weight" : 238
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "Old price value",
        "required" : 0,
        "settings" : {
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "number",
          "settings" : [],
          "type" : "number",
          "weight" : 239
        },
        "id" : "541",
        "field_id" : "527",
        "field_name" : "field_old_price_value__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      }
    }
  }');
  return $items;
}
