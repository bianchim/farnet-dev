<?php

/**
 * @file
 * List of countries used to generate taxonomy on Farnet.
 */

/**
 * Lists Countries used to generate taxonomy.
 */
function farnet_taxonomy_countries() {
  $countries_array = array(
    'European Union' => array(
      'AT' => t('Austria'),
      'BE' => t('Belgium'),
      'BG' => t('Bulgaria'),
      'HR' => t('Croatia'),
      'CY' => t('Cyprus'),
      'CZ' => t('Czech Republic'),
      'DK' => t('Denmark'),
      'EE' => t('Estonia'),
      'FI' => t('Finland'),
      'FR' => t('France'),
      'DE' => t('Germany'),
      'GR' => t('Greece'),
      'HU' => t('Hungary'),
      'IE' => t('Ireland'),
      'IT' => t('Italy'),
      'LV' => t('Latvia'),
      'LT' => t('Lithuania'),
      'LU' => t('Luxembourg'),
      'MT' => t('Malta'),
      'NL' => t('Netherlands'),
      'PL' => t('Poland'),
      'PT' => t('Portugal'),
      'RO' => t('Romania'),
      'SK' => t('Slovakia'),
      'SI' => t('Slovenia'),
      'ES' => t('Spain'),
      'SE' => t('Sweden'),
      'GB' => t('United Kingdom'),
    ),
    'Non-EU countries' => array(
      'AF' => t('Afghanistan'),
      'AL' => t('Albania'),
      'DZ' => t('Algeria'),
      'AD' => t('Andorra'),
      'AO' => t('Angola'),
      'AI' => t('Anguilla'),
      'AG' => t('Antigua and Barbuda'),
      'AR' => t('Argentina'),
      'AM' => t('Armenia'),
      'AU' => t('Australia'),
      'AZ' => t('Azerbaijan'),
      'BS' => t('Bahamas'),
      'BH' => t('Bahrain'),
      'BD' => t('Bangladesh'),
      'BB' => t('Barbados'),
      'BY' => t('Belarus'),
      'BZ' => t('Belize'),
      'BJ' => t('Benin'),
      'BT' => t('Bhutan'),
      'BO' => t('Bolivia'),
      'BA' => t('Bosnia and Herzegovina'),
      'BW' => t('Botswana'),
      'BR' => t('Brazil'),
      'BF' => t('Burkina Faso'),
      'BI' => t('Burundi'),
      'KH' => t('Cambodia'),
      'CM' => t('Cameroon'),
      'CA' => t('Canada'),
      'CV' => t('Cape Verde'),
      'CF' => t('Central African Republic'),
      'TD' => t('Chad'),
      'CL' => t('Chile'),
      'CN' => t('China'),
      'CO' => t('Colombia'),
      'KM' => t('Comoros'),
      'CG' => t('Congo [Republic]'),
      'CR' => t('Costa Rica'),
      'CU' => t('Cuba'),
      'DJ' => t('Djibouti'),
      'DM' => t('Dominica'),
      'DO' => t('Dominican Republic'),
      'TL' => t('East Timor'),
      'EC' => t('Ecuador'),
      'EG' => t('Egypt'),
      'SV' => t('El Salvador'),
      'GQ' => t('Equatorial Guinea'),
      'ER' => t('Eritrea'),
      'ET' => t('Ethiopia'),
      'FJ' => t('Fiji'),
      'GA' => t('Gabon'),
      'GM' => t('Gambia'),
      'GE' => t('Georgia'),
      'GH' => t('Ghana'),
      'GD' => t('Grenada'),
      'GT' => t('Guatemala'),
      'GN' => t('Guinea'),
      'GW' => t('Guinea-Bissau'),
      'GY' => t('Guyana'),
      'HT' => t('Haiti'),
      'HN' => t('Honduras'),
      'IS' => t('Iceland'),
      'IN' => t('India'),
      'ID' => t('Indonesia'),
      'IR' => t('Iran (Islamic Republic of)'),
      'IQ' => t('Iraq'),
      'IL' => t('Israel'),
      'JM' => t('Jamaica'),
      'JP' => t('Japan'),
      'JO' => t('Jordan'),
      'KZ' => t('Kazakhstan'),
      'KE' => t('Kenya'),
      'KI' => t('Kiribati'),
      'KW' => t('Kuwait'),
      'KG' => t('Kyrgyzstan'),
      'LA' => t("Lao People's Democratic Republic"),
      'LB' => t('Lebanon'),
      'LS' => t('Lesotho'),
      'LR' => t('Liberia'),
      'LY' => t('Libya'),
      'LI' => t('Liechtenstein'),
      'MG' => t('Madagascar'),
      'MW' => t('Malawi'),
      'MY' => t('Malaysia'),
      'MV' => t('Maldives'),
      'ML' => t('Mali'),
      'MH' => t('Marshall Islands'),
      'MR' => t('Mauritania'),
      'MU' => t('Mauritius'),
      'MX' => t('Mexico'),
      'FM' => t('Micronesia (Federated states of)'),
      'MC' => t('Monaco'),
      'MN' => t('Mongolia'),
      'ME' => t('Montenegro'),
      'MA' => t('Morocco'),
      'MZ' => t('Mozambique'),
      'MM' => t('Myanmar'),
      'NA' => t('Namibia'),
      'NR' => t('Nauru'),
      'NP' => t('Nepal'),
      'NZ' => t('New Zealand'),
      'NI' => t('Nicaragua'),
      'NE' => t('Niger'),
      'NG' => t('Nigeria'),
      'NO' => t('Norway'),
      'OM' => t('Oman'),
      'PK' => t('Pakistan'),
      'PW' => t('Palau'),
      'PA' => t('Panama'),
      'PG' => t('Papua New Guinea'),
      'PY' => t('Paraguay'),
      'PE' => t('Peru'),
      'PH' => t('Philippines'),
      'QA' => t('Qatar'),
      'RU' => t('Russian Federation'),
      'RW' => t('Rwanda'),
      'KN' => t('Saint Kitts and Nevis'),
      'LC' => t('Saint Lucia'),
      'VC' => t('Saint Vincent and the Grenadines'),
      'WS' => t('Samoa'),
      'SM' => t('San Marino'),
      'ST' => t('Sao Tome and Principe'),
      'SA' => t('Saudi Arabia'),
      'SN' => t('Senegal'),
      'RS' => t('Serbia'),
      'SC' => t('Seychelles'),
      'SL' => t('Sierra Leone'),
      'SG' => t('Singapore'),
      'SB' => t('Solomon Islands'),
      'SO' => t('Somalia'),
      'ZA' => t('South Africa'),
      'SS' => t('South Sudan'),
      'LK' => t('Sri Lanka'),
      'SD' => t('Sudan'),
      'SR' => t('Suriname'),
      'SZ' => t('Swaziland'),
      'CH' => t('Switzerland'),
      'SY' => t('Syrian Arab republic'),
      'TJ' => t('Tajikistan'),
      'TZ' => t('Tanzania'),
      'TH' => t('Thailand'),
      'MK' => t('The former Yugoslav Republic of Macedonia'),
      'TG' => t('Togo'),
      'TO' => t('Tonga'),
      'TN' => t('Tunisia'),
      'TR' => t('Turkey'),
      'TM' => t('Turkmenistan'),
      'TV' => t('Tuvalu'),
      'UG' => t('Uganda'),
      'UA' => t('Ukraine'),
      'AE' => t('United Arab Emirates'),
      'US' => t('United States'),
      'UY' => t('Uruguay'),
      'UZ' => t('Uzbekistan'),
      'VU' => t('Vanuatu'),
      'VE' => t('Venezuela'),
      'VN' => t('Vietnam'),
      'YE' => t('Yemen'),
      'ZM' => t('Zambia'),
      'ZW' => t('Zimbabwe'),
    ),
  );
  return $countries_array;
}
