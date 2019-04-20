/*
  it-IT.h - localization for Italian - Italy for Sonoff-Tasmota

  Copyright (C) 2019 Gennaro Tortone - some mods by Antonio Fragola

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_IT_IT_H_
#define _LANGUAGE_IT_IT_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v6.0.0a
\*********************************************************************/

#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

#define LANGUAGE_LCID 1040
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "it"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "DomLunMarMerGioVenSab"
#define D_MONTH3LIST "GenFebMarAprMagGiuLugAgoSetOttNovDic"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR "."

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Qualità dell'aria"
#define D_AP "AP"                    // Access Point
#define D_AS "come"
#define D_AUTO "AUTO"
#define D_BLINK "Blink"
#define D_BLINKOFF "BlinkOff"
#define D_BOOT_COUNT "Numero di boot"
#define D_BRIGHTLIGHT "Luminoso"
#define D_BSSID "BSSId"
#define D_BUTTON "Pulsante"
#define D_BY "da"                    // Written by me
#define D_BYTES "Bytes"
#define D_CELSIUS "Celsius"
#define D_CHANNEL "Channel"
#define D_CO2 "CO2"
#define D_CODE "codice"                // Button code
#define D_COLDLIGHT "Fredda"
#define D_COMMAND "Comando"
#define D_CONNECTED "Connesso"
#define D_COUNT "Conteggio"
#define D_COUNTER "Contatore"
#define D_CURRENT "Corrente"          // As in Voltage and Current
#define D_DATA "Dati"
#define D_DARKLIGHT "Scuro"
#define D_DEBUG "Debug"
#define D_DISABLED "Disabilitato"
#define D_DISTANCE "Distanza"
#define D_DNS_SERVER "DNS Server"
#define D_DONE "Fatto"
#define D_DST_TIME "DST"
#define D_ECO2 "eCO2"
#define D_EMULATION "Emulazione"
#define D_ENABLED "Abilitato"
#define D_ERASE "Cancellare"
#define D_ERROR "Errore"
#define D_FAHRENHEIT "Fahrenheit"
#define D_FAILED "Fallito"
#define D_FALLBACK "Riserva"
#define D_FALLBACK_TOPIC "Topic Riserva"
#define D_FALSE "Falso"
#define D_FILE "File"
#define D_FLOW_RATE "Flow rate"
#define D_FREE_MEMORY "Memoria Libera"
#define D_FREQUENCY "Frequenza"
#define D_GAS "Gas"
#define D_GATEWAY "Gateway"
#define D_GROUP "Gruppo"
#define D_HOST "Host"
#define D_HOSTNAME "Nome Host"
#define D_HUMIDITY "Umidità"
#define D_ILLUMINANCE "Illuminazione"
#define D_IMMEDIATE "immediato"      // Button immediate
#define D_INDEX "Indice"
#define D_INFO "Info"
#define D_INFRARED "Infrared"
#define D_INITIALIZED "Inizializzato"
#define D_IP_ADDRESS "Indirizzo IP"
#define D_LIGHT "Luce"
#define D_LWT "LWT"
#define D_MODULE "Modulo"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "multi-pressione"
#define D_NOISE "Rumore"
#define D_NONE "Nessuno"
#define D_OFF "Off"
#define D_OFFLINE "Offline"
#define D_OK "Ok"
#define D_ON "On"
#define D_ONLINE "Online"
#define D_PASSWORD "Password"
#define D_PORT "Porta"
#define D_POWER_FACTOR "Fattore di potenza"
#define D_POWERUSAGE "Potenza"
#define D_POWERUSAGE_ACTIVE "Potenza Attiva"
#define D_POWERUSAGE_APPARENT "Potenza Apparente"
#define D_POWERUSAGE_REACTIVE "Potenza Reattiva"
#define D_PRESSURE "Pressione"
#define D_PRESSUREATSEALEVEL "Pressione al livello del mare"
#define D_PROGRAM_FLASH_SIZE "Dimensione Flash Programma"
#define D_PROGRAM_SIZE "Dimensione Programma"
#define D_PROJECT "Progetto"
#define D_RAIN "Rain"
#define D_RECEIVED "Ricevuto"
#define D_RESTART "Riavvio"
#define D_RESTARTING "Riavviando"
#define D_RESTART_REASON "Causa Riavvio"
#define D_RESTORE "ripristino"
#define D_RETAINED "salvato"
#define D_RULE "Rule"
#define D_SAVE "Salva"
#define D_SENSOR "Sensore"
#define D_SSID "SSId"
#define D_START "Start"
#define D_STD_TIME "STD"
#define D_STOP "Stop"
#define D_SUBNET_MASK "Maschera sottorete"
#define D_SUBSCRIBE_TO "Sottoscrivi a"
#define D_UNSUBSCRIBE_FROM "Unsubscribe from"
#define D_SUCCESSFUL "Riuscito"
#define D_SUNRISE "Alba"
#define D_SUNSET "Tramonto"
#define D_TEMPERATURE "Temperatura"
#define D_TO "a"
#define D_TOGGLE "Toggle"
#define D_TOPIC "Topic"
#define D_TOTAL_USAGE "Total Usage"
#define D_TRANSMIT "Trasmesso"
#define D_TRUE "Vero"
#define D_TVOC "TVOC"
#define D_UPGRADE "aggiornamento"
#define D_UPLOAD "Invio"
#define D_UPTIME "Uptime"
#define D_USER "Utente"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "Indice UV"
#define D_UV_INDEX_1 "Low"
#define D_UV_INDEX_2 "Mid"
#define D_UV_INDEX_3 "High"
#define D_UV_INDEX_4 "Danger"
#define D_UV_INDEX_5 "BurnL1/2"
#define D_UV_INDEX_6 "BurnL3"
#define D_UV_INDEX_7 "OoR"
#define D_UV_LEVEL "Livello UV"
#define D_UV_POWER "Intensità UV"
#define D_VERSION "Versione"
#define D_VOLTAGE "Tensione"
#define D_WEIGHT "Peso"
#define D_WARMLIGHT "Calda"
#define D_WEB_SERVER "Web Server"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "ATTENZIONE Questa versione non supporta il salvataggio delle impostazioni"
#define D_LEVEL_10 "level 1-0"
#define D_LEVEL_01 "level 0-1"
#define D_SERIAL_LOGGING_DISABLED "Log seriale disabilitato"
#define D_SYSLOG_LOGGING_REENABLED "Syslog ri-abilitato"

#define D_SET_BAUDRATE_TO "Baudrate impostato a"
#define D_RECEIVED_TOPIC "Topic Ricevuto"
#define D_DATA_SIZE "Dimensione Dati"
#define D_ANALOG_INPUT "Ingresso Analogico"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Ciclo Bloccato"
#define D_WPS_FAILED_WITH_STATUS "WPSconfig Fallito con stato"
#define D_ACTIVE_FOR_3_MINUTES "attivo per 3 minuti"
#define D_FAILED_TO_START "partenza fallita"
#define D_PATCH_ISSUE_2186 "Patch issue 2186"
#define D_CONNECTING_TO_AP "Connessione ad AP"
#define D_IN_MODE "in modalità"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Connessione fallita, indirizzo IP non ricevuto"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Connessione fallita, AP non raggiungibile"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Connessione fallita, password AP non corretta"
#define D_CONNECT_FAILED_AP_TIMEOUT "Connessione fallita, timeout AP"
#define D_ATTEMPTING_CONNECTION "Tentativo di connessione..."
#define D_CHECKING_CONNECTION "Controllo connessione..."
#define D_QUERY_DONE "Query eseguita. Servizio MQTT trovato"
#define D_MQTT_SERVICE_FOUND "Servizio MQTT trovato su"
#define D_FOUND_AT "trovato a"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog Host non trovato"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Salvato nella flash in"
#define D_LOADED_FROM_FLASH_AT "Caricato dalla flash da"
#define D_USE_DEFAULTS "Utilizzo valori default"
#define D_ERASED_SECTOR "Settore cancellato"

// xdrv_02_webserver.ino
#define D_NOSCRIPT "Abilitare JavaScript per utilizzare Tasmota"
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "MINIMAL firmware<br/>effettuare aggiornamento"
#define D_WEBSERVER_ACTIVE_ON "Web server attivo su"
#define D_WITH_IP_ADDRESS "con indirizzo IP"
#define D_WEBSERVER_STOPPED "Web server arrestato"
#define D_FILE_NOT_FOUND "File Non Trovato"
#define D_REDIRECTED "Redirezione al captive portal"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Impostazione Wifimanager come AccessPoint e Station"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Impostazione Wifimanager come AccessPoint"
#define D_TRYING_TO_CONNECT "Tentativo di connessione del dispositivo alla rete"

#define D_RESTART_IN "Riavvio in"
#define D_SECONDS "secondi"
#define D_DEVICE_WILL_RESTART "Il dispositivo verrà riavviato tra pochi secondi"
#define D_BUTTON_TOGGLE "On/Off"
#define D_CONFIGURATION "Configurazione"
#define D_INFORMATION "Informazioni"
#define D_FIRMWARE_UPGRADE "Aggiornamento Firmware"
#define D_CONSOLE "Console"
#define D_CONFIRM_RESTART "Conferma Riavvio"

#define D_CONFIGURE_MODULE "Configurazione Modulo"
#define D_CONFIGURE_WIFI "Configurazione WiFi"
#define D_CONFIGURE_MQTT "Configurazione MQTT"
#define D_CONFIGURE_DOMOTICZ "Configurazione Domoticz"
#define D_CONFIGURE_LOGGING "Configurazione Logging"
#define D_CONFIGURE_OTHER "Configurazione Extra"
#define D_CONFIRM_RESET_CONFIGURATION "Conferma Reset Configurazione"
#define D_RESET_CONFIGURATION "Reset Configurazione"
#define D_BACKUP_CONFIGURATION "Backup Configurazione"
#define D_RESTORE_CONFIGURATION "Ripristino Configurazione"
#define D_MAIN_MENU "Menu Principale"

#define D_MODULE_PARAMETERS "Parametri del modulo"
#define D_MODULE_TYPE "Tipo modulo"
#define D_PULLUP_ENABLE "No Button/Switch pull-up"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Serial In"
#define D_SERIAL_OUT "Serial Out"

#define D_WIFI_PARAMETERS "Parametri Wifi"
#define D_SCAN_FOR_WIFI_NETWORKS "Scansione delle reti wifi"
#define D_SCAN_DONE "Scansione effettuata"
#define D_NO_NETWORKS_FOUND "Nessuna rete trovata"
#define D_REFRESH_TO_SCAN_AGAIN "Ricarica per nuova scansione"
#define D_DUPLICATE_ACCESSPOINT "AccessPoint duplicato"
#define D_SKIPPING_LOW_QUALITY "Ignorato a causa di bassa qualità"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 SSId"
#define D_AP1_PASSWORD "AP1 Password"
#define D_AP2_SSID "AP2 SSId"
#define D_AP2_PASSWORD "AP2 Password"

#define D_MQTT_PARAMETERS "Parametri MQTT"
#define D_CLIENT "Client"
#define D_FULL_TOPIC "Full Topic"

#define D_LOGGING_PARAMETERS "Parametri Logging"
#define D_SERIAL_LOG_LEVEL "Seriale livello di log"
#define D_WEB_LOG_LEVEL "Web livello di log"
#define D_SYS_LOG_LEVEL "Sys livello di log"
#define D_MORE_DEBUG "Debug aggiuntivo"
#define D_SYSLOG_HOST "Syslog host"
#define D_SYSLOG_PORT "Syslog porta"
#define D_TELEMETRY_PERIOD "Periodo Telemetria"

#define D_OTHER_PARAMETERS "Altri parametri"
#define D_TEMPLATE "Template"
#define D_ACTIVATE "Activate"
#define D_WEB_ADMIN_PASSWORD "Password Amministratore Web"
#define D_MQTT_ENABLE "Abilita MQTT"
#define D_FRIENDLY_NAME "Nome confidenziale"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "dispositivo singolo"
#define D_MULTI_DEVICE "dispositivo multiplo"

#define D_CONFIGURE_TEMPLATE "Configure Template"
#define D_TEMPLATE_PARAMETERS "Template parameters"
#define D_TEMPLATE_NAME "Name"
#define D_BASE_TYPE "Based on"
#define D_TEMPLATE_FLAGS "Options"
#define D_ALLOW_ADC0 "ADC0 input"
#define D_ALLOW_ADC0_TEMP "ADC0 temperature"
#define D_ALLOW_PULLUP "User pull-up selection"

#define D_SAVE_CONFIGURATION "Salva configurazione"
#define D_CONFIGURATION_SAVED "Configurazione salvata"
#define D_CONFIGURATION_RESET "Configurazione azzerata"

#define D_PROGRAM_VERSION "Versione del programma"
#define D_BUILD_DATE_AND_TIME "Data e ora compilazione"
#define D_CORE_AND_SDK_VERSION "Versione Core/SDK"
#define D_FLASH_WRITE_COUNT "Contatore scrittura Flash"
#define D_MAC_ADDRESS "Indirizzo MAC"
#define D_MQTT_HOST "MQTT Host"
#define D_MQTT_PORT "MQTT Porta"
#define D_MQTT_CLIENT "MQTT Client"
#define D_MQTT_USER "MQTT Utente"
#define D_MQTT_TOPIC "MQTT Topic"
#define D_MQTT_GROUP_TOPIC "MQTT Group Topic"
#define D_MQTT_FULL_TOPIC "MQTT Full Topic"
#define D_MDNS_DISCOVERY "mDNS Discovery"
#define D_MDNS_ADVERTISE "mDNS Advertise"
#define D_ESP_CHIP_ID "ESP Chip Id"
#define D_FLASH_CHIP_ID "Flash Chip Id"
#define D_FLASH_CHIP_SIZE "Dimensione Flash"
#define D_FREE_PROGRAM_SPACE "Spazio Libero Memoria Programma"

#define D_UPGRADE_BY_WEBSERVER "Aggiornamento da web server"
#define D_OTA_URL "OTA Url"
#define D_START_UPGRADE "Avvio aggiornamento"
#define D_UPGRADE_BY_FILE_UPLOAD "Aggiornamento tramite invio file"
#define D_UPLOAD_STARTED "Invio iniziato"
#define D_UPGRADE_STARTED "Aggiornamento avviato"
#define D_UPLOAD_DONE "Invio effettuato"
#define D_UPLOAD_ERR_1 "Nessun file selezionato"
#define D_UPLOAD_ERR_2 "Spazio insufficiente"
#define D_UPLOAD_ERR_3 "Magic byte non corrispondente a 0xE9"
#define D_UPLOAD_ERR_4 "Dimensione della memoria programma maggiore della dimensione reale della flash"
#define D_UPLOAD_ERR_5 "Errore di comparazione del buffer di invio"
#define D_UPLOAD_ERR_6 "Invio fallito. Abilitare logging 3"
#define D_UPLOAD_ERR_7 "Invio annullato"
#define D_UPLOAD_ERR_8 "File non valido"
#define D_UPLOAD_ERR_9 "File troppo grande"
#define D_UPLOAD_ERR_10 "Inizializzazione fallita del chip RF"
#define D_UPLOAD_ERR_11 "Cancellazione fallita del chip RF"
#define D_UPLOAD_ERR_12 "Scrittura fallita del chip RF"
#define D_UPLOAD_ERR_13 "Decodifica fallita del firmware RF"
#define D_UPLOAD_ERROR_CODE "Codice errore invio"

#define D_ENTER_COMMAND "Inserire comando"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Abilitare weblog 2 se è attesa una risposta"
#define D_NEED_USER_AND_PASSWORD "Richiesto user=<username>&password=<password>"

// xdrv_01_mqtt.ino
#define D_FINGERPRINT "Verifica TLS fingerprint..."
#define D_TLS_CONNECT_FAILED_TO "Connessione TLS fallita a"
#define D_RETRY_IN "Nuovo tentativo in"
#define D_VERIFIED "Verificato Fingerprint"
#define D_INSECURE "Connessione insicura a causa di Fingerprint non valido"
#define D_CONNECT_FAILED_TO "Connessione Fallita a"

// xplg_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast disabilitato"
#define D_MULTICAST_REJOINED "Multicast (ri)associato"
#define D_MULTICAST_JOIN_FAILED "Associazione Multicast fallita"
#define D_FAILED_TO_SEND_RESPONSE "Invio risposta fallito"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo evento base"
#define D_WEMO_EVENT_SERVICE "WeMo servizio eventi"
#define D_WEMO_META_SERVICE "WeMo meta service"
#define D_WEMO_SETUP "Impostazione WeMo"
#define D_RESPONSE_SENT "Risposta inviata"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Impostazione Hue"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API non implementata"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST argomenti"
#define D_3_RESPONSE_PACKETS_SENT "3 pacchetti di risposta inviati"

// xdrv_07_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Parametri Domoticz"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "Switch idx"
#define D_DOMOTICZ_SENSOR_IDX "Sensor idx"
  #define D_DOMOTICZ_TEMP "Temp"
  #define D_DOMOTICZ_TEMP_HUM "Temp,Hum"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Temp,Hum,Baro"
  #define D_DOMOTICZ_POWER_ENERGY "Power,Energy"
  #define D_DOMOTICZ_ILLUMINANCE "Illuminance"
  #define D_DOMOTICZ_COUNT "Count/PM1"
  #define D_DOMOTICZ_VOLTAGE "Voltage/PM2.5"
  #define D_DOMOTICZ_CURRENT "Current/PM10"
  #define D_DOMOTICZ_AIRQUALITY "AirQuality"
#define D_DOMOTICZ_UPDATE_TIMER "Intervallo di aggiornamento"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Configura Timer"
#define D_TIMER_PARAMETERS "Parametri Timer"
#define D_TIMER_ENABLE "Abilita Timer"
#define D_TIMER_ARM "Attiva"
#define D_TIMER_TIME "Ora"
#define D_TIMER_DAYS "Giorni"
#define D_TIMER_REPEAT "Ripeti"
#define D_TIMER_OUTPUT "Output"
#define D_TIMER_ACTION "Azione"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "Configura KNX"
#define D_KNX_PARAMETERS "Parametri KNX"
#define D_KNX_GENERAL_CONFIG "Generale"
#define D_KNX_PHYSICAL_ADDRESS "Indirizzo Fisico"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "( Deve essere univoco nella rete KNX )"
#define D_KNX_ENABLE "Abilita KNX"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Dati da Inviare al Gruppo di Indirizzi"
#define D_ADD "Aggiungi"
#define D_DELETE "Elimina"
#define D_REPLY "Rispondi"
#define D_KNX_GROUP_ADDRESS_TO_READ "Gruppo di Indirizzi da cui Ricevere Dati"
#define D_LOG_KNX "KNX: "
#define D_RECEIVED_FROM "Ricevuto Da"
#define D_KNX_COMMAND_WRITE "Scrivi"
#define D_KNX_COMMAND_READ "Leggi"
#define D_KNX_COMMAND_OTHER "Altro"
#define D_SENT_TO "invia a"
#define D_KNX_WARNING "L'indirizzo del gruppo ( 0 / 0 / 0 ) è riservato e non può essere usato."
#define D_KNX_ENHANCEMENT "Miglioramento Comunicazione"
#define D_KNX_TX_SLOT "KNX TX"
#define D_KNX_RX_SLOT "KNX RX"

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "Energia Oggi"
#define D_ENERGY_YESTERDAY "Energia Ieri"
#define D_ENERGY_TOTAL "Energia Totale"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Sensore occupato"
#define D_SENSOR_CRC_ERROR "Sensore errore CRC"
#define D_SENSORS_FOUND "Sensori trovati"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Attesa timeout per"
#define D_START_SIGNAL_LOW "inizio segnale basso"
#define D_START_SIGNAL_HIGH "inizio segnale alto"
#define D_PULSE "impulso"
#define D_CHECKSUM_FAILURE "Checksum fallito"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Sensore non ha eseguito il comando ACK"
#define D_SHT1X_FOUND "SHT1X trovato"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Particelle"

// xsns_32_mpu6050.ino
#define D_AX_AXIS "Accel. X-Axis"
#define D_AY_AXIS "Accel. Y-Axis"
#define D_AZ_AXIS "Accel. Z-Axis"
#define D_GX_AXIS "Gyro X-Axis"
#define D_GY_AXIS "Gyro Y-Axis"
#define D_GZ_AXIS "Gyro Z-Axis"

// xsns_34_hx711.ino
#define D_HX_CAL_REMOVE "Rimuovere peso"
#define D_HX_CAL_REFERENCE "Caricare peso di riferimento"
#define D_HX_CAL_DONE "Calibrato"
#define D_HX_CAL_FAIL "Calibrazione fallita"
#define D_RESET_HX711 "Reset Scala"
#define D_CONFIGURE_HX711 "Configura Scala"
#define D_HX711_PARAMETERS "Parametri Scala"
#define D_ITEM_WEIGHT "Peso oggetto"
#define D_REFERENCE_WEIGHT "Peso di riferimento"
#define D_CALIBRATE "Calibrato"
#define D_CALIBRATION "Calibrazione"

//xsns_35_tx20.ino
#define D_TX20_WIND_DIRECTION "Direzione Vento"
#define D_TX20_WIND_SPEED "Velocità Vento"
#define D_TX20_WIND_SPEED_AVG "Velocità Media Vento"
#define D_TX20_WIND_SPEED_MAX "Velocità Massima Vento"
#define D_TX20_NORTH "N"
#define D_TX20_EAST "E"
#define D_TX20_SOUTH "S"
#define D_TX20_WEST "W"

//xsns_43_hre.ino
#define D_LOG_HRE "HRE: "

// sonoff_template.h - keep them as short as possible to be able to fit them in GUI drop down box
#define D_SENSOR_NONE          "Nessuno"
#define D_SENSOR_USER          "User"
#define D_SENSOR_DHT11         "DHT11"
#define D_SENSOR_AM2301        "AM2301"
#define D_SENSOR_SI7021        "SI7021"
#define D_SENSOR_DS18X20       "DS18x20"
#define D_SENSOR_I2C_SCL       "I2C SCL"
#define D_SENSOR_I2C_SDA       "I2C SDA"
#define D_SENSOR_WS2812        "WS2812"
#define D_SENSOR_DFR562        "MP3 Player"
#define D_SENSOR_IRSEND        "IRsend"
#define D_SENSOR_SWITCH        "Switch"     // Suffix "1"
#define D_SENSOR_BUTTON        "Button"     // Suffix "1"
#define D_SENSOR_RELAY         "Relay"      // Suffix "1i"
#define D_SENSOR_LED           "Led"        // Suffix "1i"
#define D_SENSOR_PWM           "PWM"        // Suffix "1"
#define D_SENSOR_COUNTER       "Counter"    // Suffix "1"
#define D_SENSOR_IRRECV        "IRrecv"
#define D_SENSOR_MHZ_RX        "MHZ Rx"
#define D_SENSOR_MHZ_TX        "MHZ Tx"
#define D_SENSOR_PZEM004_RX    "PZEM004 Rx"
#define D_SENSOR_PZEM016_RX    "PZEM016 Rx"
#define D_SENSOR_PZEM017_RX    "PZEM017 Rx"
#define D_SENSOR_PZEM0XX_TX    "PZEM0XX Tx"
#define D_SENSOR_SAIR_RX       "SAir Rx"
#define D_SENSOR_SAIR_TX       "SAir Tx"
#define D_SENSOR_SPI_CS        "SPI CS"
#define D_SENSOR_SPI_DC        "SPI DC"
#define D_SENSOR_BACKLIGHT     "BkLight"
#define D_SENSOR_PMS5003       "PMS5003"
#define D_SENSOR_SDS0X1_RX     "SDS0X1 Rx"
#define D_SENSOR_SDS0X1_TX     "SDS0X1 Tx"
#define D_SENSOR_SBR_RX        "SerBr Rx"
#define D_SENSOR_SBR_TX        "SerBr Tx"
#define D_SENSOR_SR04_TRIG     "SR04 Tri"
#define D_SENSOR_SR04_ECHO     "SR04 Ech"
#define D_SENSOR_SDM120_TX     "SDMx20 Tx"
#define D_SENSOR_SDM120_RX     "SDMx20 Rx"
#define D_SENSOR_SDM630_TX     "SDM630 Tx"
#define D_SENSOR_SDM630_RX     "SDM630 Rx"
#define D_SENSOR_TM1638_CLK    "TM16 CLK"
#define D_SENSOR_TM1638_DIO    "TM16 DIO"
#define D_SENSOR_TM1638_STB    "TM16 STB"
#define D_SENSOR_HX711_SCK     "HX711 SCK"
#define D_SENSOR_HX711_DAT     "HX711 DAT"
#define D_SENSOR_TX20_TX       "TX20"
#define D_SENSOR_RFSEND        "RFSend"
#define D_SENSOR_RFRECV        "RFrecv"
#define D_SENSOR_TUYA_TX       "Tuya Tx"
#define D_SENSOR_TUYA_RX       "Tuya Rx"
#define D_SENSOR_MGC3130_XFER  "MGC3130 Xfr"
#define D_SENSOR_MGC3130_RESET "MGC3130 Rst"
#define D_SENSOR_SSPI_MISO     "SSPI MISO"
#define D_SENSOR_SSPI_MOSI     "SSPI MOSI"
#define D_SENSOR_SSPI_SCLK     "SSPI SCLK"
#define D_SENSOR_SSPI_CS       "SSPI CS"
#define D_SENSOR_SSPI_DC       "SSPI DC"
#define D_SENSOR_RF_SENSOR     "RF Sensor"
#define D_SENSOR_AZ_RX         "AZ Rx"
#define D_SENSOR_AZ_TX         "AZ Tx"
#define D_SENSOR_MAX31855_CS   "MX31855 CS"
#define D_SENSOR_MAX31855_CLK  "MX31855 CLK"
#define D_SENSOR_MAX31855_DO   "MX31855 DO"
#define D_SENSOR_NRG_SEL       "HLWBL SEL"  // Suffix "i"
#define D_SENSOR_NRG_CF1       "HLWBL CF1"
#define D_SENSOR_HLW_CF        "HLW8012 CF"
#define D_SENSOR_HJL_CF        "BL0937 CF"
#define D_SENSOR_MCP39F5_TX    "MCP39F5 Tx"
#define D_SENSOR_MCP39F5_RX    "MCP39F5 Rx"
#define D_SENSOR_MCP39F5_RST   "MCP39F5 Rst"
#define D_SENSOR_CSE7766_TX    "CSE7766 Tx"
#define D_SENSOR_CSE7766_RX    "CSE7766 Rx"
#define D_SENSOR_PN532_TX      "PN532 Tx"
#define D_SENSOR_PN532_RX      "PN532 Rx"
#define D_SENSOR_SM16716_CLK   "SM16716 CLK"
#define D_SENSOR_SM16716_DAT   "SM16716 DAT"
#define D_SENSOR_SM16716_POWER "SM16716 PWR"
#define D_SENSOR_MY92X1_DI     "MY92x1 DI"
#define D_SENSOR_MY92X1_DCKI   "MY92x1 DCKI"
#define D_SENSOR_ARIRFRCV      "ALux IrRcv"
#define D_SENSOR_TXD           "Serial Tx"
#define D_SENSOR_RXD           "Serial Rx"
#define D_SENSOR_ROTARY        "Rotary"     // Suffix "1A"
#define D_SENSOR_HRE_CLOCK     "HRE Clock"
#define D_SENSOR_HRE_DATA      "HRE Data"
#define D_SENSOR_ADE7953_IRQ   "ADE7953 IRQ"

// Units
#define D_UNIT_AMPERE "A"
#define D_UNIT_CENTIMETER "cm"
#define D_UNIT_HERTZ "Hz"
#define D_UNIT_HOUR "Hr"
#define D_UNIT_GALLONS "gal"
#define D_UNIT_GALLONS_PER_MIN "g/m"
#define D_UNIT_INCREMENTS "inc"
#define D_UNIT_KILOGRAM "kg"
#define D_UNIT_KILOMETER_PER_HOUR "km/h"  // or "km/h"
#define D_UNIT_KILOOHM "kOhm"
#define D_UNIT_KILOWATTHOUR "kWh"
#define D_UNIT_LUX "lx"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "ug/m3"
#define D_UNIT_MICROMETER "um"
#define D_UNIT_MICROSECOND "us"
#define D_UNIT_MILLIAMPERE "mA"
#define D_UNIT_MILLIMETER "mm"
#define D_UNIT_MILLIMETER_MERCURY "mmHg"
#define D_UNIT_MILLISECOND "ms"
#define D_UNIT_MINUTE "Min"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "hPa"
#define D_UNIT_SECOND "sec"
#define D_UNIT_SECTORS "settori"
#define D_UNIT_VA "VA"
#define D_UNIT_VAR "VAr"
#define D_UNIT_VOLT "V"
#define D_UNIT_WATT "W"
#define D_UNIT_WATTHOUR "Wh"
#define D_UNIT_WATT_METER_QUADRAT "W/m²"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

//SDM220
#define D_PHASE_ANGLE     "Angolo Fase"
#define D_IMPORT_ACTIVE   "Potenza Attiva Importata"
#define D_EXPORT_ACTIVE   "Potenza Attiva Esportata"
#define D_IMPORT_REACTIVE "Potenza Reattiva Importata"
#define D_EXPORT_REACTIVE "Potenza Reattiva Esportata"
#define D_TOTAL_REACTIVE  "Potenza Reattiva Totale"
#define D_UNIT_KWARH      "kVArh"
#define D_UNIT_ANGLE      "°"

#endif  // _LANGUAGE_IT_IT_H_
