// 
// 
// 

#include "OTAManager.h"

void OTAManager::init()
{
	Serial.println("Booting WIFI");

	WiFi.mode(WIFI_STA); // Tipo de seguridad
	WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

	while (WiFi.waitForConnectResult() != WL_CONNECTED)
	{
		Serial.println("Connection Failed! Rebooting...");
		delay(5000);
		ESP.restart();
	}
	String ipAddress = IPAddress2String(WiFi.localIP());

	ArduinoOTA.setPort(OTA_PORT);
	ArduinoOTA.setHostname(OTA_HOSTNAME);
	//ArduinoOTA.setPassword(OTA_PASSWORD);
	ArduinoOTA.setPasswordHash(OTA_HASH);

	ArduinoOTA.onStart([]() {
		String type;
		if (ArduinoOTA.getCommand() == U_FLASH) {
			type = "sketch";
		}
		else { // U_SPIFFS
			type = "filesystem";
		}

		// NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
		Serial.println("Start updating " + type);
	});

	ArduinoOTA.onEnd([]() {
		Serial.println("\nEnd");
	});

	ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
		Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
	});

	ArduinoOTA.onError([](ota_error_t error) {
		Serial.printf("Error[%u]: ", error);
		if (error == OTA_AUTH_ERROR) {
			Serial.println("Auth Failed");
		}
		else if (error == OTA_BEGIN_ERROR) {
			Serial.println("Begin Failed");
		}
		else if (error == OTA_CONNECT_ERROR) {
			Serial.println("Connect Failed");
		}
		else if (error == OTA_RECEIVE_ERROR) {
			Serial.println("Receive Failed");
		}
		else if (error == OTA_END_ERROR) {
			Serial.println("End Failed");
		}
	});

	ArduinoOTA.begin();

}

void OTAManager::handle()
{
	ArduinoOTA.handle();
}

String OTAManager::IPAddress2String(IPAddress address)
{
	return String(address[0]) + "." + String(address[1]) + "." + String(address[2]) + "." + String(address[3]);
}

OTAManager OTAManagerInstance;