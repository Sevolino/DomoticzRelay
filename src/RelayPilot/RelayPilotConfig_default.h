//This is the default configuration file


#ifndef SSIDWIFI
#define SSIDWIFI "WifiSSIDHere" //SSID wifi (for client mode)
#endif

#ifndef WIFIPASSWORD
#define WIFIPASSWORD "WifiPasswordHere" // Wifi password
#endif

#ifndef HOSTDOMOTICZ
#define HOSTDOMOTICZ "domoticz hostname here" //DOmoticz hostname ou IP
#endif

#ifndef HOSTDOMOTICZPORT
#define HOSTDOMOTICZPORT 8086 //Domoticz Port
#endif

#ifndef MODULENAME
#define MODULENAME "RELAYPLT1" //Module name
#endif

#ifndef DHCPMODE
#define DHCPMODE true //DHCP Mode
#endif

#ifndef IPMODULE
#define IPMODULE {192, 168, 0, 193} // Client IP Adress for the ESP8266
#endif

#ifndef IPGATEWAY
#define IPGATEWAY {192, 168, 0, 1} // Gateway IP 
#endif

#ifndef MASK
#define MASK {255, 255, 255, 0} // Netmask
#endif

#ifndef DNSSERVER
#define DNSSERVER {8,8,8,8} //DNS Server
#endif

#ifndef IDCAPTEURDOMOTICZTEMP
#define IDCAPTEURDOMOTICZTEMP 1 // Device ID of temperature sensors on domoticz
#endif

#ifndef IDCAPTEURDOMOTICZHUM
#define IDCAPTEURDOMOTICZHUM 1 //Device of humidity sensors on domoticz
#endif

#ifndef TYPE_CAPTEUR
#define TYPE_CAPTEUR ID_PARAM_CAPTEUR_DS18B20
#endif


#ifndef SENSOR_PIN_DS18B20
#define SENSOR_PIN_DS18B20 D1  // DS18B20 pin (D1 on ESP8266 NodeMCU dev board)
#endif


#ifndef SEND_HEATER_STATUS_DOMOTICZ
#define SEND_HEATER_STATUS_DOMOTICZ false // Send the heater status (on/off) to Domoticz server
#endif

#ifndef HEATER_STATUS_TEXT_MODE
#define HEATER_STATUS_TEXT_MODE  false // Set heater status has text value in domoticz ( instead of On Off value)
#endif

#ifndef ID_HEATER_DOMOTICZ
#define ID_HEATER_DOMOTICZ 0 //Domoticz heater ID 
#endif


#ifndef SENSOR_PIN_DHT
#define SENSOR_PIN_DHT D2  // DHT pin (D1 on ESP8266 NodeMCU dev board)
#endif

#ifndef RELAY1_PIN
#define RELAY1_PIN D7  // RELAY PIN 1 : ALTERNANCE NEGATIVE
#endif

#ifndef RELAY2_PIN
#define RELAY2_PIN D8  // RELAY PIN 2 : ALTERNANCE POSITIVE
#endif

#ifndef PIN_MODE_CONFIG
#define PIN_MODE_CONFIG D0 //PIN POUR LE MODE CONFIG
#endif


#ifndef DELAY_BETWEEN_SENSORS_SEND_TO_DOMOTICZ
#define DELAY_BETWEEN_SENSORS_SEND_TO_DOMOTICZ 20 //time between to sending of data to domoticz
#endif

#ifndef SEND_HUMIDITY_DHT22
#define SEND_HUMIDITY_DHT22 true
#endif



#ifndef DOMOTICZ_MODE
#define DOMOTICZ_MODE true
#endif


#ifndef JEEDOM_MODE
#define JEEDOM_MODE false
#endif

#ifndef JEEDOM_API_KEY
#define JEEDOM_API_KEY "xxxxxxx"
#endif

#ifndef HOST_JEEDOM
#define HOST_JEEDOM "xxxxxxx"
#endif

#ifndef PORT_JEEDOM
#define PORT_JEEDOM 80
#endif

#ifndef JEEDOMDEVICEIDHUM
#define JEEDOMDEVICEIDHUM 0
#endif

#ifndef JEEDOMDEVICEIDTEMP
#define JEEDOMDEVICEIDTEMP 0
#endif


