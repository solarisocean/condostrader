<?php
/**
 * @file
 * ctf_content_types_toronto_building.features.inc
 */

/**
 * Implements hook_default_drealty_listing_type().
 */
function ctf_content_types_toronto_building_default_drealty_listing_type() {
  $items = array();
  $items['toronto_building'] = entity_import('drealty_listing_type', '{
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
      "field_reference_to_condo" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : { "target_id" : [ "target_id" ] },
        "settings" : {
          "handler" : "base",
          "handler_settings" : {
            "behaviors" : { "views-select-list" : { "status" : 0 } },
            "sort" : { "type" : "none" },
            "target_bundles" : { "toronto_condo" : "toronto_condo" }
          },
          "target_type" : "drealty_listing"
        },
        "translatable" : "0",
        "foreign keys" : { "drealty_listing" : { "table" : "drealty_listing", "columns" : { "target_id" : "id" } } },
        "field_name" : "field_reference_to_condo",
        "type" : "entityreference",
        "module" : "entityreference",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "-1",
        "deleted" : "0",
        "columns" : { "target_id" : {
            "description" : "The id of the target entity.",
            "type" : "int",
            "unsigned" : true,
            "not null" : true
          }
        }
      },
      "field_price_per_sqft_lease" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_price_per_sqft_lease",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_price_per_sqft_sale" : {
        "entity_types" : [ "drealty_listing" ],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "foreign keys" : [],
        "field_name" : "field_price_per_sqft_sale",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_search_point_string" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "50" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_search_point_string",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "50", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
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
          "weight" : 1
        },
        "id" : "547",
        "field_id" : "291",
        "field_name" : "field_toronto_gallery",
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
        "id" : "548",
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
        "id" : "549",
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
        "id" : "550",
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
        "id" : "551",
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
        "id" : "552",
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
        "id" : "553",
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
        "id" : "554",
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
        "id" : "555",
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
        "id" : "556",
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
        "id" : "557",
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
        "id" : "558",
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
        "id" : "559",
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
        "id" : "560",
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
        "id" : "561",
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
        "id" : "562",
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
        "id" : "563",
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
        "id" : "564",
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
        "id" : "565",
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
        "id" : "566",
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
        "id" : "567",
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
        "id" : "568",
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
        "id" : "569",
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
        "id" : "570",
        "field_id" : "332",
        "field_name" : "field_mmap_page__torcond",
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
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 53 },
        "id" : "571",
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
          "weight" : 54
        },
        "id" : "572",
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
          "weight" : 55
        },
        "id" : "573",
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
          "weight" : 56
        },
        "id" : "574",
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
        "id" : "575",
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
        "id" : "576",
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
        "id" : "577",
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
        "id" : "578",
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
        "id" : "579",
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
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 62 },
        "id" : "580",
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
        "widget" : { "module" : "number", "settings" : [], "type" : "number", "weight" : 63 },
        "id" : "581",
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
        "id" : "582",
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
        "id" : "583",
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
        "id" : "584",
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
        "id" : "585",
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
        "id" : "586",
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
        "id" : "587",
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
        "id" : "588",
        "field_id" : "358",
        "field_name" : "field_rltr__torcond",
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
        "id" : "589",
        "field_id" : "361",
        "field_name" : "field_ml_num__torcond",
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
          "weight" : 86
        },
        "id" : "590",
        "field_id" : "374",
        "field_name" : "field_spec_des6_out__torcond",
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
          "weight" : 88
        },
        "id" : "591",
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
          "weight" : 89
        },
        "id" : "592",
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
          "weight" : 90
        },
        "id" : "593",
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
          "weight" : 91
        },
        "id" : "594",
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
          "weight" : 92
        },
        "id" : "595",
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
          "weight" : 93
        },
        "id" : "596",
        "field_id" : "381",
        "field_name" : "field_stories__torcond",
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
          "weight" : 96
        },
        "id" : "597",
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
        "id" : "598",
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
        "id" : "599",
        "field_id" : "386",
        "field_name" : "field_area_code__torcond",
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
          "weight" : 102
        },
        "id" : "600",
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
          "weight" : 103
        },
        "id" : "601",
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
          "weight" : 105
        },
        "id" : "602",
        "field_id" : "393",
        "field_name" : "field_water_inc__torcond",
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
        "id" : "603",
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
        "id" : "604",
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
        "id" : "605",
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
        "id" : "606",
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
        "id" : "607",
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
        "id" : "608",
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
        "id" : "609",
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
        "id" : "610",
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
        "id" : "611",
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
        "id" : "612",
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
        "id" : "613",
        "field_id" : "411",
        "field_name" : "field_park_spcs__torcond",
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
        "id" : "614",
        "field_id" : "436",
        "field_name" : "field_outof_area__torcond",
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
        "id" : "615",
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
        "id" : "616",
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
        "id" : "617",
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
        "id" : "618",
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
        "id" : "619",
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
        "id" : "620",
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
        "id" : "621",
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
        "id" : "622",
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
        "id" : "623",
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
        "id" : "624",
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
        "id" : "625",
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
        "id" : "626",
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
        "id" : "627",
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
        "id" : "628",
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
        "id" : "629",
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
        "id" : "630",
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
        "id" : "631",
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
        "id" : "632",
        "field_id" : "500",
        "field_name" : "field_bldg_amen6_out__torcond",
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
        "id" : "633",
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
        "id" : "634",
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
        "id" : "635",
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
        "id" : "636",
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
        "id" : "637",
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
        "id" : "638",
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
        "id" : "639",
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
        "id" : "640",
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
        "id" : "641",
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
          "weight" : 227
        },
        "id" : "642",
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
          "weight" : 228
        },
        "id" : "643",
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
        "id" : "644",
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
        "id" : "645",
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
          "weight" : 231
        },
        "id" : "646",
        "field_id" : "516",
        "field_name" : "field_test_geofilld",
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
        "id" : "647",
        "field_id" : "519",
        "field_name" : "field_city_region__torcond",
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
        "id" : "648",
        "field_id" : "518",
        "field_name" : "field_address_full__torcond",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_reference_to_condo" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "entityreference",
            "settings" : {
              "colorbox_node_classes" : "",
              "colorbox_node_height" : 600,
              "colorbox_node_link" : false,
              "colorbox_node_width" : 600,
              "link" : false
            },
            "type" : "entityreference_label",
            "weight" : 233
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "Reference to condo",
        "required" : 0,
        "settings" : { "user_register_form" : false },
        "widget" : {
          "active" : 0,
          "module" : "entityreference",
          "settings" : { "match_operator" : "CONTAINS", "path" : "", "size" : 60 },
          "type" : "entityreference_autocomplete",
          "weight" : 234
        },
        "id" : "649",
        "field_id" : "533",
        "field_name" : "field_reference_to_condo",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_price_per_sqft_lease" : {
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
            "weight" : 236
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "Price per sqft lease",
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
        "id" : "658",
        "field_id" : "541",
        "field_name" : "field_price_per_sqft_lease",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_price_per_sqft_sale" : {
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
            "weight" : 235
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "Price per sqft sale",
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
          "weight" : 237
        },
        "id" : "659",
        "field_id" : "542",
        "field_name" : "field_price_per_sqft_sale",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_search_point_string" : {
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "above",
            "module" : "text",
            "settings" : [],
            "type" : "text_default",
            "weight" : 234
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 }
        },
        "drealty" : { "hash_exclude" : 0 },
        "label" : "Search point string",
        "required" : 0,
        "settings" : { "text_processing" : 0, "user_register_form" : false },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 236
        },
        "id" : "660",
        "field_id" : "540",
        "field_name" : "field_search_point_string",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      }
    }
  }');
  return $items;
}
