<?php
/**
 * @file
 * ctf_configurations_drealty_connections.features.inc
 */

/**
 * Implements hook_default_drealty_connection_entity().
 */
function ctf_configurations_drealty_connections_default_drealty_connection_entity() {
  $items = array();
  $items['toronto_rets_connection'] = entity_import('drealty_connection_entity', '{
    "name" : "toronto_rets_connection",
    "label" : "Toronto rets connection",
    "login_url" : "http:\\/\\/rets.torontomls.net:6103\\/rets-treb3pv\\/server\\/login",
    "username" : "D16mar",
    "password" : "M$77t13",
    "ua_string" : "DREALTY\\/1.0",
    "ua_password" : "",
    "version" : "1.7",
    "use_interealty_auth" : "0",
    "force_basic_auth" : "0",
    "use_compression" : "0",
    "disable_encoding_fix" : "0",
    "active" : 0,
    "resources" : { "Property" : {"systemname":"Property","description":"Property","lastupdate":"1445999664","keyfield":"ml_num","classes":{"ResidentialProperty":{"systemname":"ResidentialProperty","standardname":"ResidentialProperty","visiblename":"RES","description":"","bundle":"","lifetime":"28800","enabled":"0","configured":"0","lastupdate":"0","status_values":null,"process_images":"0","image_field_name":null,"image_dir":null,"object_type":null,"image_chunk_size":"25","query_type":"0","chunk_size":"500","override_status_query_text":null,"do_geocoding":"0","geocoder_handler":null,"offset_field":null,"offset_amount":"0","offset_max":"0","photo_timestamp_field":null,"expired_handler":"0","resource":"Property","fields":{"Heat_inc":{"systemname":"Heat_inc","standardname":"HeatIncluded","longname":"Heat Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753206","resource":"Property"},"Rm11_out":{"systemname":"Rm11_out","standardname":"Room11","longname":"Room 11","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753206","resource":"Property"},"Rm7_dc3_out":{"systemname":"Rm7_dc3_out","standardname":"Room7Desc3","longname":"Room 7 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753206","resource":"Property"},"Spec_des6_out":{"systemname":"Spec_des6_out","standardname":"SpecialDesignation6","longname":"Special Designation6","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"15","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753206","resource":"Property"},"Wcloset_t1":{"systemname":"Wcloset_t1","standardname":"WashroomsType1","longname":"Washrooms Type 1","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753206","resource":"Property"},"A_c":{"systemname":"A_c","standardname":"AirConditioning","longname":"Air Conditioning","datatype":"Character","max_length":"11","field_precision":"0","interpretation":"Lookup","lookupname":"571","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753206","resource":"Property"},"Heating":{"systemname":"Heating","standardname":"HeatType","longname":"Heat Type","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"7","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753206","resource":"Property"},"Hydro_inc":{"systemname":"Hydro_inc","standardname":"HydroIncluded","longname":"Hydro Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Irreg":{"systemname":"Irreg","standardname":"LotIrregularities","longname":"Lot Irregularities","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Kit_plus":{"systemname":"Kit_plus","standardname":"KitchensPlus","longname":"Kitchens Plus","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Laundry":{"systemname":"Laundry","standardname":"LaundryAccess","longname":"Laundry Access","datatype":"Character","max_length":"13","field_precision":"0","interpretation":"Lookup","lookupname":"125","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Laundry_lev":{"systemname":"Laundry_lev","standardname":"LaundryLevel","longname":"Laundry Level","datatype":"Character","max_length":"5","field_precision":"0","interpretation":"Lookup","lookupname":"171","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Legal_desc":{"systemname":"Legal_desc","standardname":"LegalDescription","longname":"Legal Description","datatype":"Character","max_length":"50","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level1":{"systemname":"Level1","standardname":"Level1","longname":"Level 1","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level10":{"systemname":"Level10","standardname":"Level10","longname":"Level 10","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level11":{"systemname":"Level11","standardname":"Level11","longname":"Level 11","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level12":{"systemname":"Level12","standardname":"Level12","longname":"Level 12","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level2":{"systemname":"Level2","standardname":"Level2","longname":"Level 2","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level3":{"systemname":"Level3","standardname":"Level3","longname":"Level 3","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level4":{"systemname":"Level4","standardname":"Level4","longname":"Level 4","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level5":{"systemname":"Level5","standardname":"Level5","longname":"Level 5","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level6":{"systemname":"Level6","standardname":"Level6","longname":"Level 6","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level7":{"systemname":"Level7","standardname":"Level7","longname":"Level 7","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level8":{"systemname":"Level8","standardname":"Level8","longname":"Level 8","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Level9":{"systemname":"Level9","standardname":"Level9","longname":"Level 9","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Lotsz_code":{"systemname":"Lotsz_code","standardname":"LotSizeCode","longname":"Lot Size Code","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"25","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Lp_dol":{"systemname":"Lp_dol","standardname":"ListPrice","longname":"List Price","datatype":"Decimal","max_length":"11","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Lse_terms":{"systemname":"Lse_terms","standardname":"LeasedTerms","longname":"Leased Terms","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Ml_num":{"systemname":"Ml_num","standardname":"MLS","longname":"MLS#","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Mmap_col":{"systemname":"Mmap_col","standardname":"MapColumn","longname":"Map Column #","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753207","resource":"Property"},"Mmap_page":{"systemname":"Mmap_page","standardname":"Map","longname":"Map #","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Mmap_row":{"systemname":"Mmap_row","standardname":"MapRow","longname":"Map Row","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Acres":{"systemname":"Acres","standardname":"Acreage","longname":"Acreage","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"41","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Ad_text":{"systemname":"Ad_text","standardname":"RemarksForClients","longname":"Remarks For Clients","datatype":"Character","max_length":"463","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Addl_mo_fee":{"systemname":"Addl_mo_fee","standardname":"AddlMonthlyFees","longname":"Addl Monthly Fees","datatype":"Decimal","max_length":"9","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Addr":{"systemname":"Addr","standardname":"Address","longname":"Address","datatype":"Character","max_length":"35","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"All_inc":{"systemname":"All_inc","standardname":"AllInclusive","longname":"All Inclusive","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Apt_num":{"systemname":"Apt_num","standardname":"AptUnit","longname":"Apt\\/Unit","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Ass_year":{"systemname":"Ass_year","standardname":"AssessmentYear","longname":"Assessment Year","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Bath_tot":{"systemname":"Bath_tot","standardname":"Washrooms","longname":"Washrooms","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Br":{"systemname":"Br","standardname":"Bedrooms","longname":"Bedrooms","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Br_plus":{"systemname":"Br_plus","standardname":"BedroomsPlus","longname":"Bedrooms +","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Bsmt1_out":{"systemname":"Bsmt1_out","standardname":"Basement1","longname":"Basement1","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"10","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Bsmt2_out":{"systemname":"Bsmt2_out","standardname":"Basement2","longname":"Basement2","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"10","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Cable":{"systemname":"Cable","standardname":"CableTVIncluded","longname":"Cable TV Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Cac_inc":{"systemname":"Cac_inc","standardname":"CacIncluded","longname":"CAC Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Central_vac":{"systemname":"Central_vac","standardname":"CentralVac","longname":"Central Vac","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Comel_inc":{"systemname":"Comel_inc","standardname":"CommonElementsIncluded","longname":"Common Elements Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Comp_pts":{"systemname":"Comp_pts","standardname":"FrontingOnNSEW","longname":"Fronting On (NSEW)","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"39","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Constr1_out":{"systemname":"Constr1_out","standardname":"Exterior1","longname":"Exterior1","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"5","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Constr2_out":{"systemname":"Constr2_out","standardname":"Exterior2","longname":"Exterior2","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"5","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"County":{"systemname":"County","standardname":"Province","longname":"Province","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753208","resource":"Property"},"Cross_st":{"systemname":"Cross_st","standardname":"DirectionsCrossStreets","longname":"Directions\\/Cross Streets","datatype":"Character","max_length":"30","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Den_fr":{"systemname":"Den_fr","standardname":"FamilyRoom","longname":"Family Room","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Depth":{"systemname":"Depth","standardname":"LotDepth","longname":"Lot Depth","datatype":"Decimal","max_length":"6","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Disp_addr":{"systemname":"Disp_addr","standardname":"DisplayAddressOnInternet","longname":"Display Address On Internet","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Drive":{"systemname":"Drive","standardname":"Drive","longname":"Drive","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"8","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Elec":{"systemname":"Elec","standardname":"UtilitiesHydro","longname":"Utilities-Hydro","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"48","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Elevator":{"systemname":"Elevator","standardname":"Elevator","longname":"Elevator","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Extras":{"systemname":"Extras","standardname":"Extras","longname":"Extras","datatype":"Character","max_length":"240","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Farm_agri":{"systemname":"Farm_agri","standardname":"FarmAgriculture","longname":"Farm\\/Agriculture","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"47","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Fpl_num":{"systemname":"Fpl_num","standardname":"FireplaceStove","longname":"Fireplace\\/Stove","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Front_ft":{"systemname":"Front_ft","standardname":"LotFront","longname":"Lot Front","datatype":"Decimal","max_length":"8","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Fuel":{"systemname":"Fuel","standardname":"HeatSource","longname":"Heat Source","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"6","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Furnished":{"systemname":"Furnished","standardname":"Furnished","longname":"Furnished","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"57","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Gar_spaces":{"systemname":"Gar_spaces","standardname":"GarageSpaces","longname":"Garage Spaces","datatype":"Decimal","max_length":"3","field_precision":"1","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Gar_type":{"systemname":"Gar_type","standardname":"GarageType","longname":"Garage Type","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"38","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Gas":{"systemname":"Gas","standardname":"UtilitiesGas","longname":"Utilities-Gas","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"48","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Num_kit":{"systemname":"Num_kit","standardname":"Kitchens","longname":"Kitchens","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Oth_struc1_out":{"systemname":"Oth_struc1_out","standardname":"OtherStructures1","longname":"Other Structures1","datatype":"Character","max_length":"14","field_precision":"0","interpretation":"Lookup","lookupname":"45","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Oth_struc2_out":{"systemname":"Oth_struc2_out","standardname":"OtherStructures2","longname":"Other Structures2","datatype":"Character","max_length":"14","field_precision":"0","interpretation":"Lookup","lookupname":"45","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Outof_area":{"systemname":"Outof_area","standardname":"OutofAreaMunicipality","longname":"Out of Area Municipality","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Parcel_id":{"systemname":"Parcel_id","standardname":"ParcelId","longname":"PIN#","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Park_chgs":{"systemname":"Park_chgs","standardname":"ParkCostMo","longname":"Park Cost\\/Mo","datatype":"Decimal","max_length":"6","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753209","resource":"Property"},"Park_spcs":{"systemname":"Park_spcs","standardname":"ParkingSpaces","longname":"Parking Spaces","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Pool":{"systemname":"Pool","standardname":"Pool","longname":"Pool","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"98","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Prkg_inc":{"systemname":"Prkg_inc","standardname":"ParkingIncluded","longname":"Parking Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Prop_feat1_out":{"systemname":"Prop_feat1_out","standardname":"PropertyFeatures1","longname":"Property Features1","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Prop_feat2_out":{"systemname":"Prop_feat2_out","standardname":"PropertyFeatures2","longname":"Property Features2","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Prop_feat3_out":{"systemname":"Prop_feat3_out","standardname":"PropertyFeatures3","longname":"Property Features3","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Prop_feat4_out":{"systemname":"Prop_feat4_out","standardname":"PropertyFeatures4","longname":"Property Features4","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Prop_feat5_out":{"systemname":"Prop_feat5_out","standardname":"PropertyFeatures5","longname":"Property Features5","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Prop_feat6_out":{"systemname":"Prop_feat6_out","standardname":"PropertyFeatures6","longname":"Property Features6","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Pvt_ent":{"systemname":"Pvt_ent","standardname":"PrivateEntrance","longname":"Private Entrance","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Retirement":{"systemname":"Retirement","standardname":"Retirement","longname":"Retirement","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rltr":{"systemname":"Rltr","standardname":"ListBrokerage","longname":"List Brokerage","datatype":"Character","max_length":"80","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm1_dc1_out":{"systemname":"Rm1_dc1_out","standardname":"Room1Desc1","longname":"Room 1 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm1_dc2_out":{"systemname":"Rm1_dc2_out","standardname":"Room1Desc2","longname":"Room 1 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm1_dc3_out":{"systemname":"Rm1_dc3_out","standardname":"Room1Desc3","longname":"Room 1 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm1_len":{"systemname":"Rm1_len","standardname":"Room1Length","longname":"Room 1 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm1_out":{"systemname":"Rm1_out","standardname":"Room1","longname":"Room 1","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm1_wth":{"systemname":"Rm1_wth","standardname":"Room1Width","longname":"Room 1 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm10_dc1_out":{"systemname":"Rm10_dc1_out","standardname":"Room10Desc1","longname":"Room 10 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm10_dc2_out":{"systemname":"Rm10_dc2_out","standardname":"Room10Desc2","longname":"Room 10 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm10_dc3_out":{"systemname":"Rm10_dc3_out","standardname":"Room10Desc3","longname":"Room 10 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753210","resource":"Property"},"Rm10_len":{"systemname":"Rm10_len","standardname":"Room10Length","longname":"Room 10 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm10_out":{"systemname":"Rm10_out","standardname":"Room10","longname":"Room 10","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm10_wth":{"systemname":"Rm10_wth","standardname":"Room10Width","longname":"Room 10 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm11_dc1_out":{"systemname":"Rm11_dc1_out","standardname":"Room11Desc1","longname":"Room 11 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm11_dc2_out":{"systemname":"Rm11_dc2_out","standardname":"Room11Desc2","longname":"Room 11 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm11_dc3_out":{"systemname":"Rm11_dc3_out","standardname":"Room11Desc3","longname":"Room 11 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm11_len":{"systemname":"Rm11_len","standardname":"Room11Length","longname":"Room 11 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm11_wth":{"systemname":"Rm11_wth","standardname":"Room11Width","longname":"Room 11 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm12_dc1_out":{"systemname":"Rm12_dc1_out","standardname":"Room12Desc1","longname":"Room 12 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm12_dc2_out":{"systemname":"Rm12_dc2_out","standardname":"Room12Desc2","longname":"Room 12 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm12_dc3_out":{"systemname":"Rm12_dc3_out","standardname":"Room12Desc3","longname":"Room 12 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm12_len":{"systemname":"Rm12_len","standardname":"Room12Length","longname":"Room 12 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm12_out":{"systemname":"Rm12_out","standardname":"Room12","longname":"Room 12","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm12_wth":{"systemname":"Rm12_wth","standardname":"Room12Width","longname":"Room 12 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm2_dc1_out":{"systemname":"Rm2_dc1_out","standardname":"Room2Desc1","longname":"Room 2 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm2_dc2_out":{"systemname":"Rm2_dc2_out","standardname":"Room2Desc2","longname":"Room 2 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm2_dc3_out":{"systemname":"Rm2_dc3_out","standardname":"Room2Desc3","longname":"Room 2 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm2_len":{"systemname":"Rm2_len","standardname":"Room2Length","longname":"Room 2 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm2_out":{"systemname":"Rm2_out","standardname":"Room2","longname":"Room 2","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm2_wth":{"systemname":"Rm2_wth","standardname":"Room2Width","longname":"Room 2 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm3_dc1_out":{"systemname":"Rm3_dc1_out","standardname":"Room3Desc1","longname":"Room 3 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm3_dc2_out":{"systemname":"Rm3_dc2_out","standardname":"Room3Desc2","longname":"Room 3 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753211","resource":"Property"},"Rm3_dc3_out":{"systemname":"Rm3_dc3_out","standardname":"Room3Desc3","longname":"Room 3 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm3_len":{"systemname":"Rm3_len","standardname":"Room3Length","longname":"Room 3 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm3_out":{"systemname":"Rm3_out","standardname":"Room3","longname":"Room 3","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm3_wth":{"systemname":"Rm3_wth","standardname":"Room3Width","longname":"Room 3 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm4_dc1_out":{"systemname":"Rm4_dc1_out","standardname":"Room4Desc1","longname":"Room 4 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm4_dc2_out":{"systemname":"Rm4_dc2_out","standardname":"Room4Desc2","longname":"Room 4 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm4_dc3_out":{"systemname":"Rm4_dc3_out","standardname":"Room4Desc3","longname":"Room 4 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm4_len":{"systemname":"Rm4_len","standardname":"Room4Length","longname":"Room 4 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm4_out":{"systemname":"Rm4_out","standardname":"Room4","longname":"Room 4","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm4_wth":{"systemname":"Rm4_wth","standardname":"Room4Width","longname":"Room 4 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm5_dc1_out":{"systemname":"Rm5_dc1_out","standardname":"Room5Desc1","longname":"Room 5 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm5_dc2_out":{"systemname":"Rm5_dc2_out","standardname":"Room5Desc2","longname":"Room 5 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm5_dc3_out":{"systemname":"Rm5_dc3_out","standardname":"Room5Desc3","longname":"Room 5 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm5_len":{"systemname":"Rm5_len","standardname":"Room5Length","longname":"Room 5 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm5_out":{"systemname":"Rm5_out","standardname":"Room5","longname":"Room 5","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm5_wth":{"systemname":"Rm5_wth","standardname":"Room5Width","longname":"Room 5 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm6_dc1_out":{"systemname":"Rm6_dc1_out","standardname":"Room6Desc1","longname":"Room 6 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm6_dc2_out":{"systemname":"Rm6_dc2_out","standardname":"Room6Desc2","longname":"Room 6 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm6_dc3_out":{"systemname":"Rm6_dc3_out","standardname":"Room6Desc3","longname":"Room 6 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm6_len":{"systemname":"Rm6_len","standardname":"Room6Length","longname":"Room 6 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm6_out":{"systemname":"Rm6_out","standardname":"Room6","longname":"Room 6","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm6_wth":{"systemname":"Rm6_wth","standardname":"Room6Width","longname":"Room 6 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm7_dc1_out":{"systemname":"Rm7_dc1_out","standardname":"Room7Desc1","longname":"Room 7 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm7_dc2_out":{"systemname":"Rm7_dc2_out","standardname":"Room7Desc2","longname":"Room 7 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm7_len":{"systemname":"Rm7_len","standardname":"Room7Length","longname":"Room 7 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm7_out":{"systemname":"Rm7_out","standardname":"Room7","longname":"Room 7","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753212","resource":"Property"},"Rm7_wth":{"systemname":"Rm7_wth","standardname":"Room7Width","longname":"Room 7 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm8_dc1_out":{"systemname":"Rm8_dc1_out","standardname":"Room8Desc1","longname":"Room 8 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm8_dc2_out":{"systemname":"Rm8_dc2_out","standardname":"Room8Desc2","longname":"Room 8 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm8_dc3_out":{"systemname":"Rm8_dc3_out","standardname":"Room8Desc3","longname":"Room 8 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm8_len":{"systemname":"Rm8_len","standardname":"Room8Length","longname":"Room 8 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm8_out":{"systemname":"Rm8_out","standardname":"Room8","longname":"Room 8","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm8_wth":{"systemname":"Rm8_wth","standardname":"Room8Width","longname":"Room 8 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm9_dc1_out":{"systemname":"Rm9_dc1_out","standardname":"Room9Desc1","longname":"Room 9 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm9_dc2_out":{"systemname":"Rm9_dc2_out","standardname":"Room9Desc2","longname":"Room 9 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm9_dc3_out":{"systemname":"Rm9_dc3_out","standardname":"Room9Desc3","longname":"Room 9 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm9_len":{"systemname":"Rm9_len","standardname":"Room9Length","longname":"Room 9 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm9_out":{"systemname":"Rm9_out","standardname":"Room9","longname":"Room 9","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rm9_wth":{"systemname":"Rm9_wth","standardname":"Room9Width","longname":"Room 9 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rms":{"systemname":"Rms","standardname":"Rooms","longname":"Rooms","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Rooms_plus":{"systemname":"Rooms_plus","standardname":"RoomsPlus","longname":"Rooms +","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"S_r":{"systemname":"S_r","standardname":"SaleLease","longname":"Sale\\/Lease","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"70","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Sewer":{"systemname":"Sewer","standardname":"Sewers","longname":"Sewers","datatype":"Character","max_length":"15","field_precision":"0","interpretation":"Lookup","lookupname":"14","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Spec_des1_out":{"systemname":"Spec_des1_out","standardname":"SpecialDesignation1","longname":"Special Designation1","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"15","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Spec_des2_out":{"systemname":"Spec_des2_out","standardname":"SpecialDesignation2","longname":"Special Designation2","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"15","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Spec_des3_out":{"systemname":"Spec_des3_out","standardname":"SpecialDesignation3","longname":"Special Designation3","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"15","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Spec_des4_out":{"systemname":"Spec_des4_out","standardname":"SpecialDesignation4","longname":"Special Designation4","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"15","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Spec_des5_out":{"systemname":"Spec_des5_out","standardname":"SpecialDesignation5","longname":"Special Designation5","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"15","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"Sqft":{"systemname":"Sqft","standardname":"ApproxSquareFootage","longname":"Approx Square Footage","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"43","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753213","resource":"Property"},"St":{"systemname":"St","standardname":"StreetName","longname":"Street Name","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"St_dir":{"systemname":"St_dir","standardname":"StreetDirection","longname":"Street Direction","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"21","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"St_num":{"systemname":"St_num","standardname":"Street","longname":"Street #","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"St_sfx":{"systemname":"St_sfx","standardname":"StreetAbbreviation","longname":"Street Abbreviation","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"26","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Status":{"systemname":"Status","standardname":"Status","longname":"Status","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"92","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Style":{"systemname":"Style","standardname":"Style","longname":"Style","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"130","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Taxes":{"systemname":"Taxes","standardname":"Taxes","longname":"Taxes","datatype":"Decimal","max_length":"8","field_precision":"2","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Tour_url":{"systemname":"Tour_url","standardname":"VirtualTourURL","longname":"Virtual Tour URL","datatype":"Character","max_length":"100","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Community_code":{"systemname":"Community_code","standardname":"CommunityCode","longname":"Community Code","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"502","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Area_code":{"systemname":"Area_code","standardname":"AreaCode","longname":"Area Code","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"500","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Tv":{"systemname":"Tv","standardname":"Assessment","longname":"Assessment","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Type_own_srch":{"systemname":"Type_own_srch","standardname":"TypeOwnSrch","longname":"Type","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"LookupMulti","lookupname":"1","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Type_own1_out":{"systemname":"Type_own1_out","standardname":"TypeOwn1Out","longname":"Type","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"132","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Uffi":{"systemname":"Uffi","standardname":"Uffi","longname":"UFFI","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"13","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Util_cable":{"systemname":"Util_cable","standardname":"UtilitiesCable","longname":"Utilities-Cable","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"48","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Util_tel":{"systemname":"Util_tel","standardname":"UtilitiesTelephone","longname":"Utilities-Telephone","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"48","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Vend_pis":{"systemname":"Vend_pis","standardname":"SellerPropertyInfoStatement","longname":"Seller Property Info Statement","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"23","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Vtour_updt":{"systemname":"Vtour_updt","standardname":"VirtualTourUploadDate","longname":"Virtual Tour Upload Date","datatype":"Date","max_length":"10","field_precision":"23","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Water":{"systemname":"Water","standardname":"Water","longname":"Water","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"18","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Water_inc":{"systemname":"Water_inc","standardname":"WaterIncluded","longname":"Water Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Waterfront":{"systemname":"Waterfront","standardname":"Waterfront","longname":"Waterfront","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"170","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Wcloset_p1":{"systemname":"Wcloset_p1","standardname":"WashroomsType1Pcs","longname":"Washrooms Type 1 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753214","resource":"Property"},"Wcloset_p2":{"systemname":"Wcloset_p2","standardname":"WashroomsType2Pcs","longname":"Washrooms Type 2 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_p3":{"systemname":"Wcloset_p3","standardname":"WashroomsType3Pcs","longname":"Washrooms Type 3 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_p4":{"systemname":"Wcloset_p4","standardname":"WashroomsType4Pcs","longname":"Washrooms Type 4 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_p5":{"systemname":"Wcloset_p5","standardname":"WashroomsType5Pcs","longname":"Washrooms Type 5 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t1lvl":{"systemname":"Wcloset_t1lvl","standardname":"WashroomsType1Level","longname":"Washrooms Type 1 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t2":{"systemname":"Wcloset_t2","standardname":"WashroomsType2","longname":"Washrooms Type 2","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t2lvl":{"systemname":"Wcloset_t2lvl","standardname":"WashroomsType2Level","longname":"Washrooms Type 2 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t3":{"systemname":"Wcloset_t3","standardname":"WashroomsType3","longname":"Washrooms Type 3","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t3lvl":{"systemname":"Wcloset_t3lvl","standardname":"WashroomsType3Level","longname":"Washrooms Type 3 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t4":{"systemname":"Wcloset_t4","standardname":"WashroomsType4","longname":"Washrooms Type 4","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t4lvl":{"systemname":"Wcloset_t4lvl","standardname":"WashroomsType4Level","longname":"Washrooms Type 4 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t5":{"systemname":"Wcloset_t5","standardname":"WashroomsType5","longname":"Washrooms Type 5","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wcloset_t5lvl":{"systemname":"Wcloset_t5lvl","standardname":"WashroomsType5Level","longname":"Washrooms Type 5 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Wtr_suptyp":{"systemname":"Wtr_suptyp","standardname":"WaterSupplyTypes","longname":"Water Supply Types","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"46","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Yr":{"systemname":"Yr","standardname":"TaxYear","longname":"Tax Year","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Yr_built":{"systemname":"Yr_built","standardname":"ApproxAge","longname":"Approx Age","datatype":"Character","max_length":"5","field_precision":"0","interpretation":"Lookup","lookupname":"40","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Zip":{"systemname":"Zip","standardname":"PostalCode","longname":"Postal Code","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Zoning":{"systemname":"Zoning","standardname":"Zoning","longname":"Zoning","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Timestamp_sql":{"systemname":"Timestamp_sql","standardname":"TimestampSql","longname":"Updated timestamp","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Municipality_code":{"systemname":"Municipality_code","standardname":"MunicipalityCode","longname":"Municp Code","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"501","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Area":{"systemname":"Area","standardname":"Area","longname":"Area","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Community":{"systemname":"Community","standardname":"Community","longname":"Community","datatype":"Character","max_length":"44","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753215","resource":"Property"},"Municipality_district":{"systemname":"Municipality_district","standardname":"MunicipalityDistrict","longname":"Municipality District","datatype":"Character","max_length":"44","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753216","resource":"Property"},"Municipality":{"systemname":"Municipality","standardname":"Municipality","longname":"Municipality","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753216","resource":"Property"},"Idx_dt":{"systemname":"Idx_dt","standardname":"IdxUpdtedDt","longname":"IDX updated date","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753216","resource":"Property"},"Pix_updt":{"systemname":"Pix_updt","standardname":"PixUpdtedDt","longname":"Pix updated date","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"ResidentialProperty","rets_returned":"0","lastupdate":"1460753216","resource":"Property"}}},"CommercialProperty":{"systemname":"CommercialProperty","standardname":"Commercial","visiblename":"COM","description":"","bundle":"","lifetime":"28800","enabled":"0","configured":"0","lastupdate":"0","status_values":null,"process_images":"0","image_field_name":null,"image_dir":null,"object_type":null,"image_chunk_size":"25","query_type":"0","chunk_size":"500","override_status_query_text":null,"do_geocoding":"0","geocoder_handler":null,"offset_field":null,"offset_amount":"0","offset_max":"0","photo_timestamp_field":null,"expired_handler":"0","resource":"Property","fields":{"A_c":{"systemname":"A_c","standardname":"AirConditioning","longname":"Air Conditioning","datatype":"Character","max_length":"11","field_precision":"0","interpretation":"Lookup","lookupname":"571","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753218","resource":"Property"},"Ad_text":{"systemname":"Ad_text","standardname":"RemarksForClients","longname":"Remarks For Clients","datatype":"Character","max_length":"463","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753218","resource":"Property"},"Addr":{"systemname":"Addr","standardname":"Address","longname":"Address","datatype":"Character","max_length":"35","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753218","resource":"Property"},"Amps":{"systemname":"Amps","standardname":"Amps","longname":"Amps","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753218","resource":"Property"},"Apt_num":{"systemname":"Apt_num","standardname":"AptUnit","longname":"Apt\\/Unit","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753218","resource":"Property"},"Area_infl1_out":{"systemname":"Area_infl1_out","standardname":"AreaInfluences1","longname":"Area Influences1","datatype":"Character","max_length":"15","field_precision":"0","interpretation":"Lookup","lookupname":"44","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Area_infl2_out":{"systemname":"Area_infl2_out","standardname":"AreaInfluences2","longname":"Area Influences2","datatype":"Character","max_length":"15","field_precision":"0","interpretation":"Lookup","lookupname":"44","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Ass_year":{"systemname":"Ass_year","standardname":"AssessmentYear","longname":"Assessment Year","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Bath_tot":{"systemname":"Bath_tot","standardname":"Washrooms","longname":"Washrooms","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Bay_size1":{"systemname":"Bay_size1","standardname":"BaySizeWidthFeet","longname":"Bay Size Width Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Bay_size1_in":{"systemname":"Bay_size1_in","standardname":"BaySizeWidthInches","longname":"Bay Size Width Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Bay_size2":{"systemname":"Bay_size2","standardname":"BaySizeLengthFeet","longname":"Bay Size Length Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Bay_size2_in":{"systemname":"Bay_size2_in","standardname":"BaySizeLengthInches","longname":"Bay Size Length Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Bsmt1_out":{"systemname":"Bsmt1_out","standardname":"Basement1","longname":"Basement1","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Bus_type":{"systemname":"Bus_type","standardname":"Use","longname":"Use","datatype":"Character","max_length":"28","field_precision":"0","interpretation":"Lookup","lookupname":"69","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Ceil_ht":{"systemname":"Ceil_ht","standardname":"ClearHeightFeet","longname":"Clear Height Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Ceil_ht_in":{"systemname":"Ceil_ht_in","standardname":"ClearHeightInches","longname":"Clear Height Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Chattels":{"systemname":"Chattels","standardname":"Chattels","longname":"Chattels","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Com_chgs":{"systemname":"Com_chgs","standardname":"CommonAreaUpcharge","longname":"Common Area Upcharge","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Com_cn_fee":{"systemname":"Com_cn_fee","standardname":"CommercialCondoFees","longname":"Commercial Condo Fees","datatype":"Decimal","max_length":"9","field_precision":"2","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"County":{"systemname":"County","standardname":"Province","longname":"Province","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Crane":{"systemname":"Crane","standardname":"Crane","longname":"Crane","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Cross_st":{"systemname":"Cross_st","standardname":"DirectionsCrossStreets","longname":"Directions\\/Cross Streets","datatype":"Character","max_length":"30","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Days_open":{"systemname":"Days_open","standardname":"DaysOpen","longname":"Days Open","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"56","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Dba":{"systemname":"Dba","standardname":"BusinessBuildingName","longname":"Business\\/Building Name","datatype":"Character","max_length":"37","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Depth":{"systemname":"Depth","standardname":"LotDepth","longname":"Lot Depth","datatype":"Decimal","max_length":"6","field_precision":"2","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Disp_addr":{"systemname":"Disp_addr","standardname":"DisplayAddressOnInternet","longname":"Display Address On Internet","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753219","resource":"Property"},"Elevator":{"systemname":"Elevator","standardname":"Elevator","longname":"Elevator","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"Lookup","lookupname":"66","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Employees":{"systemname":"Employees","standardname":"Employees","longname":"Employees","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Exp_actest":{"systemname":"Exp_actest","standardname":"ExpensesActualEstimated","longname":"Expenses Actual\\/Estimated","datatype":"Character","max_length":"3","field_precision":"0","interpretation":"Lookup","lookupname":"82","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Extras":{"systemname":"Extras","standardname":"Extras","longname":"Extras","datatype":"Character","max_length":"240","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Fin_stmnt":{"systemname":"Fin_stmnt","standardname":"FinancialStatement","longname":"Financial Statement","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Franchise":{"systemname":"Franchise","standardname":"Franchise","longname":"Franchise","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Freestandg":{"systemname":"Freestandg","standardname":"Freestanding","longname":"Freestanding","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Front_ft":{"systemname":"Front_ft","standardname":"LotFront","longname":"Lot Front","datatype":"Decimal","max_length":"8","field_precision":"2","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Gar_type":{"systemname":"Gar_type","standardname":"GarageType","longname":"Garage Type","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"61","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Gross_inc":{"systemname":"Gross_inc","standardname":"GrossIncomeSales","longname":"Gross Income\\/Sales","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Heat_exp":{"systemname":"Heat_exp","standardname":"HeatExpenses","longname":"Heat Expenses","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Heating":{"systemname":"Heating","standardname":"HeatType","longname":"Heat Type","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"59","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Hours_open":{"systemname":"Hours_open","standardname":"HoursOpen","longname":"Hours Open","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Hydro_exp":{"systemname":"Hydro_exp","standardname":"HydroExpense","longname":"Hydro Expense","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Ind_area":{"systemname":"Ind_area","standardname":"IndustrialArea","longname":"Industrial Area","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Ind_areacd":{"systemname":"Ind_areacd","standardname":"IndustrialAreaCode","longname":"Industrial Area Code","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"83","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Insur":{"systemname":"Insur","standardname":"InsuranceExpense","longname":"Insurance Expense","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Inventory":{"systemname":"Inventory","standardname":"EstimInventoryValuesAtCost","longname":"Estim Inventory Values At Cost","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753220","resource":"Property"},"Irreg":{"systemname":"Irreg","standardname":"LotIrregularities","longname":"Lot Irregularities","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Legal_desc":{"systemname":"Legal_desc","standardname":"LegalDescription","longname":"Legal Description","datatype":"Character","max_length":"50","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Llbo":{"systemname":"Llbo","standardname":"LLBO","longname":"LLBO","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Lot_code":{"systemname":"Lot_code","standardname":"LotBldgUnitCode","longname":"Lot\\/Bldg\\/Unit Code","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"65","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Lotsz_code":{"systemname":"Lotsz_code","standardname":"LotSizeCode","longname":"Lot Size Code","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"25","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Lp_code":{"systemname":"Lp_code","standardname":"ListPriceCode","longname":"List Price Code","datatype":"Character","max_length":"11","field_precision":"0","interpretation":"Lookup","lookupname":"51","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Lp_dol":{"systemname":"Lp_dol","standardname":"ListPrice","longname":"List Price","datatype":"Decimal","max_length":"11","field_precision":"2","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Maint":{"systemname":"Maint","standardname":"Maintenance","longname":"Maintenance","datatype":"Decimal","max_length":"7","field_precision":"2","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Mgmt":{"systemname":"Mgmt","standardname":"ManagementExpense","longname":"Management Expense","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Minrenttrm":{"systemname":"Minrenttrm","standardname":"MinimumRentalTerm","longname":"Minimum Rental Term","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Ml_num":{"systemname":"Ml_num","standardname":"MLS","longname":"MLS#","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Mmap_col":{"systemname":"Mmap_col","standardname":"MapColumn","longname":"Map Column #","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Mmap_page":{"systemname":"Mmap_page","standardname":"Map","longname":"Map #","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Mmap_row":{"systemname":"Mmap_row","standardname":"MapRow","longname":"Map Row","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Net_inc":{"systemname":"Net_inc","standardname":"NetIncomeBeforeDebt","longname":"Net Income Before Debt","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Oa_area":{"systemname":"Oa_area","standardname":"OfficeAptArea","longname":"Office\\/Apt Area","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Occupancy":{"systemname":"Occupancy","standardname":"Occupancy","longname":"Occupancy","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"Lookup","lookupname":"53","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Off_areacd":{"systemname":"Off_areacd","standardname":"OfficeAptAreaCode","longname":"Office\\/Apt Area Code","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"83","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Oper_exp":{"systemname":"Oper_exp","standardname":"OperatingExpenses","longname":"Operating Expenses","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Other":{"systemname":"Other","standardname":"OtherExpenses","longname":"Other Expenses","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Out_storg":{"systemname":"Out_storg","standardname":"OutsideStorage","longname":"Outside Storage","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753221","resource":"Property"},"Outof_area":{"systemname":"Outof_area","standardname":"OutofAreaMunicipality","longname":"Out of Area Municipality","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Parcel_id":{"systemname":"Parcel_id","standardname":"ParcelId","longname":"PIN#","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Park_spcs":{"systemname":"Park_spcs","standardname":"ParkingSpaces","longname":"Parking Spaces","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Perc_bldg":{"systemname":"Perc_bldg","standardname":"PerBuilding","longname":"% Building","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Timestamp_sql":{"systemname":"Timestamp_sql","standardname":"TimestampSql","longname":"Updated timestamp","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Area":{"systemname":"Area","standardname":"Area","longname":"Area","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Community":{"systemname":"Community","standardname":"Community","longname":"Community","datatype":"Character","max_length":"44","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Municipality_district":{"systemname":"Municipality_district","standardname":"MunicipalityDistrict","longname":"Municipality District","datatype":"Character","max_length":"44","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Municipality_code":{"systemname":"Municipality_code","standardname":"MunicipalityCode","longname":"Municp Code","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"501","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Municipality":{"systemname":"Municipality","standardname":"Municipality","longname":"Municipality","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Idx_dt":{"systemname":"Idx_dt","standardname":"IdxUpdtedDt","longname":"IDX updated date","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Pix_updt":{"systemname":"Pix_updt","standardname":"PixUpdtedDt","longname":"Pix updated date","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Perc_rent":{"systemname":"Perc_rent","standardname":"PercentageRent","longname":"Percentage Rent","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Prop_type":{"systemname":"Prop_type","standardname":"Category","longname":"Category","datatype":"Character","max_length":"30","field_precision":"0","interpretation":"Lookup","lookupname":"67","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Rail":{"systemname":"Rail","standardname":"Rail","longname":"Rail","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"48","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Retail_a":{"systemname":"Retail_a","standardname":"RetailArea","longname":"Retail Area","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Retail_ac":{"systemname":"Retail_ac","standardname":"RetailAreaCode","longname":"Retail Area Code","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"83","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Rltr":{"systemname":"Rltr","standardname":"ListBrokerage","longname":"List Brokerage","datatype":"Character","max_length":"80","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"S_r":{"systemname":"S_r","standardname":"SaleLease","longname":"Sale\\/Lease","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"71","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Seats":{"systemname":"Seats","standardname":"Seats","longname":"Seats","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Sewer":{"systemname":"Sewer","standardname":"Sewers","longname":"Sewers","datatype":"Character","max_length":"15","field_precision":"0","interpretation":"Lookup","lookupname":"63","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753222","resource":"Property"},"Shpdrsdlhtft":{"systemname":"Shpdrsdlhtft","standardname":"DriveInLevelShippingDoorsHeightFeet","longname":"Drive-In Level Shipping Doors Height Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdlhtin":{"systemname":"Shpdrsdlhtin","standardname":"DriveInLevelShippingDoorsHeightInches","longname":"Drive-In Level Shipping Doors Height Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdlnu":{"systemname":"Shpdrsdlnu","standardname":"DriveInLevelShippingDoors","longname":"Drive-In Level Shipping Doors","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdlwdft":{"systemname":"Shpdrsdlwdft","standardname":"DriveInLevelShippingDoorsWidthFeet","longname":"Drive-In Level Shipping Doors Width Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdlwdin":{"systemname":"Shpdrsdlwdin","standardname":"DriveInLevelShippingDoorsWidthInches","longname":"Drive-In Level Shipping Doors Width Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdmhtft":{"systemname":"Shpdrsdmhtft","standardname":"DoubleManShippingDoorsHeightFeet","longname":"Double Man Shipping Doors Height Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdmhtin":{"systemname":"Shpdrsdmhtin","standardname":"DoubleManShippingDoorsHeightInches","longname":"Double Man Shipping Doors Height Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdmnu":{"systemname":"Shpdrsdmnu","standardname":"DoubleManShippingDoors","longname":"Double Man Shipping Doors #","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdmwdft":{"systemname":"Shpdrsdmwdft","standardname":"DoubleManShippingDoorsWidthFeet","longname":"Double Man Shipping Doors Width Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsdmwdin":{"systemname":"Shpdrsdmwdin","standardname":"DoubleManShippingDoorsWidthInches","longname":"Double Man Shipping Doors Width Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsglhtft":{"systemname":"Shpdrsglhtft","standardname":"GradeLevelShippingDoorsHeightFeet","longname":"Grade Level Shipping Doors Height Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsglhtin":{"systemname":"Shpdrsglhtin","standardname":"GradeLevelShippingDoorsHeightInches","longname":"Grade Level Shipping Doors Height Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsglnu":{"systemname":"Shpdrsglnu","standardname":"GradeLevelShippingDoors","longname":"Grade Level Shipping Doors #","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsglwdft":{"systemname":"Shpdrsglwdft","standardname":"GradeLevelShippingDoorsWidthFeet","longname":"Grade Level Shipping Doors Width Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrsglwdin":{"systemname":"Shpdrsglwdin","standardname":"GradeLevelShippingDoorsWidthInches","longname":"Grade Level Shipping Doors Width Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrstlhtft":{"systemname":"Shpdrstlhtft","standardname":"TruckLevelShippingDoorsHeightFeet","longname":"Truck Level Shipping Doors Height Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrstlhtin":{"systemname":"Shpdrstlhtin","standardname":"TruckLevelShippingDoorsHeightInches","longname":"Truck Level Shipping Doors Height Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrstlnu":{"systemname":"Shpdrstlnu","standardname":"TruckLevelShippingDoors","longname":"Truck Level Shipping Doors #","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrstlwdft":{"systemname":"Shpdrstlwdft","standardname":"TruckLevelShippingDoorsWidthFeet","longname":"Truck Level Shipping Doors Width Feet","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Shpdrstlwdin":{"systemname":"Shpdrstlwdin","standardname":"TruckLevelShippingDoorsWidthInches","longname":"Truck Level Shipping Doors Width Inches","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Soil_test":{"systemname":"Soil_test","standardname":"SoilTest","longname":"Soil Test","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"62","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753223","resource":"Property"},"Sprinklers":{"systemname":"Sprinklers","standardname":"Sprinklers","longname":"Sprinklers","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"57","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"St":{"systemname":"St","standardname":"StreetName","longname":"Street Name","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"St_dir":{"systemname":"St_dir","standardname":"StreetDirection","longname":"Street Direction","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"21","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"St_num":{"systemname":"St_num","standardname":"Street","longname":"Street #","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"St_sfx":{"systemname":"St_sfx","standardname":"StreetAbbreviation","longname":"Street Abbreviation","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"26","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Status":{"systemname":"Status","standardname":"Status","longname":"Status","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"92","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Survey":{"systemname":"Survey","standardname":"Survey","longname":"Survey","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Taxes":{"systemname":"Taxes","standardname":"Taxes","longname":"Taxes","datatype":"Decimal","max_length":"8","field_precision":"2","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Taxes_exp":{"systemname":"Taxes_exp","standardname":"TaxesExpense","longname":"Taxes Expense","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Terms":{"systemname":"Terms","standardname":"MaximumRentalTerm","longname":"Maximum Rental Term","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Tot_area":{"systemname":"Tot_area","standardname":"TotalArea","longname":"Total Area","datatype":"Decimal","max_length":"10","field_precision":"2","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Tot_areacd":{"systemname":"Tot_areacd","standardname":"TotalAreaCode","longname":"Total Area Code","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"90","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Tour_url":{"systemname":"Tour_url","standardname":"VirtualTourURL","longname":"Virtual Tour URL","datatype":"Character","max_length":"100","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Community_code":{"systemname":"Community_code","standardname":"CommunityCode","longname":"Community Code","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"502","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Area_code":{"systemname":"Area_code","standardname":"AreaCode","longname":"Area Code","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"500","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Trlr_pk_spt":{"systemname":"Trlr_pk_spt","standardname":"TrailerParkingSpots","longname":"# Trailer Parking Spots","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Tv":{"systemname":"Tv","standardname":"Assessment","longname":"Assessment","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Type_own_srch":{"systemname":"Type_own_srch","standardname":"TypeOwnSrch","longname":"Type","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"LookupMulti","lookupname":"68","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Type_own1_out":{"systemname":"Type_own1_out","standardname":"TypeOwn1Out","longname":"Type","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"68","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Type_taxes":{"systemname":"Type_taxes","standardname":"TypeTaxes","longname":"Type Taxes","datatype":"Character","max_length":"6","field_precision":"0","interpretation":"Lookup","lookupname":"52","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Uffi":{"systemname":"Uffi","standardname":"Uffi","longname":"UFFI","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"13","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Utilities":{"systemname":"Utilities","standardname":"Utilities","longname":"Utilities","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"48","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753224","resource":"Property"},"Vac_perc":{"systemname":"Vac_perc","standardname":"VacancyAllowance","longname":"Vacancy Allowance","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Vend_pis":{"systemname":"Vend_pis","standardname":"SellerPropertyInfoStatement","longname":"Seller Property Info Statement","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"23","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Volts":{"systemname":"Volts","standardname":"Volts","longname":"Volts","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Vtour_updt":{"systemname":"Vtour_updt","standardname":"VirtualTourUploadDate","longname":"Virtual Tour Upload Date","datatype":"Date","max_length":"10","field_precision":"23","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Water":{"systemname":"Water","standardname":"Water","longname":"Water","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"58","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Water_exp":{"systemname":"Water_exp","standardname":"WaterExpense","longname":"Water Expense","datatype":"Decimal","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Wtr_suptyp":{"systemname":"Wtr_suptyp","standardname":"WaterSupplyTypes","longname":"Water Supply Types","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"46","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Yr":{"systemname":"Yr","standardname":"TaxYear","longname":"Tax Year","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Yr_built":{"systemname":"Yr_built","standardname":"ApproxAge","longname":"Approx Age","datatype":"Character","max_length":"5","field_precision":"0","interpretation":"Lookup","lookupname":"40","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Yr_exp":{"systemname":"Yr_exp","standardname":"YearExpenses","longname":"Year Expenses","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Zip":{"systemname":"Zip","standardname":"PostalCode","longname":"Postal Code","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"},"Zoning":{"systemname":"Zoning","standardname":"Zoning","longname":"Zoning","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"CommercialProperty","rets_returned":"0","lastupdate":"1460753225","resource":"Property"}}},"CondoProperty":{"systemname":"CondoProperty","standardname":"CondoProperty","visiblename":"CND","description":"","bundle":"toronto_condo","lifetime":"0","enabled":"1","configured":"1","lastupdate":"1461426279","status_values":"A,U","process_images":"1","image_field_name":"field_toronto_gallery","image_dir":"condo_media","object_type":"Photo","image_chunk_size":"10","query_type":"2","chunk_size":"1000","override_status_query_text":"(Area_code=01)","do_geocoding":"0","geocoder_handler":null,"offset_field":"","offset_amount":"10000","offset_max":"1000000","photo_timestamp_field":"Timestamp_sql","expired_handler":"0","resource":"Property","fields":{"Laundry":{"systemname":"Laundry","standardname":"LaundryAccess","longname":"Laundry Access","datatype":"Character","max_length":"13","field_precision":"0","interpretation":"Lookup","lookupname":"125","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753229","resource":"Property"},"Laundry_lev":{"systemname":"Laundry_lev","standardname":"LaundryLevel","longname":"Laundry Level","datatype":"Character","max_length":"5","field_precision":"0","interpretation":"Lookup","lookupname":"171","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753229","resource":"Property"},"Lease_term":{"systemname":"Lease_term","standardname":"LeaseTerm","longname":"Lease Term","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"119","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753229","resource":"Property"},"Level1":{"systemname":"Level1","standardname":"Level1","longname":"Level 1","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753229","resource":"Property"},"Level10":{"systemname":"Level10","standardname":"Level10","longname":"Level 10","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753229","resource":"Property"},"Level11":{"systemname":"Level11","standardname":"Level11","longname":"Level 11","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753229","resource":"Property"},"Level12":{"systemname":"Level12","standardname":"Level12","longname":"Level 12","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753229","resource":"Property"},"Level2":{"systemname":"Level2","standardname":"Level2","longname":"Level 2","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Level3":{"systemname":"Level3","standardname":"Level3","longname":"Level 3","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Level4":{"systemname":"Level4","standardname":"Level4","longname":"Level 4","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Level5":{"systemname":"Level5","standardname":"Level5","longname":"Level 5","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Level6":{"systemname":"Level6","standardname":"Level6","longname":"Level 6","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Level7":{"systemname":"Level7","standardname":"Level7","longname":"Level 7","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Level8":{"systemname":"Level8","standardname":"Level8","longname":"Level 8","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Level9":{"systemname":"Level9","standardname":"Level9","longname":"Level 9","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Locker":{"systemname":"Locker","standardname":"Locker","longname":"Locker","datatype":"Character","max_length":"17","field_precision":"0","interpretation":"Lookup","lookupname":"29","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Locker_num":{"systemname":"Locker_num","standardname":"LockerNum","longname":"Locker #","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Lp_dol":{"systemname":"Lp_dol","standardname":"ListPrice","longname":"List Price","datatype":"Decimal","max_length":"11","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Maint":{"systemname":"Maint","standardname":"Maintenance","longname":"Maintenance","datatype":"Decimal","max_length":"7","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Ml_num":{"systemname":"Ml_num","standardname":"MLS","longname":"MLS#","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Mmap_col":{"systemname":"Mmap_col","standardname":"MapColumn","longname":"Map Column #","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Comel_inc":{"systemname":"Comel_inc","standardname":"CommonElementsIncluded","longname":"Common Elements Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Cond_txinc":{"systemname":"Cond_txinc","standardname":"CondoTaxesIncluded","longname":"Condo Taxes Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Condo_corp":{"systemname":"Condo_corp","standardname":"CondoRegistryOffice","longname":"Condo Registry Office","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Condo_exp":{"systemname":"Condo_exp","standardname":"Exposure","longname":"Exposure","datatype":"Character","max_length":"2","field_precision":"0","interpretation":"Lookup","lookupname":"27","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Constr1_out":{"systemname":"Constr1_out","standardname":"Exterior1","longname":"Exterior1","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"5","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Constr2_out":{"systemname":"Constr2_out","standardname":"Exterior2","longname":"Exterior2","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"5","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753230","resource":"Property"},"Corp_num":{"systemname":"Corp_num","standardname":"CondoCorp","longname":"Condo Corp#","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"County":{"systemname":"County","standardname":"Province","longname":"Province","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Cross_st":{"systemname":"Cross_st","standardname":"DirectionsCrossStreets","longname":"Directions\\/Cross Streets","datatype":"Character","max_length":"30","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Elevator":{"systemname":"Elevator","standardname":"Elevator","longname":"Elevator","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Ens_lndry":{"systemname":"Ens_lndry","standardname":"EnsuiteLaundry","longname":"Ensuite Laundry","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Extras":{"systemname":"Extras","standardname":"Extras","longname":"Extras","datatype":"Character","max_length":"240","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Fpl_num":{"systemname":"Fpl_num","standardname":"FireplaceStove","longname":"Fireplace\\/Stove","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Fuel":{"systemname":"Fuel","standardname":"HeatSource","longname":"Heat Source","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"6","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Furnished":{"systemname":"Furnished","standardname":"Furnished","longname":"Furnished","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"57","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Gar":{"systemname":"Gar","standardname":"GarageParkSpaces","longname":"Garage\\/Park Spaces","datatype":"Decimal","max_length":"3","field_precision":"1","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Gar_type":{"systemname":"Gar_type","standardname":"GarageType","longname":"Garage Type","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"37","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Heat_inc":{"systemname":"Heat_inc","standardname":"HeatIncluded","longname":"Heat Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Heating":{"systemname":"Heating","standardname":"HeatType","longname":"Heat Type","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"7","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Hydro_inc":{"systemname":"Hydro_inc","standardname":"HydroIncluded","longname":"Hydro Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Insur_bldg":{"systemname":"Insur_bldg","standardname":"BuildingInsuranceIncluded","longname":"Building Insurance Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Kit_plus":{"systemname":"Kit_plus","standardname":"KitchensPlus","longname":"Kitchens Plus","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Mmap_page":{"systemname":"Mmap_page","standardname":"Map","longname":"Map #","datatype":"Decimal","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Wcloset_t2":{"systemname":"Wcloset_t2","standardname":"WashroomsType2","longname":"Washrooms Type 2","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Wcloset_t2lvl":{"systemname":"Wcloset_t2lvl","standardname":"WashroomsType2Level","longname":"Washrooms Type 2 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Wcloset_t3":{"systemname":"Wcloset_t3","standardname":"WashroomsType3","longname":"Washrooms Type 3","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Wcloset_t3lvl":{"systemname":"Wcloset_t3lvl","standardname":"WashroomsType3Level","longname":"Washrooms Type 3 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753231","resource":"Property"},"Wcloset_t4":{"systemname":"Wcloset_t4","standardname":"WashroomsType4","longname":"Washrooms Type 4","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Wcloset_t4lvl":{"systemname":"Wcloset_t4lvl","standardname":"WashroomsType4Level","longname":"Washrooms Type 4 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Wcloset_t5":{"systemname":"Wcloset_t5","standardname":"WashroomsType5","longname":"Washrooms Type 5","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Wcloset_t5lvl":{"systemname":"Wcloset_t5lvl","standardname":"WashroomsType5Level","longname":"Washrooms Type 5 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Yr":{"systemname":"Yr","standardname":"TaxYear","longname":"Tax Year","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Yr_built":{"systemname":"Yr_built","standardname":"ApproxAge","longname":"Approx Age","datatype":"Character","max_length":"5","field_precision":"0","interpretation":"Lookup","lookupname":"40","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Zip":{"systemname":"Zip","standardname":"PostalCode","longname":"Postal Code","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Zoning":{"systemname":"Zoning","standardname":"Zoning","longname":"Zoning","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"A_c":{"systemname":"A_c","standardname":"AirConditioning","longname":"Air Conditioning","datatype":"Character","max_length":"11","field_precision":"0","interpretation":"Lookup","lookupname":"571","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Prop_feat3_out":{"systemname":"Prop_feat3_out","standardname":"PropertyFeatures3","longname":"Property Features3","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Prop_feat4_out":{"systemname":"Prop_feat4_out","standardname":"PropertyFeatures4","longname":"Property Features4","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Prop_feat5_out":{"systemname":"Prop_feat5_out","standardname":"PropertyFeatures5","longname":"Property Features5","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Prop_feat6_out":{"systemname":"Prop_feat6_out","standardname":"PropertyFeatures6","longname":"Property Features6","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Rm9_len":{"systemname":"Rm9_len","standardname":"Room9Length","longname":"Room 9 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Rm9_wth":{"systemname":"Rm9_wth","standardname":"Room9Width","longname":"Room 9 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Pets":{"systemname":"Pets","standardname":"PetsPermitted","longname":"Pets Permitted","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"49","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Prkg_inc":{"systemname":"Prkg_inc","standardname":"ParkingIncluded","longname":"Parking Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Prop_feat1_out":{"systemname":"Prop_feat1_out","standardname":"PropertyFeatures1","longname":"Property Features1","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Prop_feat2_out":{"systemname":"Prop_feat2_out","standardname":"PropertyFeatures2","longname":"Property Features2","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"17","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Pvt_ent":{"systemname":"Pvt_ent","standardname":"PrivateEntrance","longname":"Private Entrance","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Retirement":{"systemname":"Retirement","standardname":"Retirement","longname":"Retirement","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Rltr":{"systemname":"Rltr","standardname":"ListBrokerage","longname":"List Brokerage","datatype":"Character","max_length":"80","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Rm1_dc1_out":{"systemname":"Rm1_dc1_out","standardname":"Room1Desc1","longname":"Room 1 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753232","resource":"Property"},"Rm1_dc2_out":{"systemname":"Rm1_dc2_out","standardname":"Room1Desc2","longname":"Room 1 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm1_dc3_out":{"systemname":"Rm1_dc3_out","standardname":"Room1Desc3","longname":"Room 1 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm1_len":{"systemname":"Rm1_len","standardname":"Room1Length","longname":"Room 1 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm1_out":{"systemname":"Rm1_out","standardname":"Room1","longname":"Room 1","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm1_wth":{"systemname":"Rm1_wth","standardname":"Room1Width","longname":"Room 1 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm10_dc1_out":{"systemname":"Rm10_dc1_out","standardname":"Room10Desc1","longname":"Room 10 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm10_dc2_out":{"systemname":"Rm10_dc2_out","standardname":"Room10Desc2","longname":"Room 10 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm10_dc3_out":{"systemname":"Rm10_dc3_out","standardname":"Room10Desc3","longname":"Room 10 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm10_len":{"systemname":"Rm10_len","standardname":"Room10Length","longname":"Room 10 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm10_out":{"systemname":"Rm10_out","standardname":"Room10","longname":"Room 10","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm10_wth":{"systemname":"Rm10_wth","standardname":"Room10Width","longname":"Room 10 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm11_dc1_out":{"systemname":"Rm11_dc1_out","standardname":"Room11Desc1","longname":"Room 11 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Rm11_dc2_out":{"systemname":"Rm11_dc2_out","standardname":"Room11Desc2","longname":"Room 11 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Spec_des6_out":{"systemname":"Spec_des6_out","standardname":"SpecialDesignation6","longname":"Special Designation6","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"16","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Sqft":{"systemname":"Sqft","standardname":"ApproxSquareFootage","longname":"Approx Square Footage","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"118","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"St":{"systemname":"St","standardname":"StreetName","longname":"Street Name","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"St_dir":{"systemname":"St_dir","standardname":"StreetDirection","longname":"Street Direction","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"21","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"St_num":{"systemname":"St_num","standardname":"Street","longname":"Street #","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"St_sfx":{"systemname":"St_sfx","standardname":"StreetAbbreviation","longname":"Street Abbreviation","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"26","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Status":{"systemname":"Status","standardname":"Status","longname":"Status","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"92","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Stories":{"systemname":"Stories","standardname":"Level","longname":"Level","datatype":"Character","max_length":"3","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Style":{"systemname":"Style","standardname":"Style","longname":"Style","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"Lookup","lookupname":"131","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Taxes":{"systemname":"Taxes","standardname":"Taxes","longname":"Taxes","datatype":"Decimal","max_length":"8","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Tour_url":{"systemname":"Tour_url","standardname":"VirtualTourURL","longname":"Virtual Tour URL","datatype":"Character","max_length":"100","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Community_code":{"systemname":"Community_code","standardname":"CommunityCode","longname":"Community Code","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"502","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Area_code":{"systemname":"Area_code","standardname":"AreaCode","longname":"Area Code","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"500","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Tv":{"systemname":"Tv","standardname":"Assessment","longname":"Assessment","datatype":"Decimal","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753233","resource":"Property"},"Type_own_srch":{"systemname":"Type_own_srch","standardname":"TypeOwnSrch","longname":"Type","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"LookupMulti","lookupname":"2","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Type_own1_out":{"systemname":"Type_own1_out","standardname":"TypeOwn1Out","longname":"Type","datatype":"Character","max_length":"18","field_precision":"0","interpretation":"Lookup","lookupname":"132","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Uffi":{"systemname":"Uffi","standardname":"Uffi","longname":"UFFI","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"13","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Unit_num":{"systemname":"Unit_num","standardname":"Unit","longname":"Unit #","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Vtour_updt":{"systemname":"Vtour_updt","standardname":"VirtualTourUploadDate","longname":"Virtual Tour Upload Date","datatype":"Date","max_length":"10","field_precision":"23","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Water_inc":{"systemname":"Water_inc","standardname":"WaterIncluded","longname":"Water Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Wcloset_p1":{"systemname":"Wcloset_p1","standardname":"WashroomsType1Pcs","longname":"Washrooms Type 1 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Wcloset_p2":{"systemname":"Wcloset_p2","standardname":"WashroomsType2Pcs","longname":"Washrooms Type 2 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Wcloset_p3":{"systemname":"Wcloset_p3","standardname":"WashroomsType3Pcs","longname":"Washrooms Type 3 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Wcloset_p4":{"systemname":"Wcloset_p4","standardname":"WashroomsType4Pcs","longname":"Washrooms Type 4 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Wcloset_p5":{"systemname":"Wcloset_p5","standardname":"WashroomsType5Pcs","longname":"Washrooms Type 5 # Pcs","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Wcloset_t1":{"systemname":"Wcloset_t1","standardname":"WashroomsType1","longname":"Washrooms Type 1","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Wcloset_t1lvl":{"systemname":"Wcloset_t1lvl","standardname":"WashroomsType1Level","longname":"Washrooms Type 1 Level","datatype":"Character","max_length":"8","field_precision":"0","interpretation":"Lookup","lookupname":"19","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Mmap_row":{"systemname":"Mmap_row","standardname":"MapRow","longname":"Map Row","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Num_kit":{"systemname":"Num_kit","standardname":"Kitchens","longname":"Kitchens","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Outof_area":{"systemname":"Outof_area","standardname":"OutofAreaMunicipality","longname":"Out of Area Municipality","datatype":"Character","max_length":"16","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Parcel_id":{"systemname":"Parcel_id","standardname":"ParcelId","longname":"PIN#","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_chgs":{"systemname":"Park_chgs","standardname":"ParkCostMo","longname":"Park Cost\\/Mo","datatype":"Decimal","max_length":"6","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_desig":{"systemname":"Park_desig","standardname":"ParkingType","longname":"Parking Type","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"115","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_desig_2":{"systemname":"Park_desig_2","standardname":"ParkingType2","longname":"Parking Type2","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"115","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_fac":{"systemname":"Park_fac","standardname":"ParkingDrive","longname":"Parking\\/Drive","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"9","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_lgl_desc1":{"systemname":"Park_lgl_desc1","standardname":"ParkingLegalDescription","longname":"Parking Legal Description","datatype":"Character","max_length":"15","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_lgl_desc2":{"systemname":"Park_lgl_desc2","standardname":"ParkingLegalDescription2","longname":"Parking Legal Description2","datatype":"Character","max_length":"15","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_spc1":{"systemname":"Park_spc1","standardname":"ParkingSpot1","longname":"Parking Spot #1","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753234","resource":"Property"},"Park_spc2":{"systemname":"Park_spc2","standardname":"ParkingSpot2","longname":"Parking Spot #2","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Park_spcs":{"systemname":"Park_spcs","standardname":"ParkingSpaces","longname":"Parking Spaces","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Patio_ter":{"systemname":"Patio_ter","standardname":"Balcony","longname":"Balcony","datatype":"Character","max_length":"4","field_precision":"0","interpretation":"Lookup","lookupname":"50","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Rm7_dc3_out":{"systemname":"Rm7_dc3_out","standardname":"Room7Desc3","longname":"Room 7 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Rm7_len":{"systemname":"Rm7_len","standardname":"Room7Length","longname":"Room 7 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Rm7_out":{"systemname":"Rm7_out","standardname":"Room7","longname":"Room 7","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Rm7_wth":{"systemname":"Rm7_wth","standardname":"Room7Width","longname":"Room 7 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Rm8_dc1_out":{"systemname":"Rm8_dc1_out","standardname":"Room8Desc1","longname":"Room 8 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753235","resource":"Property"},"Rm8_dc2_out":{"systemname":"Rm8_dc2_out","standardname":"Room8Desc2","longname":"Room 8 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm8_dc3_out":{"systemname":"Rm8_dc3_out","standardname":"Room8Desc3","longname":"Room 8 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm8_len":{"systemname":"Rm8_len","standardname":"Room8Length","longname":"Room 8 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm8_out":{"systemname":"Rm8_out","standardname":"Room8","longname":"Room 8","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm8_wth":{"systemname":"Rm8_wth","standardname":"Room8Width","longname":"Room 8 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm9_dc1_out":{"systemname":"Rm9_dc1_out","standardname":"Room9Desc1","longname":"Room 9 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm9_dc2_out":{"systemname":"Rm9_dc2_out","standardname":"Room9Desc2","longname":"Room 9 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm9_dc3_out":{"systemname":"Rm9_dc3_out","standardname":"Room9Desc3","longname":"Room 9 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm9_out":{"systemname":"Rm9_out","standardname":"Room9","longname":"Room 9","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rms":{"systemname":"Rms","standardname":"Rooms","longname":"Rooms","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rooms_plus":{"systemname":"Rooms_plus","standardname":"RoomsPlus","longname":"Rooms +","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"S_r":{"systemname":"S_r","standardname":"SaleLease","longname":"Sale\\/Lease","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"70","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Share_perc":{"systemname":"Share_perc","standardname":"SharesPer","longname":"# Shares %","datatype":"Character","max_length":"6","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Spec_des1_out":{"systemname":"Spec_des1_out","standardname":"SpecialDesignation1","longname":"Special Designation1","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"16","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Spec_des2_out":{"systemname":"Spec_des2_out","standardname":"SpecialDesignation2","longname":"Special Designation2","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"16","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Spec_des3_out":{"systemname":"Spec_des3_out","standardname":"SpecialDesignation3","longname":"Special Designation3","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"16","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Spec_des4_out":{"systemname":"Spec_des4_out","standardname":"SpecialDesignation4","longname":"Special Designation4","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"16","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Spec_des5_out":{"systemname":"Spec_des5_out","standardname":"SpecialDesignation5","longname":"Special Designation5","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"16","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm11_dc3_out":{"systemname":"Rm11_dc3_out","standardname":"Room11Desc3","longname":"Room 11 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm11_len":{"systemname":"Rm11_len","standardname":"Room11Length","longname":"Room 11 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm11_out":{"systemname":"Rm11_out","standardname":"Room11","longname":"Room 11","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm11_wth":{"systemname":"Rm11_wth","standardname":"Room11Width","longname":"Room 11 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753236","resource":"Property"},"Rm12_dc1_out":{"systemname":"Rm12_dc1_out","standardname":"Room12Desc1","longname":"Room 12 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm12_dc2_out":{"systemname":"Rm12_dc2_out","standardname":"Room12Desc2","longname":"Room 12 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm12_dc3_out":{"systemname":"Rm12_dc3_out","standardname":"Room12Desc3","longname":"Room 12 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm12_len":{"systemname":"Rm12_len","standardname":"Room12Length","longname":"Room 12 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm12_out":{"systemname":"Rm12_out","standardname":"Room12","longname":"Room 12","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm12_wth":{"systemname":"Rm12_wth","standardname":"Room12Width","longname":"Room 12 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm2_dc1_out":{"systemname":"Rm2_dc1_out","standardname":"Room2Desc1","longname":"Room 2 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm2_dc2_out":{"systemname":"Rm2_dc2_out","standardname":"Room2Desc2","longname":"Room 2 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm2_dc3_out":{"systemname":"Rm2_dc3_out","standardname":"Room2Desc3","longname":"Room 2 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm2_len":{"systemname":"Rm2_len","standardname":"Room2Length","longname":"Room 2 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm2_out":{"systemname":"Rm2_out","standardname":"Room2","longname":"Room 2","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm2_wth":{"systemname":"Rm2_wth","standardname":"Room2Width","longname":"Room 2 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm3_dc1_out":{"systemname":"Rm3_dc1_out","standardname":"Room3Desc1","longname":"Room 3 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm3_dc2_out":{"systemname":"Rm3_dc2_out","standardname":"Room3Desc2","longname":"Room 3 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm3_dc3_out":{"systemname":"Rm3_dc3_out","standardname":"Room3Desc3","longname":"Room 3 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm3_len":{"systemname":"Rm3_len","standardname":"Room3Length","longname":"Room 3 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm3_out":{"systemname":"Rm3_out","standardname":"Room3","longname":"Room 3","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm3_wth":{"systemname":"Rm3_wth","standardname":"Room3Width","longname":"Room 3 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm4_dc1_out":{"systemname":"Rm4_dc1_out","standardname":"Room4Desc1","longname":"Room 4 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm4_dc2_out":{"systemname":"Rm4_dc2_out","standardname":"Room4Desc2","longname":"Room 4 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm4_dc3_out":{"systemname":"Rm4_dc3_out","standardname":"Room4Desc3","longname":"Room 4 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm4_len":{"systemname":"Rm4_len","standardname":"Room4Length","longname":"Room 4 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753237","resource":"Property"},"Rm4_out":{"systemname":"Rm4_out","standardname":"Room4","longname":"Room 4","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm4_wth":{"systemname":"Rm4_wth","standardname":"Room4Width","longname":"Room 4 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm5_dc1_out":{"systemname":"Rm5_dc1_out","standardname":"Room5Desc1","longname":"Room 5 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm5_dc2_out":{"systemname":"Rm5_dc2_out","standardname":"Room5Desc2","longname":"Room 5 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm5_dc3_out":{"systemname":"Rm5_dc3_out","standardname":"Room5Desc3","longname":"Room 5 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm5_len":{"systemname":"Rm5_len","standardname":"Room5Length","longname":"Room 5 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm5_out":{"systemname":"Rm5_out","standardname":"Room5","longname":"Room 5","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm5_wth":{"systemname":"Rm5_wth","standardname":"Room5Width","longname":"Room 5 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm6_dc1_out":{"systemname":"Rm6_dc1_out","standardname":"Room6Desc1","longname":"Room 6 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm6_dc2_out":{"systemname":"Rm6_dc2_out","standardname":"Room6Desc2","longname":"Room 6 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm6_dc3_out":{"systemname":"Rm6_dc3_out","standardname":"Room6Desc3","longname":"Room 6 Desc 3","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm6_len":{"systemname":"Rm6_len","standardname":"Room6Length","longname":"Room 6 Length","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm6_out":{"systemname":"Rm6_out","standardname":"Room6","longname":"Room 6","datatype":"Character","max_length":"9","field_precision":"0","interpretation":"Lookup","lookupname":"20","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm6_wth":{"systemname":"Rm6_wth","standardname":"Room6Width","longname":"Room 6 Width","datatype":"Decimal","max_length":"5","field_precision":"2","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm7_dc1_out":{"systemname":"Rm7_dc1_out","standardname":"Room7Desc1","longname":"Room 7 Desc 1","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Rm7_dc2_out":{"systemname":"Rm7_dc2_out","standardname":"Room7Desc2","longname":"Room 7 Desc 2","datatype":"Character","max_length":"20","field_precision":"0","interpretation":"Lookup","lookupname":"42","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Den_fr":{"systemname":"Den_fr","standardname":"FamilyRoom","longname":"Family Room","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Disp_addr":{"systemname":"Disp_addr","standardname":"DisplayAddressOnInternet","longname":"Display Address On Internet","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Timestamp_sql":{"systemname":"Timestamp_sql","standardname":"TimestampSql","longname":"Updated timestamp","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Area":{"systemname":"Area","standardname":"Area","longname":"Area","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Community":{"systemname":"Community","standardname":"Community","longname":"Community","datatype":"Character","max_length":"44","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Municipality_code":{"systemname":"Municipality_code","standardname":"MunicipalityCode","longname":"Municp Code","datatype":"Character","max_length":"10","field_precision":"0","interpretation":"Lookup","lookupname":"501","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Municipality_district":{"systemname":"Municipality_district","standardname":"MunicipalityDistrict","longname":"Municipality District","datatype":"Character","max_length":"44","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Municipality":{"systemname":"Municipality","standardname":"Municipality","longname":"Municipality","datatype":"Character","max_length":"40","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753238","resource":"Property"},"Idx_dt":{"systemname":"Idx_dt","standardname":"IdxUpdtedDt","longname":"IDX updated date","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Pix_updt":{"systemname":"Pix_updt","standardname":"PixUpdtedDt","longname":"Pix updated date","datatype":"Date","max_length":"10","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Ad_text":{"systemname":"Ad_text","standardname":"RemarksForClients","longname":"Remarks For Clients","datatype":"Character","max_length":"463","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Addr":{"systemname":"Addr","standardname":"Address","longname":"Address","datatype":"Character","max_length":"35","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"All_inc":{"systemname":"All_inc","standardname":"AllInclusive","longname":"All Inclusive","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Apt_num":{"systemname":"Apt_num","standardname":"AptUnit","longname":"Apt\\/Unit","datatype":"Character","max_length":"7","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Ass_year":{"systemname":"Ass_year","standardname":"AssessmentYear","longname":"Assessment Year","datatype":"Decimal","max_length":"4","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bath_tot":{"systemname":"Bath_tot","standardname":"Washrooms","longname":"Washrooms","datatype":"Decimal","max_length":"2","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bldg_amen1_out":{"systemname":"Bldg_amen1_out","standardname":"BuildingAmenities1","longname":"BuildingAmenities1","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"172","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bldg_amen2_out":{"systemname":"Bldg_amen2_out","standardname":"BuildingAmenities2","longname":"BuildingAmenities2","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"172","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bldg_amen3_out":{"systemname":"Bldg_amen3_out","standardname":"BuildingAmenities3","longname":"BuildingAmenities3","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"172","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bldg_amen4_out":{"systemname":"Bldg_amen4_out","standardname":"BuildingAmenities4","longname":"BuildingAmenities4","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"172","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bldg_amen5_out":{"systemname":"Bldg_amen5_out","standardname":"BuildingAmenities5","longname":"BuildingAmenities5","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"172","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bldg_amen6_out":{"systemname":"Bldg_amen6_out","standardname":"BuildingAmenities6","longname":"BuildingAmenities6","datatype":"Character","max_length":"27","field_precision":"0","interpretation":"Lookup","lookupname":"172","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Br":{"systemname":"Br","standardname":"Bedrooms","longname":"Bedrooms","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Br_plus":{"systemname":"Br_plus","standardname":"BedroomsPlus","longname":"Bedrooms +","datatype":"Decimal","max_length":"1","field_precision":"0","interpretation":"","lookupname":"","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bsmt1_out":{"systemname":"Bsmt1_out","standardname":"Basement1","longname":"Basement1","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"10","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Bsmt2_out":{"systemname":"Bsmt2_out","standardname":"Basement2","longname":"Basement2","datatype":"Character","max_length":"12","field_precision":"0","interpretation":"Lookup","lookupname":"10","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Cable":{"systemname":"Cable","standardname":"CableTVIncluded","longname":"Cable TV Included","datatype":"Character","max_length":"1","field_precision":"0","interpretation":"Lookup","lookupname":"11","class":"CondoProperty","rets_returned":"0","lastupdate":"1460753239","resource":"Property"},"Cac_inc":{"translatable":"0","entity_types":["drealty_listing"],"settings":{"precision":"10","scale":"2","decimal_separator":"."},"foreign keys":[],"indexes":[],"field_name":"field_price_per_sqft__torcond","type":"number_decimal","module":"number","active":"1","locked":"0","cardinality":"1","deleted":"0","columns":{"value":{"type":"numeric","precision":"10","scale":"2","not null":false}}}}}}} },
    "resource_mappings" : { "drealty_listing" : {"entity_type":"drealty_listing","resource_name":"Property"} },
    "classes" : null,
    "fields" : null,
    "field_mappings" : [
      {"field_name":"field_address_full__torcond","systemname":"Addr","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_addr__torcond","systemname":"Addr","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_ad_text__torcond","systemname":"Ad_text","field_api_type":"text_long","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_all_inc__torcond","systemname":"All_inc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_apt_num__torcond","systemname":"Apt_num","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_area_code__torcond","systemname":"Area_code","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_area__torcond","systemname":"Area","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_ass_year__torcond","systemname":"Ass_year","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_a_c__torcond","systemname":"A_c","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bath_tot__torcond","systemname":"Bath_tot","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bldg_amen1_out__torcond","systemname":"Bldg_amen1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bldg_amen2_out__torcond","systemname":"Bldg_amen2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bldg_amen3_out__torcond","systemname":"Bldg_amen3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bldg_amen4_out__torcond","systemname":"Bldg_amen4_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bldg_amen5_out__torcond","systemname":"Bldg_amen5_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bldg_amen6_out__torcond","systemname":"Bldg_amen6_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_br_plus__torcond","systemname":"Br_plus","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_br__torcond","systemname":"Br","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bsmt1_out__torcond","systemname":"Bsmt1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_bsmt2_out__torcond","systemname":"Bsmt2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_cable__torcond","systemname":"Cable","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_cac_inc__torcond","systemname":"Cac_inc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_central_vac__torcond","systemname":"Central_vac","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_comel_inc__torcond","systemname":"Comel_inc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_community_code__torcond","systemname":"Community_code","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_community__torcond","systemname":"Community","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_condo_corp__torcond","systemname":"Condo_corp","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_condo_exp__torcond","systemname":"Condo_exp","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_cond_txinc__torcond","systemname":"Cond_txinc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_constr1_out__torcond","systemname":"Constr1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_constr2_out__torcond","systemname":"Constr2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_corp_num__torcond","systemname":"Corp_num","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_county__torcond","systemname":"County","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_cross_st__torcond","systemname":"Cross_st","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_den_fr__torcond","systemname":"Den_fr","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_disp_addr__torcond","systemname":"Disp_addr","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_elevator__torcond","systemname":"Elevator","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_ens_lndry__torcond","systemname":"Ens_lndry","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_extras__torcond","systemname":"Extras","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_fpl_num__torcond","systemname":"Fpl_num","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_fuel__torcond","systemname":"Fuel","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_furnished__torcond","systemname":"Furnished","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_gar_type","systemname":"Gar_type","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_gar_type__torcond","systemname":"Gar_type","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_gar__torcond","systemname":"Gar","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_heating__torcond","systemname":"Heating","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_heat_inc__torcond","systemname":"Heat_inc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_hydro_inc__torcond","systemname":"Hydro_inc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_idx_dt__torcond","systemname":"Idx_dt","field_api_type":"datetime","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_insur_bldg__torcond","systemname":"Insur_bldg","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_kit_plus__torcond","systemname":"Kit_plus","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_laundry_lev__torcond","systemname":"Laundry_lev","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_laundry__torcond","systemname":"Laundry","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_lease_term__torcond","systemname":"Lease_term","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level10__torcond","systemname":"Level10","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level11__torcond","systemname":"Level11","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level12__torcond","systemname":"Level12","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level1__torcond","systemname":"Level1","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level2__torcond","systemname":"Level2","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level3__torcond","systemname":"Level3","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level4__torcond","systemname":"Level4","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level5__torcond","systemname":"Level5","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level6__torcond","systemname":"Level6","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level7__torcond","systemname":"Level7","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level8__torcond","systemname":"Level8","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_level9__torcond","systemname":"Level9","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_locker_num__torcond","systemname":"Locker_num","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_locker__torcond","systemname":"Locker","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_lp_dol__torcond","systemname":"Lp_dol","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_maint__torcond","systemname":"Maint","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_ml_num__torcond","systemname":"Ml_num","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_mmap_col","systemname":"Mmap_col","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_mmap_col__torcond","systemname":"Mmap_col","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_mmap_page__torcond","systemname":"Mmap_page","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_mmap_row__torcond","systemname":"Mmap_row","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_municipality_code__torcond","systemname":"Municipality_code","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_municipality_district__tor","systemname":"Municipality_district","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_municipality__torcond","systemname":"Municipality","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_num_kit__torcond","systemname":"Num_kit","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_outof_area","systemname":"Outof_area","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_outof_area__torcond","systemname":"Outof_area","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_parcel_id__torcond","systemname":"Parcel_id","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_chgs__torcond","systemname":"Park_chgs","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_desig_2__torcond","systemname":"Park_desig_2","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_desig__torcond","systemname":"Park_desig","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_fac__torcond","systemname":"Park_fac","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_lgl_desc1__torcond","systemname":"Park_lgl_desc1","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_lgl_desc2__torcond","systemname":"Park_lgl_desc2","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_spc1__torcond","systemname":"Park_spc1","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_spc2","systemname":"Park_spc2","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_spc2__torcond","systemname":"Park_spc2","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_park_spcs__torcond","systemname":"Park_spcs","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_patio_ter__torcond","systemname":"Patio_ter","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_pets__torcond","systemname":"Pets","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_pix_updt__torcond","systemname":"Pix_updt","field_api_type":"datetime","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_prkg_inc__torcond","systemname":"Prkg_inc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_prop_feat1_out__torcond","systemname":"Prop_feat1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_prop_feat2_out__torcond","systemname":"Prop_feat2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_prop_feat3_out__torcond","systemname":"Prop_feat3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_prop_feat4_out__torcond","systemname":"Prop_feat4_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_prop_feat5_out__torcond","systemname":"Prop_feat5_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_prop_feat6_out__torcond","systemname":"Prop_feat6_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_pvt_ent__torcond","systemname":"Pvt_ent","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_retirement__torcond","systemname":"Retirement","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rltr__torcond","systemname":"Rltr","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm10_dc1_out__torcond","systemname":"Rm10_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm10_dc2_out__torcond","systemname":"Rm10_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm10_dc3_out__torcond","systemname":"Rm10_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm10_len__torcond","systemname":"Rm10_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm10_out__torcond","systemname":"Rm10_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm10_wth__torcond","systemname":"Rm10_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm11_dc1_out__torcond","systemname":"Rm11_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm11_dc2_out__torcond","systemname":"Rm11_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm11_dc3_out__torcond","systemname":"Rm11_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm11_len__torcond","systemname":"Rm11_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm11_out__torcond","systemname":"Rm11_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm11_wth__torcond","systemname":"Rm11_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm12_dc1_out__torcond","systemname":"Rm12_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm12_dc2_out__torcond","systemname":"Rm12_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm12_dc3_out__torcond","systemname":"Rm12_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm12_len__torcond","systemname":"Rm12_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm12_out__torcond","systemname":"Rm12_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm12_wth__torcond","systemname":"Rm12_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm1_dc1_out__torcond","systemname":"Rm1_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm1_dc2_out__torcond","systemname":"Rm1_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm1_dc3_out__torcond","systemname":"Rm1_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm1_len__torcond","systemname":"Rm1_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm1_out__torcond","systemname":"Rm1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm1_wth__torcond","systemname":"Rm1_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm2_dc1_out","systemname":"Rm2_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm2_dc1_out__torcond","systemname":"Rm2_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm2_dc2_out__torcond","systemname":"Rm2_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm2_dc3_out__torcond","systemname":"Rm2_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm2_len__torcond","systemname":"Rm2_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm2_out__torcond","systemname":"Rm2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm2_wth__torcond","systemname":"Rm2_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm3_dc1_out__torcond","systemname":"Rm3_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm3_dc2_out__torcond","systemname":"Rm3_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm3_dc3_out__torcond","systemname":"Rm3_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm3_len__torcond","systemname":"Rm3_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm3_out__torcond","systemname":"Rm3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm3_wth__torcond","systemname":"Rm3_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm4_dc1_out__torcond","systemname":"Rm4_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm4_dc2_out__torcond","systemname":"Rm4_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm4_dc3_out__torcond","systemname":"Rm4_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm4_len__torcond","systemname":"Rm4_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm4_out__torcond","systemname":"Rm4_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm4_wth__torcond","systemname":"Rm4_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm5_dc1_out__torcond","systemname":"Rm5_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm5_dc2_out__torcond","systemname":"Rm5_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm5_dc3_out__torcond","systemname":"Rm5_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm5_len__torcond","systemname":"Rm5_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm5_out__torcond","systemname":"Rm5_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm5_wth__torcond","systemname":"Rm5_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm6_dc1_out__torcond","systemname":"Rm6_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm6_dc2_out__torcond","systemname":"Rm6_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm6_dc3_out__torcond","systemname":"Rm6_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm6_len__torcond","systemname":"Rm6_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm6_out__torcond","systemname":"Rm6_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm6_wth__torcond","systemname":"Rm6_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm7_dc1_out__torcond","systemname":"Rm7_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm7_dc2_out__torcond","systemname":"Rm7_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm7_dc3_out__torcond","systemname":"Rm7_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm7_len__torcond","systemname":"Rm7_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm7_out__torcond","systemname":"Rm7_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm7_wth__torcond","systemname":"Rm7_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm8_dc1_out__torcond","systemname":"Rm8_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm8_dc2_out__torcond","systemname":"Rm8_dc2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm8_dc3_out__torcond","systemname":"Rm8_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm8_len__torcond","systemname":"Rm8_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm8_out__torcond","systemname":"Rm8_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm8_wth__torcond","systemname":"Rm8_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm9_dc1_out__torcond","systemname":"Rm9_dc1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm9_dc2_out__torcond","systemname":"Rm9_dc2_out","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm9_dc3_out__torcond","systemname":"Rm9_dc3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm9_len__torcond","systemname":"Rm9_len","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm9_out__torcond","systemname":"Rm9_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rm9_wth__torcond","systemname":"Rm9_wth","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rms__torcond","systemname":"Rms","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_rooms_plus__torcond","systemname":"Rooms_plus","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_share_perc__torcond","systemname":"Share_perc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_spec_des1_out__torcond","systemname":"Spec_des1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_spec_des2_out__torcond","systemname":"Spec_des2_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_spec_des3_out__torcond","systemname":"Spec_des3_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_spec_des4_out__torcond","systemname":"Spec_des4_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_spec_des5_out__torcond","systemname":"Spec_des5_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_spec_des6_out__torcond","systemname":"Spec_des6_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_sqft__torcond","systemname":"Sqft","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_status__torcond","systemname":"Status","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_stories__torcond","systemname":"Stories","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_style__torcond","systemname":"Style","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_st_dir__torcond","systemname":"St_dir","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_st_num__torcond","systemname":"St_num","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_st_sfx__torcond","systemname":"St_sfx","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_st__torcond","systemname":"St","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_s_r__torcond","systemname":"S_r","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_taxes__torcond","systemname":"Taxes","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_test_geofilld","systemname":"drealty_data_mapped","field_api_type":"geofield","data":{"enabled":true},"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_timestamp_sql__torcond","systemname":"Timestamp_sql","field_api_type":"datetime","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_tour_url__torcond","systemname":"Tour_url","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_tv__torcond","systemname":"Tv","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_type_own1_out__torcond","systemname":"Type_own1_out","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_type_own_srch__torcond","systemname":"Type_own_srch","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_uffi__torcond","systemname":"Uffi","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_unit_num__torcond","systemname":"Unit_num","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_vtour_updt__torcond","systemname":"Vtour_updt","field_api_type":"datetime","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_water_inc__torcond","systemname":"Water_inc","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_p1__torcond","systemname":"Wcloset_p1","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_p2__torcond","systemname":"Wcloset_p2","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_p3__torcond","systemname":"Wcloset_p3","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_p4__torcond","systemname":"Wcloset_p4","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_p5__torcond","systemname":"Wcloset_p5","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t1lvl__torcond","systemname":"Wcloset_t1lvl","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t1__torcond","systemname":"Wcloset_t1","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t2lvl__torcond","systemname":"Wcloset_t2lvl","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t2__torcond","systemname":"Wcloset_t2","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t3lvl__torcond","systemname":"Wcloset_t3lvl","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t3__torcond","systemname":"Wcloset_t3","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t4lvl__torcond","systemname":"Wcloset_t4lvl","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t4__torcond","systemname":"Wcloset_t4","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t5lvl__torcond","systemname":"Wcloset_t5lvl","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_wcloset_t5__torcond","systemname":"Wcloset_t5","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_yr_built__torcond","systemname":"Yr_built","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_yr__torcond","systemname":"Yr","field_api_type":"number_decimal","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_zip__torcond","systemname":"Zip","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"field_zoning__torcond","systemname":"Zoning","field_api_type":"text","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"rets_id","systemname":"Ml_num","field_api_type":"drealty","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"rets_key","systemname":"Ml_num","field_api_type":"drealty","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"},
      {"field_name":"rets_status","systemname":"Status","field_api_type":"drealty","data":false,"hash_exclude":"0","resource_name":"Property","class_name":"CondoProperty"}
    ],
    "debug_mode" : "0",
    "nomap_mode" : "0",
    "status" : "3",
    "module" : "ctf_configurations_drealty_connections",
    "field_instances" : { "toronto_condo" : {
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
          "bundle" : "toronto_condo",
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
            "weight" : "2"
          },
          "id" : "300",
          "field_id" : "292",
          "field_name" : "field_laundry__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "3"
          },
          "id" : "301",
          "field_id" : "293",
          "field_name" : "field_laundry_lev__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "4"
          },
          "id" : "302",
          "field_id" : "294",
          "field_name" : "field_lease_term__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "5"
          },
          "id" : "303",
          "field_id" : "295",
          "field_name" : "field_level1__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "6"
          },
          "id" : "304",
          "field_id" : "296",
          "field_name" : "field_level10__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "7"
          },
          "id" : "305",
          "field_id" : "297",
          "field_name" : "field_level11__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "8"
          },
          "id" : "306",
          "field_id" : "298",
          "field_name" : "field_level12__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "9"
          },
          "id" : "307",
          "field_id" : "299",
          "field_name" : "field_level2__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "10"
          },
          "id" : "308",
          "field_id" : "300",
          "field_name" : "field_level3__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "11"
          },
          "id" : "309",
          "field_id" : "301",
          "field_name" : "field_level4__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "12"
          },
          "id" : "310",
          "field_id" : "302",
          "field_name" : "field_level5__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "13"
          },
          "id" : "311",
          "field_id" : "303",
          "field_name" : "field_level6__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "14"
          },
          "id" : "312",
          "field_id" : "304",
          "field_name" : "field_level7__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "15"
          },
          "id" : "313",
          "field_id" : "305",
          "field_name" : "field_level8__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "16"
          },
          "id" : "314",
          "field_id" : "306",
          "field_name" : "field_level9__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "17"
          },
          "id" : "315",
          "field_id" : "307",
          "field_name" : "field_locker__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "18"
          },
          "id" : "316",
          "field_id" : "308",
          "field_name" : "field_locker_num__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "19"
          },
          "id" : "317",
          "field_id" : "309",
          "field_name" : "field_lp_dol__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "20"
          },
          "id" : "318",
          "field_id" : "310",
          "field_name" : "field_maint__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "22"
          },
          "id" : "320",
          "field_id" : "311",
          "field_name" : "field_comel_inc__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "23"
          },
          "id" : "321",
          "field_id" : "312",
          "field_name" : "field_cond_txinc__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "24"
          },
          "id" : "322",
          "field_id" : "313",
          "field_name" : "field_condo_corp__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "25"
          },
          "id" : "323",
          "field_id" : "314",
          "field_name" : "field_condo_exp__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "26"
          },
          "id" : "324",
          "field_id" : "315",
          "field_name" : "field_constr1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "27"
          },
          "id" : "325",
          "field_id" : "316",
          "field_name" : "field_constr2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "28"
          },
          "id" : "326",
          "field_id" : "317",
          "field_name" : "field_corp_num__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "29"
          },
          "id" : "327",
          "field_id" : "318",
          "field_name" : "field_county__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "30"
          },
          "id" : "328",
          "field_id" : "319",
          "field_name" : "field_cross_st__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "31"
          },
          "id" : "329",
          "field_id" : "320",
          "field_name" : "field_elevator__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "32"
          },
          "id" : "330",
          "field_id" : "321",
          "field_name" : "field_ens_lndry__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "33"
          },
          "id" : "331",
          "field_id" : "322",
          "field_name" : "field_extras__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "34"
          },
          "id" : "332",
          "field_id" : "323",
          "field_name" : "field_fpl_num__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "35"
          },
          "id" : "333",
          "field_id" : "324",
          "field_name" : "field_fuel__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "36"
          },
          "id" : "334",
          "field_id" : "325",
          "field_name" : "field_furnished__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "37"
          },
          "id" : "335",
          "field_id" : "326",
          "field_name" : "field_gar__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "39"
          },
          "id" : "337",
          "field_id" : "327",
          "field_name" : "field_heat_inc__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "40"
          },
          "id" : "338",
          "field_id" : "328",
          "field_name" : "field_heating__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "41"
          },
          "id" : "339",
          "field_id" : "329",
          "field_name" : "field_hydro_inc__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "42"
          },
          "id" : "340",
          "field_id" : "330",
          "field_name" : "field_insur_bldg__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "43"
          },
          "id" : "341",
          "field_id" : "331",
          "field_name" : "field_kit_plus__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "44"
          },
          "id" : "342",
          "field_id" : "332",
          "field_name" : "field_mmap_page__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "57"
          },
          "id" : "355",
          "field_id" : "345",
          "field_name" : "field_a_c__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "58"
          },
          "id" : "356",
          "field_id" : "346",
          "field_name" : "field_prop_feat3_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "59"
          },
          "id" : "357",
          "field_id" : "347",
          "field_name" : "field_prop_feat4_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "60"
          },
          "id" : "358",
          "field_id" : "348",
          "field_name" : "field_prop_feat5_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "61"
          },
          "id" : "359",
          "field_id" : "349",
          "field_name" : "field_prop_feat6_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "64"
          },
          "id" : "362",
          "field_id" : "352",
          "field_name" : "field_pets__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "65"
          },
          "id" : "363",
          "field_id" : "353",
          "field_name" : "field_prkg_inc__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "66"
          },
          "id" : "364",
          "field_id" : "354",
          "field_name" : "field_prop_feat1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "67"
          },
          "id" : "365",
          "field_id" : "355",
          "field_name" : "field_prop_feat2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "68"
          },
          "id" : "366",
          "field_id" : "356",
          "field_name" : "field_pvt_ent__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "69"
          },
          "id" : "367",
          "field_id" : "357",
          "field_name" : "field_retirement__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "70"
          },
          "id" : "368",
          "field_id" : "358",
          "field_name" : "field_rltr__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "71"
          },
          "id" : "369",
          "field_id" : "359",
          "field_name" : "field_rm1_dc1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "72"
          },
          "id" : "370",
          "field_id" : "360",
          "field_name" : "field_rm1_dc2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "73"
          },
          "id" : "371",
          "field_id" : "361",
          "field_name" : "field_ml_num__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "74"
          },
          "id" : "372",
          "field_id" : "362",
          "field_name" : "field_rm1_dc3_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "75"
          },
          "id" : "373",
          "field_id" : "363",
          "field_name" : "field_rm1_len__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "76"
          },
          "id" : "374",
          "field_id" : "364",
          "field_name" : "field_rm1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "77"
          },
          "id" : "375",
          "field_id" : "365",
          "field_name" : "field_rm1_wth__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "78"
          },
          "id" : "376",
          "field_id" : "366",
          "field_name" : "field_rm10_dc1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "79"
          },
          "id" : "377",
          "field_id" : "367",
          "field_name" : "field_rm10_dc2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "80"
          },
          "id" : "378",
          "field_id" : "368",
          "field_name" : "field_rm10_dc3_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "81"
          },
          "id" : "379",
          "field_id" : "369",
          "field_name" : "field_rm10_len__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "82"
          },
          "id" : "380",
          "field_id" : "370",
          "field_name" : "field_rm10_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "widget" : {
            "module" : "number",
            "settings" : [],
            "type" : "number",
            "weight" : "83"
          },
          "id" : "381",
          "field_id" : "371",
          "field_name" : "field_rm10_wth__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "84"
          },
          "id" : "382",
          "field_id" : "372",
          "field_name" : "field_rm11_dc1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "85"
          },
          "id" : "383",
          "field_id" : "373",
          "field_name" : "field_rm11_dc2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "97"
          },
          "id" : "395",
          "field_id" : "385",
          "field_name" : "field_community_code__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "98"
          },
          "id" : "396",
          "field_id" : "386",
          "field_name" : "field_area_code__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "113"
          },
          "id" : "411",
          "field_id" : "401",
          "field_name" : "field_mmap_row__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "114"
          },
          "id" : "412",
          "field_id" : "402",
          "field_name" : "field_num_kit__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "116"
          },
          "id" : "414",
          "field_id" : "403",
          "field_name" : "field_parcel_id__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "117"
          },
          "id" : "415",
          "field_id" : "404",
          "field_name" : "field_park_chgs__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "118"
          },
          "id" : "416",
          "field_id" : "405",
          "field_name" : "field_park_desig__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "119"
          },
          "id" : "417",
          "field_id" : "406",
          "field_name" : "field_park_desig_2__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "120"
          },
          "id" : "418",
          "field_id" : "407",
          "field_name" : "field_park_fac__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "121"
          },
          "id" : "419",
          "field_id" : "408",
          "field_name" : "field_park_lgl_desc1__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "122"
          },
          "id" : "420",
          "field_id" : "409",
          "field_name" : "field_park_lgl_desc2__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "123"
          },
          "id" : "421",
          "field_id" : "410",
          "field_name" : "field_park_spc1__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "125"
          },
          "id" : "423",
          "field_id" : "411",
          "field_name" : "field_park_spcs__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "126"
          },
          "id" : "424",
          "field_id" : "412",
          "field_name" : "field_patio_ter__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "150"
          },
          "id" : "448",
          "field_id" : "436",
          "field_name" : "field_outof_area__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "151"
          },
          "id" : "449",
          "field_id" : "437",
          "field_name" : "field_park_spc2__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "152"
          },
          "id" : "450",
          "field_id" : "438",
          "field_name" : "field_rm11_dc3_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "153"
          },
          "id" : "451",
          "field_id" : "439",
          "field_name" : "field_rm11_len__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "154"
          },
          "id" : "452",
          "field_id" : "440",
          "field_name" : "field_rm11_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "155"
          },
          "id" : "453",
          "field_id" : "441",
          "field_name" : "field_rm11_wth__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "156"
          },
          "id" : "454",
          "field_id" : "442",
          "field_name" : "field_rm12_dc1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "157"
          },
          "id" : "455",
          "field_id" : "443",
          "field_name" : "field_rm12_dc2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "158"
          },
          "id" : "456",
          "field_id" : "444",
          "field_name" : "field_rm12_dc3_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "159"
          },
          "id" : "457",
          "field_id" : "445",
          "field_name" : "field_rm12_len__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "160"
          },
          "id" : "458",
          "field_id" : "446",
          "field_name" : "field_rm12_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "161"
          },
          "id" : "459",
          "field_id" : "447",
          "field_name" : "field_rm12_wth__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "163"
          },
          "id" : "461",
          "field_id" : "448",
          "field_name" : "field_rm2_dc2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "164"
          },
          "id" : "462",
          "field_id" : "449",
          "field_name" : "field_rm2_dc3_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "165"
          },
          "id" : "463",
          "field_id" : "450",
          "field_name" : "field_rm2_len__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "166"
          },
          "id" : "464",
          "field_id" : "451",
          "field_name" : "field_rm2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "167"
          },
          "id" : "465",
          "field_id" : "452",
          "field_name" : "field_rm2_wth__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "168"
          },
          "id" : "466",
          "field_id" : "453",
          "field_name" : "field_rm3_dc1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "194"
          },
          "id" : "492",
          "field_id" : "479",
          "field_name" : "field_den_fr__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "195"
          },
          "id" : "493",
          "field_id" : "480",
          "field_name" : "field_disp_addr__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "197"
          },
          "id" : "495",
          "field_id" : "482",
          "field_name" : "field_area__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "198"
          },
          "id" : "496",
          "field_id" : "483",
          "field_name" : "field_community__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "199"
          },
          "id" : "497",
          "field_id" : "484",
          "field_name" : "field_municipality_code__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "200"
          },
          "id" : "498",
          "field_id" : "485",
          "field_name" : "field_municipality_district__tor",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "201"
          },
          "id" : "499",
          "field_id" : "486",
          "field_name" : "field_municipality__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "205"
          },
          "id" : "503",
          "field_id" : "490",
          "field_name" : "field_addr__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "206"
          },
          "id" : "504",
          "field_id" : "491",
          "field_name" : "field_all_inc__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "207"
          },
          "id" : "505",
          "field_id" : "492",
          "field_name" : "field_apt_num__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "208"
          },
          "id" : "506",
          "field_id" : "493",
          "field_name" : "field_ass_year__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "209"
          },
          "id" : "507",
          "field_id" : "494",
          "field_name" : "field_bath_tot__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "210"
          },
          "id" : "508",
          "field_id" : "495",
          "field_name" : "field_bldg_amen1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "211"
          },
          "id" : "509",
          "field_id" : "496",
          "field_name" : "field_bldg_amen2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "212"
          },
          "id" : "510",
          "field_id" : "497",
          "field_name" : "field_bldg_amen3_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "213"
          },
          "id" : "511",
          "field_id" : "498",
          "field_name" : "field_bldg_amen4_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "214"
          },
          "id" : "512",
          "field_id" : "499",
          "field_name" : "field_bldg_amen5_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "215"
          },
          "id" : "513",
          "field_id" : "500",
          "field_name" : "field_bldg_amen6_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "216"
          },
          "id" : "514",
          "field_id" : "501",
          "field_name" : "field_br__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "217"
          },
          "id" : "515",
          "field_id" : "502",
          "field_name" : "field_br_plus__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "218"
          },
          "id" : "516",
          "field_id" : "503",
          "field_name" : "field_bsmt1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "219"
          },
          "id" : "517",
          "field_id" : "504",
          "field_name" : "field_cable__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "220"
          },
          "id" : "518",
          "field_id" : "505",
          "field_name" : "field_cac_inc__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "221"
          },
          "id" : "519",
          "field_id" : "506",
          "field_name" : "field_central_vac__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "222"
          },
          "id" : "520",
          "field_id" : "507",
          "field_name" : "field_mmap_col__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "223"
          },
          "id" : "521",
          "field_id" : "508",
          "field_name" : "field_gar_type__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "224"
          },
          "id" : "522",
          "field_id" : "509",
          "field_name" : "field_rm2_dc1_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "225"
          },
          "id" : "523",
          "field_id" : "510",
          "field_name" : "field_bsmt2_out__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "226"
          },
          "id" : "524",
          "field_id" : "511",
          "field_name" : "field_ad_text__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "229"
          },
          "id" : "527",
          "field_id" : "514",
          "field_name" : "field_idx_dt__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
            "weight" : "230"
          },
          "id" : "528",
          "field_id" : "515",
          "field_name" : "field_pix_updt__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "bundle" : "toronto_condo",
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
            "weight" : "232"
          },
          "id" : "531",
          "field_id" : "518",
          "field_name" : "field_address_full__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
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
          "label" : "City region",
          "required" : 0,
          "settings" : { "user_register_form" : false },
          "widget" : {
            "weight" : "233",
            "type" : "options_select",
            "module" : "options",
            "active" : 1,
            "settings" : []
          },
          "drealty" : { "hash_exclude" : 0 },
          "id" : "532",
          "field_id" : "519",
          "field_name" : "field_city_region__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
          "deleted" : "0"
        },
        "field_sqft_range_min__torcond" : {
          "label" : "Sqft range min",
          "widget" : {
            "weight" : "236",
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
              "type" : "number_integer",
              "settings" : {
                "thousand_separator" : "",
                "decimal_separator" : ".",
                "scale" : 0,
                "prefix_suffix" : true
              },
              "module" : "number",
              "weight" : 235
            },
            "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
            "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
            "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
          },
          "required" : 0,
          "description" : "",
          "drealty" : { "hash_exclude" : 0 },
          "default_value" : [ { "value" : "0" } ],
          "id" : "537",
          "field_id" : "524",
          "field_name" : "field_sqft_range_min__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
          "deleted" : "0"
        },
        "field_sqft_range_max__torcond" : {
          "label" : "Sqft range max",
          "widget" : {
            "type" : "number",
            "weight" : "237",
            "settings" : [],
            "module" : "number"
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
              "type" : "number_integer",
              "settings" : {
                "thousand_separator" : "",
                "decimal_separator" : ".",
                "scale" : 0,
                "prefix_suffix" : true
              },
              "module" : "number",
              "weight" : 236
            },
            "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
            "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
            "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
          },
          "required" : false,
          "description" : "",
          "id" : "538",
          "field_id" : "525",
          "field_name" : "field_sqft_range_max__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
          "deleted" : "0",
          "default_value" : null
        },
        "field_price_per_sqft__torcond" : {
          "label" : "Price per sqft",
          "widget" : {
            "weight" : "238",
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
              "weight" : 237
            },
            "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
            "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
            "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
          },
          "required" : 0,
          "description" : "",
          "drealty" : { "hash_exclude" : 0 },
          "default_value" : [ { "value" : "0" } ],
          "id" : "539",
          "field_id" : "526",
          "field_name" : "field_price_per_sqft__torcond",
          "entity_type" : "drealty_listing",
          "bundle" : "toronto_condo",
          "deleted" : "0"
        }
      }
    },
    "field_fields" : {
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
      "field_sqft_range_min__torcond" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : [],
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_sqft_range_min__torcond",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_sqft_range_max__torcond" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : [],
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_sqft_range_max__torcond",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_price_per_sqft__torcond" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "precision" : "10", "scale" : "2", "decimal_separator" : "." },
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_price_per_sqft__torcond",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "numeric",
            "precision" : "10",
            "scale" : "2",
            "not null" : false
          }
        }
      }
    }
  }');
  return $items;
}
