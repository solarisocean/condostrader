<?php


function new_taxonomy_polygons() {
  $codes = array(
    '09' => "York",

    '09.03' => "Markham",
    '09.03.0060' => "Aileen-Willowbrook",
    '09.03.0170' => "Angus Glen",
    '09.03.0090' => "Bayview Fairway-Bayview Country Club Estates",
    '09.03.0080' => "Bayview Glen",
    '09.03.0210' => "Berczy",
    '09.03.0390' => "Box Glove",
    '09.03.0260' => "Bullock",
    '09.03.0180' => "Buttonville",
    '09.03.0150' => "Cachet",
    '09.03.0130' => "Cathedraltown",
    '09.03.0400' => "Cedar Grove",
    '09.03.0380' => "Cedarwood",
    '09.03.0050' => "Commerce Valley",
    '09.03.0320' => "Cornell",
    '09.03.0160' => "Devil's Elbow",
    '09.03.0100' => "German Mills",
    '09.03.0040' => "Grandview",
    '09.03.0290' => "Greensborough",
    '09.03.0010' => "Langstaff South",
    '09.03.0360' => "Legacy",
    '09.03.0310' => "Markham Village",
    '09.03.0230' => "Markville",
    '09.03.0280' => "Middlefi eld",
    '09.03.0270' => "Milliken Mills East",
    '09.03.0200' => "Milliken Mills West",
    '09.03.0300' => "Old Markham Village",
    '09.03.0240' => "Raymerville",
    '09.03.0370' => "Rouge Fairways",
    '09.03.0350' => "Rouge River Estates",
    '09.03.0020' => "Royal Orchard",
    '09.03.0120' => "Rural Markham",
    '09.03.0340' => "Sherwood-Amberglen",
    '09.03.0030' => "Thornhill",
    '09.03.0070' => "Thornlea",
    '09.03.0190' => "Unionville",
    '09.03.0140' => "Victoria Manor-Jennings Gate",
    '09.03.0110' => "Victoria Square",
    '09.03.0250' => "Village Green-South Unionville",
    '09.03.0330' => "Vinegar Hill",
    '09.03.0220' => "Wismer",

    '09.07' => "Newmarket",
    '09.07.0060' => "Armitage",
    '09.07.0040' => "Bristol-London",
    '09.07.0050' => "Central Newmarket",
    '09.07.0020' => "Glenway Estates",
    '09.07.0080' => "Gorham-College Manor",
    '09.07.0070' => "Huron Heights-Leslie Valley",
    '09.07.0100' => "Newmarket Industrial Park",
    '09.07.0090' => "Stonehaven-Wyndham",
    '09.07.0030' => "Summerhill Estates",
    '09.07.0010' => "Woodland Hill",

    '09.06' => "Aurora",
    '09.06.0070' => "Aurora Estates",
    '09.06.0060' => "Aurora Grove",
    '09.06.0020' => "Aurora Heights",
    '09.06.0030' => "Aurora Highlands",
    '09.06.0040' => "Aurora Village",
    '09.06.0080' => "Bayview Northeast",
    '09.06.0100' => "Bayview Southeast",
    '09.06.0050' => "Bayview Wellington",
    '09.06.0010' => "Hills of St Andrew",
    '09.06.0090' => "Rural Aurora",

    '09.09' => "Georgina",
    '09.09.0070' => "Baldwin",
    '09.09.0040' => "Belhaven",
    '09.09.0010' => "Historic Lakeshore Communities",
    '09.09.0020' => "Keswick North",
    '09.09.0030' => "Keswick South",
    '09.09.0080' => "Pefferlaw",
    '09.09.0050' => "Sutton &amp; Jackson's Point",
    '09.09.0060' => "Virginia",

    '09.05' => "Whitchurch-Stouffville",
    '09.05.0020' => "Ballantrae",
    '09.05.0010' => "Rural Whitchurch-Stouffville",
    '09.05.0030' => "Stouffville",

    '09.04' => "Richmond Hill",
    '09.04.0150' => "Bayview Hill",
    '09.04.0180' => "Beaver Creek Business Park",
    '09.04.0090' => "Crosby",
    '09.04.0080' => "Devonsleigh",
    '09.04.0160' => "Doncrest",
    '09.04.0100' => "Harding",
    '09.04.0170' => "Headford Business Park",
    '09.04.0020' => "Jefferson",
    '09.04.0120' => "Langstaff",
    '09.04.0040' => "Mill Pond",
    '09.04.0050' => "North Richvale",
    '09.04.0010' => "Oak Ridges",
    '09.04.0070' => "Oak Ridges Lake Wilcox",
    '09.04.0110' => "Observatory",
    '09.04.0140' => "Rouge Woods",
    '09.04.0130' => "Rural Richmond Hill",
    '09.04.0060' => "South Richvale",
    '09.04.0030' => "Westbrook",

    '09.02' => "Vaughan",
    '09.02.0180' => "Beverley Glen",
    '09.02.0190' => "Brownridge",
    '09.02.0150' => "Concord",
    '09.02.0220' => "Crestwood-Springfarm-Yorkhill",
    '09.02.0090' => "East Woodbridge",
    '09.02.0040' => "Elder Mills",
    '09.02.0160' => "Glen Shields",
    '09.02.0050' => "Islington Woods",
    '09.02.0020' => "Kleinburg",
    '09.02.0200' => "Lakeview Estates",
    '09.02.0140' => "Maple",
    '09.02.0170' => "Patterson",
    '09.02.0100' => "Pine Valley Business Park",
    '09.02.0130' => "Rural Vaughan",
    '09.02.0030' => "Sonoma Heights",
    '09.02.0110' => "Steeles West Industrial",
    '09.02.0210' => "Uplands",
    '09.02.0120' => "Vaughan Corporate Centre",
    '09.02.0070' => "Vaughan Grove",
    '09.02.0080' => "Vellore Village",
    '09.02.0060' => "West Woodbridge",
    '09.02.0010' => "West Woodbridge Industrial Area",

    '09.10' => "Georgina Islands",
    '09.10.0010' => "Fox Island",
    '09.10.0030' => "Georgina Island",
    '09.10.0020' => "Snake Island",

    '09.08' => "East Gwillimbury",
    '09.08.0010' => "Holland Landing",
    '09.08.0050' => "Mt Albert",
    '09.08.0020' => "Queensville",
    '09.08.0040' => "Rural East Gwillimbury",
    '09.08.0030' => "Sharon",

    '09.01' => "King",
    '09.01.0050' => "King City",
    '09.01.0020' => "Nobleton",
    '09.01.0030' => "Pottageville",
    '09.01.0040' => "Rural King",
    '09.01.0010' => "Schomberg",
    '01' => "Toronto",

    '01.E07' => "E07",
    '01.E07.1050' => "Agincourt North",
    '01.E07.1060' => "Agincourt South - Malvern West",
    '01.E07.1020' => "Milliken",

    '01.W06' => "W06",
    '01.W06.0200' => "Alderwood",
    '01.W06.0190' => "Long Branch",
    '01.W06.0170' => "Mimico",
    '01.W06.0180' => "New Toronto",

    '01.C02' => "C02",
    '01.C02.0860' => "Annex",
    '01.C02.0840' => "Casa Loma",
    '01.C02.0850' => "Wychwood",
    '01.C02.0830' => "Yonge-St. Clair",

    '01.C13' => "C13",
    '01.C13.0670' => "Banbury-Don Mills",
    '01.C13.0660' => "Parkwoods-Donalda",
    '01.C13.0810' => "Victoria Village",

    '01.C06' => "C06",
    '01.C06.0490' => "Bathurst Manor",
    '01.C06.0610' => "Clanton Park",

    '01.C01' => "C01",
    '01.C01.0900' => "Bay Street Corridor",
    '01.C01.0870' => "Dufferin Grove",
    '01.C01.0960' => "Kensington-Chinatown",
    '01.C01.0980' => "Little Portugal",
    '01.C01.0990' => "Niagara",
    '01.C01.0880' => "Palmerston-Little Italy",
    '01.C01.1003' => "The Islands",
    '01.C01.0970' => "Trinity Bellwoods",
    '01.C01.0890' => "University",
    '01.C01.1001' => "Waterfront Communities C01",

    '01.C15' => "C15",
    '01.C15.0570' => "Bayview Village",
    '01.C15.0530' => "Bayview Woods-Steeles",
    '01.C15.0560' => "Don Valley Village",
    '01.C15.0650' => "Henry Farm",
    '01.C15.0540' => "Hillcrest Village",
    '01.C15.0550' => "Pleasant View",

    '01.C04' => "C04",
    '01.C04.0630' => "Bedford Park-Nortown",
    '01.C04.0620' => "Englemount-Lawrence",
    '01.C04.0710' => "Forest Hill North",
    '01.C04.0690' => "Lawrence Park North",
    '01.C04.0700' => "Lawrence Park South",

    '01.W04' => "W04",
    '01.W04.0340' => "Beechborough-Greenbrook",
    '01.W04.0330' => "Briar Hill-Belgravia",
    '01.W04.0310' => "Brookhaven-Amesbury",
    '01.W04.0262' => "Humberlea-Pelmo Park W4",
    '01.W04.0280' => "Maple Leaf",
    '01.W04.0350' => "Mount Dennis",
    '01.W04.0290' => "Rustic",
    '01.W04.0300' => "Weston",
    '01.W04.0320' => "Yorkdale-Glen Park",

    '01.E09' => "E09",
    '01.E09.1110' => "Bendale",
    '01.E09.1130' => "Morningside",
    '01.E09.1120' => "Woburn",

    '01.E06' => "E06",
    '01.E06.1310' => "Birchcliffe-Cliffside",
    '01.E06.1300' => "Oakridge",

    '01.W05' => "W05",
    '01.W05.0220' => "Black Creek",
    '01.W05.0270' => "Downsview-Roding-CFB",
    '01.W05.0240' => "Glenfield-Jane Heights",
    '01.W05.0210' => "Humber Summit",
    '01.W05.0261' => "Humberlea-Pelmo Park W5",
    '01.W05.0250' => "Humbermede",
    '01.W05.0230' => "York University Heights",

    '01.E01' => "E01",
    '01.E01.1360' => "Blake-Jones",
    '01.E01.1370' => "Greenwood-Coxwell",
    '01.E01.1350' => "North Riverdale",
    '01.E01.1400' => "South Riverdale",

    '01.C12' => "C12",
    '01.C12.0680' => "Bridle Path-Sunnybrook-York Mills",
    '01.C12.0640' => "St. Andrew-Windfields",

    '01.E03' => "E03",
    '01.E03.1260' => "Broadview North",
    '01.E03.1290' => "Crescent Town",
    '01.E03.1330' => "Danforth",
    '01.E03.1270' => "Danforth Village-East York",
    '01.E03.1250' => "East York",
    '01.E03.1240' => "O'Connor-Parkview",
    '01.E03.1340' => "Playter Estates-Danforth",
    '01.E03.1380' => "Woodbine-Lumsden",

    '01.C08' => "C08",
    '01.C08.0930' => "Cabbagetown-South St. Jamestown",
    '01.C08.0910' => "Church-Yonge Corridor",
    '01.C08.0950' => "Moss Park",
    '01.C08.0920' => "North St. Jamestown",
    '01.C08.0940' => "Regent Park",
    '01.C08.1002' => "Waterfront Communities C08",

    '01.W03' => "W03",
    '01.W03.0380' => "Caledonia-Fairbank",
    '01.W03.0390' => "Corso Italia-Davenport",
    '01.W03.0370' => "Keelesdale-Eglinton West",
    '01.W03.0360' => "Rockcliffe-Smythe",
    '01.W03.0400' => "Weston-Pellam Park",

    '01.E10' => "E10",
    '01.E10.1150' => "Centennial Scarborough",
    '01.E10.1140' => "Highland Creek",
    '01.E10.1032' => "Rouge E10",
    '01.E10.1160' => "West Hill",

    '01.E04' => "E04",
    '01.E04.1230' => "Clairlea-Birchmount",
    '01.E04.1100' => "Dorset Park",
    '01.E04.1220' => "Ionview",
    '01.E04.1210' => "Kennedy Park",
    '01.E04.1090' => "Wexford-Maryvale",

    '01.E08' => "E08",
    '01.E08.1200' => "Cliffcrest",
    '01.E08.1190' => "Eglinton East",
    '01.E08.1170' => "Guildwood",
    '01.E08.1180' => "Scarborough Village",

    '01.W02' => "W02",
    '01.W02.0460' => "Dovercourt-Wallace Emerson-Junction",
    '01.W02.0440' => "High Park North",
    '01.W02.0410' => "Junction Area",
    '01.W02.0430' => "Lambton Baby Point",
    '01.W02.0420' => "Runnymede-Bloor West Village",

    '01.E02' => "E02",
    '01.E02.1320' => "East End-Danforth",
    '01.E02.1390' => "The Beaches",
    '01.E02.1280' => "Woodbine Corridor",

    '01.W08' => "W08",
    '01.W08.0090' => "Edenbridge-Humber Valley",
    '01.W08.0110' => "Eringate-Centennial-West Deane",
    '01.W08.0130' => "Etobicoke West Mall",
    '01.W08.0140' => "Islington-City Centre West",
    '01.W08.0150' => "Kingsway South",
    '01.W08.0120' => "Markland Wood",
    '01.W08.0100' => "Princess-Rosethorn",

    '01.W10' => "W10",
    '01.W10.0050' => "Elms-Old Rexdale",
    '01.W10.0020' => "Mount Olive-Silverstone-Jamestown",
    '01.W10.0040' => "Rexdale-Kipling",
    '01.W10.0030' => "Thistletown-Beaumonde Heights",
    '01.W10.0010' => "West Humber-Clairville",

    '01.C11' => "C11",
    '01.C11.0800' => "Flemingdon Park",
    '01.C11.0780' => "Leaside",
    '01.C11.0790' => "Thorncliffe Park",

    '01.C03' => "C03",
    '01.C03.0740' => "Forest Hill South",
    '01.C03.0730' => "Humewood-Cedarvale",
    '01.C03.0720' => "Oakwood-Vaughan",
    '01.C03.0750' => "Yonge-Eglinton",

    '01.W01' => "W01",
    '01.W01.0450' => "High Park-Swansea",
    '01.W01.0470' => "Roncesvalles",
    '01.W01.0480' => "South Parkdale",

    '01.W09' => "W09",
    '01.W09.0080' => "Humber Heights",
    '01.W09.0060' => "Kingsview Village-The Westway",
    '01.W09.0070' => "Willowridge-Martingrove-Richview",

    '01.E05' => "E05",
    '01.E05.1070' => "L'Amoreaux",
    '01.E05.1010' => "Steeles",
    '01.E05.1080' => "Tam O'Shanter-Sullivan",

    '01.C07' => "C07",
    '01.C07.0600' => "Lansing-Westgate",
    '01.C07.0510' => "Newtonbrook West",
    '01.C07.0500' => "Westminister-Branson",
    '01.C07.0590' => "Willowdale West",

    '01.E11' => "E11",
    '01.E11.1040' => "Malvern",
    '01.E11.1031' => "Rouge E11",

    '01.C10' => "C10",
    '01.C10.0770' => "Mount Pleasant East",
    '01.C10.0760' => "Mount Pleasant West",

    '01.C14' => "C14",
    '01.C14.0520' => "Newtonbrook East",
    '01.C14.0580' => "Willowdale East",

    '01.C09' => "C09",
    '01.C09.0820' => "Rosedale-Moore Park",

    '01.W07' => "W07",
    '01.W07.0160' => "Stonegate-Queensway",
    '10' => "Durham",

    '10.02' => "Pickering",
    '10.02.0060' => "Amberlea",
    '10.02.0120' => "Bay Ridges",
    '10.02.0160' => "Brock Industrial",
    '10.02.0140' => "Brock Ridge",
    '10.02.0130' => "Duffin Heights",
    '10.02.0090' => "Dunbarton",
    '10.02.0030' => "Highbush",
    '10.02.0100' => "Liverpool",
    '10.02.0050' => "Rosebank",
    '10.02.0020' => "Rouge Park",
    '10.02.0040' => "Rougemount",
    '10.02.0010' => "Rural Pickering",
    '10.02.0110' => "Town Centre",
    '10.02.0150' => "Village East",
    '10.02.0080' => "West Shore",
    '10.02.0070' => "Woodlands",

    '10.07' => "Oshawa",
    '10.07.0210' => "Beaton",
    '10.07.0110' => "Centennial",
    '10.07.0130' => "Central",
    '10.07.0030' => "Columbus",
    '10.07.0190' => "Donevan",
    '10.07.0180' => "Eastdale",
    '10.07.0200' => "Farewell",
    '10.07.0150' => "Kedron",
    '10.07.0140' => "Lakeview",
    '10.07.0070' => "McLaughlin",
    '10.07.0060' => "Northglen",
    '10.07.0050' => "Northwood",
    '10.07.0120' => "O'Neill",
    '10.07.0170' => "Pinecrest",
    '10.07.0010' => "Raglan",
    '10.07.0020' => "Rural Oshawa",
    '10.07.0100' => "Samac",
    '10.07.0090' => "Stevenson",
    '10.07.0160' => "Taunton",
    '10.07.0080' => "Vanier",
    '10.07.0040' => "Windfields",

    '10.03' => "Brock",
    '10.03.0010' => "Beaverton",
    '10.03.0040' => "Cannington",
    '10.03.0020' => "Rural Brock",
    '10.03.0030' => "Sunderland",

    '10.04' => "Scugog",
    '10.04.0030' => "Blackstock",
    '10.04.0010' => "Port Perry",
    '10.04.0020' => "Rural Scugog",

    '10.06' => "Whitby",
    '10.06.0100' => "Blue Grass Meadows",
    '10.06.0050' => "Brooklin",
    '10.06.0080' => "Downtown Whitby",
    '10.06.0030' => "Lynde Creek",
    '10.06.0040' => "Port Whitby",
    '10.06.0070' => "Pringle Creek",
    '10.06.0090' => "Rolling Acres",
    '10.06.0010' => "Rural Whitby",
    '10.06.0060' => "Taunton North",
    '10.06.0110' => "Whitby Industrial",
    '10.06.0020' => "Williamsburg",

    '10.08' => "Clarington",
    '10.08.0020' => "Bowmanville",
    '10.08.0010' => "Courtice",
    '10.08.0050' => "Newcastle",
    '10.08.0040' => "Orono",
    '10.08.0030' => "Rural Clarington",

    '10.05' => "Ajax",
    '10.05.0040' => "Central",
    '10.05.0060' => "Central East",
    '10.05.0020' => "Central West",
    '10.05.0050' => "Northeast Ajax",
    '10.05.0010' => "Northwest Ajax",
    '10.05.0070' => "South East",
    '10.05.0030' => "South West",

    '10.01' => "Uxbridge",
    '10.01.0010' => "Rural Uxbridge",
    '10.01.0020' => "Uxbridge",

    '10.09' => "Scugog 34",
    '10.09.0010' => "Scugog First Nations",
    '05' => "Peel",
    '06' => "Halton",

    '05.03' => "Mississauga",
    '05.03.0290' => "Airport Corporate",
    '05.03.0310' => "Applewood",
    '05.03.0070' => "Central Erin Mills",
    '05.03.0020' => "Churchill Meadows",
    '05.03.0210' => "City Centre",
    '05.03.0120' => "Clarkson",
    '05.03.0240' => "Cooksville",
    '05.03.0160' => "Creditview",
    '05.03.0320' => "Dixie",
    '05.03.0150' => "East Credit",
    '05.03.0080' => "Erin Mills",
    '05.03.0180' => "Erindale",
    '05.03.0220' => "Fairview",
    '05.03.0190' => "Gateway",
    '05.03.0200' => "Hurontario",
    '05.03.0330' => "Lakeview",
    '05.03.0010' => "Lisgar",
    '05.03.0130' => "Lorne Park",
    '05.03.0270' => "Malton",
    '05.03.0170' => "Mavis-Erindale",
    '05.03.0040' => "Meadowvale",
    '05.03.0050' => "Meadowvale Business Park",
    '05.03.0140' => "Meadowvale Village",
    '05.03.0250' => "Mineola",
    '05.03.0230' => "Mississauga Valleys",
    '05.03.0280' => "Northeast",
    '05.03.0260' => "Port Credit",
    '05.03.0300' => "Rathwood",
    '05.03.0100' => "Sheridan",
    '05.03.0090' => "Sheridan Park",
    '05.03.0110' => "Southdown",
    '05.03.0060' => "Streetsville",
    '05.03.0030' => "Western Business Park",

    '05.02' => "Brampton",
    '05.02.0390' => "Airport Road/ Highway 7 Business Centre",
    '05.02.0300' => "Avondale",
    '05.02.0440' => "Bram East",
    '05.02.0030' => "Bram West",
    '05.02.0340' => "Bramalea North Industrial",
    '05.02.0310' => "Bramalea Road South Gateway",
    '05.02.0350' => "Bramalea South Industrial",
    '05.02.0220' => "Brampton 407 Corridor",
    '05.02.0170' => "Brampton East",
    '05.02.0210' => "Brampton East Industrial",
    '05.02.0160' => "Brampton North",
    '05.02.0130' => "Brampton South",
    '05.02.0270' => "Brampton West Industrial",
    '05.02.0110' => "Bramton West",
    '05.02.0290' => "Central Park",
    '05.02.0450' => "Clairville Conservation",
    '05.02.0040' => "Credit Valley",
    '05.02.0120' => "Downtown Brampton",
    '05.02.0090' => "Fletcher's Creek South",
    '05.02.0060' => "Fletcher's Creek Village",
    '05.02.0050' => "Fletcher's Meadow",
    '05.02.0080' => "Fletcher's West",
    '05.02.0380' => "Gore Industrial North",
    '05.02.0400' => "Gore Industrial South",
    '05.02.0430' => "Goreway Drive Corridor",
    '05.02.0180' => "Heart Lake",
    '05.02.0190' => "Heart Lake East",
    '05.02.0150' => "Heart Lake West",
    '05.02.0460' => "Highway 427",
    '05.02.0020' => "Huttonville",
    '05.02.0200' => "Madoc",
    '05.02.0320' => "Northgate",
    '05.02.0010' => "Northwest Brampton",
    '05.02.0100' => "Northwest Sandalwood Parkway",
    '05.02.0070' => "Northwood Park",
    '05.02.0410' => "Parkway Belt Industrial Area",
    '05.02.0260' => "Queen Street Corridor",
    '05.02.0240' => "Sandringham - Wellington",
    '05.02.0230' => "Sandringham - Wellington North",
    '05.02.0140' => "Snelgrove",
    '05.02.0330' => "Southgate",
    '05.02.0280' => "Steeles Industrial",
    '05.02.0420' => "Toronto Gore Rural Estate",
    '05.02.0370' => "Vales of Castlemore",
    '05.02.0360' => "Vales of Castlemore North",
    '05.02.0250' => "Westgate",

    '05.01' => "Caledon",
    '05.01.0010' => "Alton",
    '05.01.0110' => "Bolton East",
    '05.01.0100' => "Bolton North",
    '05.01.0090' => "Bolton West",
    '05.01.0070' => "Caledon East",
    '05.01.0030' => "Caledon Village",
    '05.01.0020' => "Cheltenham",
    '05.01.0040' => "Inglewood",
    '05.01.0060' => "Mono Mills",
    '05.01.0080' => "Palgrave",
    '05.01.0050' => "Rural Caledon",

    '06.02' => "Burlington",
    '06.02.0130' => "Alton",
    '06.02.0210' => "Appleby",
    '06.02.0030' => "Bayview",
    '06.02.0090' => "Brant",
    '06.02.0060' => "Brant Hills",
    '06.02.0180' => "Bront Creek",
    '06.02.0080' => "Freeman",
    '06.02.0020' => "Grindstone",
    '06.02.0100' => "Headon",
    '06.02.0160' => "Industrial Burlington",
    '06.02.0040' => "LaSalle",
    '06.02.0070' => "Mountainside",
    '06.02.0190' => "Orchard",
    '06.02.0110' => "Palmer",
    '06.02.0140' => "Rose",
    '06.02.0120' => "Roseland",
    '06.02.0010' => "Rural Burlington",
    '06.02.0170' => "Shoreacres",
    '06.02.0150' => "Tansley",
    '06.02.0050' => "Tyandaga",
    '06.02.0200' => "Uptown",

    '06.04' => "Oakville",
    '06.04.0050' => "Bronte East",
    '06.04.0020' => "Bronte West",
    '06.04.0140' => "Clearview",
    '06.04.0080' => "College Park",
    '06.04.0150' => "Eastlake",
    '06.04.0040' => "Glen Abbey",
    '06.04.0110' => "Iroquois Ridge North",
    '06.04.0120' => "Iroquois Ridge South",
    '06.04.0090' => "Old Oakville",
    '06.04.0010' => "Palermo West",
    '06.04.0070' => "River Oaks",
    '06.04.0060' => "Rural Oakville",
    '06.04.0100' => "Uptown Core",
    '06.04.0030' => "West Oak Trails",
    '06.04.0130' => "Winston Park",

    '06.01' => "Milton",
    '06.01.0100' => "401 Business Park",
    '06.01.0230' => "Beaty",
    '06.01.0240' => "Bowes",
    '06.01.0130' => "Bronte Meadows",
    '06.01.0020' => "Brookville",
    '06.01.0030' => "Campbellville",
    '06.01.0220' => "Clarke",
    '06.01.0190' => "Coates",
    '06.01.0200' => "Cobban",
    '06.01.0210' => "Dempsey",
    '06.01.0250' => "Derry Green Business Park",
    '06.01.0170' => "Dorset Park",
    '06.01.0160' => "Esquesing",
    '06.01.0150' => "Ford",
    '06.01.0080' => "Harrison",
    '06.01.0060' => "Milton Heights",
    '06.01.0010' => "Moffat",
    '06.01.0110' => "Mountain View",
    '06.01.0050' => "Nassagaweya",
    '06.01.0040' => "Nelson",
    '06.01.0120' => "Old Milton",
    '06.01.0070' => "Scott",
    '06.01.0180' => "Timberlea",
    '06.01.0260' => "Trafalgar",
    '06.01.0090' => "Walker",
    '06.01.0140' => "Willmont",

    '06.03' => "Halton Hills",
    '06.03.0010' => "Acton",
    '06.03.0050' => "Georgetown",
    '06.03.0060' => "Glen Williams",
    '06.03.0020' => "Limehouse",
    '06.03.0030' => "Rural Halton Hills",
    '06.03.0040' => "Stewarttown",

  );
  $polys = file_get_contents(DRUPAL_ROOT . '/' . drupal_get_path('module', 'ctrader_map') . '/rebeccalaing_ca/polygons.txt');
  $polys = json_decode($polys, TRUE);

  $first_level_terms = array();
  $second_level_terms = array();
  $third_level_terms = array();
  $communities = array();
  foreach ($codes as $reg_code => $reg_name) {
    $community_polys = isset($polys[$reg_code]) ? $polys[$reg_code] : '';
    if (is_array($community_polys)) {
      if (is_array($community_polys[0][0])) {
        $multi_coord = array();
        foreach ($community_polys as $pol_part) {
          $coord = array();
          foreach ($pol_part as $value) {
            $value = array_reverse($value);
            $coord[] = $value;
          }
          $multi_coord[] = $coord;
        }
        $community_polys = array(
          'type' => 'MULTIPOLYGON',
          'coordinates' => array($multi_coord),
        );
      }
      else {
        $coord = array();
        foreach ($community_polys as $value) {
          $value = array_reverse($value);
          $coord[] = $value;
        }
        $community_polys = array(
          'type' => 'POLYGON',
          'coordinates' => array($coord),
        );
      }
    }
    $communities[$reg_code] = array(
      'code' => $reg_code,
      'name' => $reg_name,
      'polygon' => $community_polys,
    );
    $reg_code_array = explode('.', $reg_code);
    $reg_code_array_count = count($reg_code_array);
    switch($reg_code_array_count) {
      case '1':
        $first_level_terms[$reg_code] = $reg_name;
        break;
      case '2':
        $second_level_terms[$reg_code] = $reg_name;
        break;
      case '3':
        $third_level_terms[$reg_code] = $reg_name;
        break;
    }
  }





/******************************************************************************/

  $vid = taxonomy_vocabulary_machine_name_load('communities'); //Neighbourhoods vocabulary.
      $vid = $vid->vid;

//  if ($vid == FALSE) {
//    drupal_set_message(t('Vocabulary does not exist.'), 'error');
//    return;
//  }
//  else {
//    $vid = $vid->vid;
//  }
//
//  // Checks if vocabulary is empty.
//  $check_vocab = taxonomy_get_tree($vid, 0, 1);
//  if (!empty($check_vocab)) {
//    drupal_set_message(t('Vocabulary is not empty.'), 'warning');
//    drupal_set_message(t('You should clear Communities vocabulary before creating new taxonomy tree.'), 'warning');
//    return;
//  }


  // Creates first level terms.
  $tree = taxonomy_get_tree($vid, 0, NULL, TRUE);
  foreach ($communities as $key => $element) {
    if (in_array($element['name'], $first_level_terms)) {
      _prepare_new_taxonomy_term($element, $vid, $tree);
      unset($communities[$key]);
    }
  }

  // Creates second level terms.
  $tree = taxonomy_get_tree($vid, 0, NULL, TRUE);
  $second_level_terms = array_flip($second_level_terms);
  foreach ($communities as $key => $element) {
    if (in_array($element['code'], $second_level_terms)) {
      _prepare_new_taxonomy_term($element, $vid, $tree);
      unset($communities[$key]);
    }
  }

  // Creates third level terms.
  $tree = taxonomy_get_tree($vid, 0, NULL, TRUE);
  foreach ($communities as $key => $element) {
    _prepare_new_taxonomy_term($element, $vid, $tree);
    unset($communities[$key]);
  }
}


/**
 * Prepares term object and saves taxonomy term.
 *
 * @param $element - item from xml file.
 * @param $vid - Neighbourhoods vocabulary id.
 * @param $tree - tree of existed Neighbourhoods vocabulary taxonomy terms.
 */
function _prepare_new_taxonomy_term($element, $vid, $tree) {
  $term = new stdClass();
  $term->name = $element['name'];
  $term->vid = $vid;
  $term->field_community_code[LANGUAGE_NONE][0]['value'] = $element['code'];

  //Creates json for geofield.
  if ($element['polygon']) {
    $polygon_json = json_encode($element['polygon']);
    $term->field_community_geopolygon[LANGUAGE_NONE][0]['geom'] = $polygon_json;
    $term->field_community_geopolygon[LANGUAGE_NONE][0]['input_format'] = 'json';
  }

  // Added parents if exists.
  $parent_code = explode('.', $element['code']);
  array_pop($parent_code);
  if($parent_code) {
    $parent_code = implode('.', $parent_code);
    foreach ($tree as $value) {
      if (isset($value->field_community_code[LANGUAGE_NONE][0]['value']) && $value->field_community_code[LANGUAGE_NONE][0]['value'] == $parent_code) {
        if (!empty($value->parents)) {
          $term->parent = $value->parents;
          $term->parent[$value->tid] = $value->tid;
          unset($term->parent[0]);
        }
        else {
          $term->parent[$value->tid] = $value->tid;
        }
      }
    }
  }
  taxonomy_term_save($term);
}
