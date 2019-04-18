// OTAManager.h

#ifndef _OTAMANAGER_h
#define _OTAMANAGER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <ArduinoOTA.h>
#include <ESP8266mDNS.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureAxTLS.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureAxTLS.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>

class OTAManager
{
 private:
	 
	 const char* WIFI_SSID = "";
	 const char* WIFI_PASSWORD = "";
	 const uint16_t OTA_PORT = 8266;
	 const char* OTA_HOSTNAME = "esp8266-cc2321-tostamatic";
	 const char* OTA_HASH = "";

 protected:
	 
	 String IPAddress2String(IPAddress address);

 public:

	void init();
	void handle();
};

extern OTAManager OTAManagerInstance;

#endif

