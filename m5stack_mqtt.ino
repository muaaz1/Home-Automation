#include <M5Stack.h>
#include <WiFi.h>
#include "MQTT.h"
#include <WiFiClientSecure.h>

extern const unsigned char door_active[];
extern const unsigned char off_[];
extern const unsigned char wifu1[];
extern const unsigned char arrow_left[];
extern const unsigned char arrow_right[];
extern const unsigned char gImage_logoM5[];
extern const unsigned char m5stack_startup_music[];

 // for dashboard 1
  int x =0;
  int y =0;
  bool dashboard ;
  bool devices ;
  bool off ;

   // for dashboard2
  
  int pin = 17;
  int pin2 =26; // pin 25 takleh guna
  int pin3 = 36;
  bool screen1_show;
  bool screen2_show;
  
  bool all;
  bool lamp1;
  bool lamp2;
  bool lamp3;
  bool back;
  int q=0;
  int w=0;

   // for Wifi
   
 const char* ssid = "BILLION PRIMA";
 const char* pass = "billionprima01"; //
 int i = 0;
 int k =0;
 bool betul;
 bool betul2;
 bool screen_wifi;

 // for mqtt broker
 
  const char* mqtt_server =  "things.sensenet.my";
  const int port =8883;
  const char* mqttuser = "sensenet";
  const char* mqttPassword = "sensenet123!";
  bool mqtt;

     void startupLogo()
   {
        static uint8_t brightness, pre_brightness;
        uint32_t length = strlen((char*)m5stack_startup_music);
        M5.Lcd.setBrightness(0);
        M5.Lcd.pushImage(0, 0, 320, 240, (uint16_t *)gImage_logoM5);
        
        for(int i=0; i<length; i++) {
            //dacWrite(SPEAKER_PIN, m5stack_startup_music[i]>>2);
            delayMicroseconds(100);
            brightness = (i/157);
            if(pre_brightness != brightness) {
                pre_brightness = brightness;
                M5.Lcd.setBrightness(brightness);
            }
        }
         M5.Lcd.clear();
  }

      const char* local_root_ca =
    "-----BEGIN CERTIFICATE-----\n" \
    "MIIEkjCCA3qgAwIBAgIQCgFBQgAAAVOFc2oLheynCDANBgkqhkiG9w0BAQsFADA/\n" \
     "MSQwIgYDVQQKExtEaWdpdGFsIFNpZ25hdHVyZSBUcnVzdCBDby4xFzAVBgNVBAMT\n" \
     "DkRTVCBSb290IENBIFgzMB4XDTE2MDMxNzE2NDA0NloXDTIxMDMxNzE2NDA0Nlow\n" \
     "SjELMAkGA1UEBhMCVVMxFjAUBgNVBAoTDUxldCdzIEVuY3J5cHQxIzAhBgNVBAMT\n" \
     "GkxldCdzIEVuY3J5cHQgQXV0aG9yaXR5IFgzMIIBIjANBgkqhkiG9w0BAQEFAAOC\n" \
     "AQ8AMIIBCgKCAQEAnNMM8FrlLke3cl03g7NoYzDq1zUmGSXhvb418XCSL7e4S0EF\n" \
     "q6meNQhY7LEqxGiHC6PjdeTm86dicbp5gWAf15Gan/PQeGdxyGkOlZHP/uaZ6WA8\n" \
     "SMx+yk13EiSdRxta67nsHjcAHJyse6cF6s5K671B5TaYucv9bTyWaN8jKkKQDIZ0\n" \
     "Z8h/pZq4UmEUEz9l6YKHy9v6Dlb2honzhT+Xhq+w3Brvaw2VFn3EK6BlspkENnWA\n" \
     "a6xK8xuQSXgvopZPKiAlKQTGdMDQMc2PMTiVFrqoM7hD8bEfwzB/onkxEz0tNvjj\n" \
     "/PIzark5McWvxI0NHWQWM6r6hCm21AvA2H3DkwIDAQABo4IBfTCCAXkwEgYDVR0T\n" \
     "AQH/BAgwBgEB/wIBADAOBgNVHQ8BAf8EBAMCAYYwfwYIKwYBBQUHAQEEczBxMDIG\n" \
     "CCsGAQUFBzABhiZodHRwOi8vaXNyZy50cnVzdGlkLm9jc3AuaWRlbnRydXN0LmNv\n" \
     "bTA7BggrBgEFBQcwAoYvaHR0cDovL2FwcHMuaWRlbnRydXN0LmNvbS9yb290cy9k\n" \
     "c3Ryb290Y2F4My5wN2MwHwYDVR0jBBgwFoAUxKexpHsscfrb4UuQdf/EFWCFiRAw\n" \
     "VAYDVR0gBE0wSzAIBgZngQwBAgEwPwYLKwYBBAGC3xMBAQEwMDAuBggrBgEFBQcC\n" \
     "ARYiaHR0cDovL2Nwcy5yb290LXgxLmxldHNlbmNyeXB0Lm9yZzA8BgNVHR8ENTAz\n" \
     "MDGgL6AthitodHRwOi8vY3JsLmlkZW50cnVzdC5jb20vRFNUUk9PVENBWDNDUkwu\n" \
     "Y3JsMB0GA1UdDgQWBBSoSmpjBH3duubRObemRWXv86jsoTANBgkqhkiG9w0BAQsF\n" \
     "AAOCAQEA3TPXEfNjWDjdGBX7CVW+dla5cEilaUcne8IkCJLxWh9KEik3JHRRHGJo\n" \
     "uM2VcGfl96S8TihRzZvoroed6ti6WqEBmtzw3Wodatg+VyOeph4EYpr/1wXKtx8/\n" \
     "wApIvJSwtmVi4MFU5aMqrSDE6ea73Mj2tcMyo5jMd6jmeWUHK8so/joWUoHOUgwu\n" \
     "X4Po1QYz+3dszkDqMp4fklxBwXRsW10KXzPMTZ+sOPAveyxindmjkW8lGy+QsRlG\n" \
     "PfZ+G6Z6h7mjem0Y+iWlkYcV4PIWL1iwBi8saCbGS5jN2p8M+X+Q7UNKEkROb3N6\n" \
     "KOqkqm57TH2H3eDJAkSnh6/DNFu0Qg==\n" \
    "-----END CERTIFICATE-----";
  WiFiClientSecure net;
  MQTTClient client;

 

  void setup() {
  M5.begin();
  startupLogo();
  Serial.begin(115200);
  pinMode(pin, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  M5.Lcd.setTextSize(2);
  screen1(); // default 
  
  // for wifi
  WiFi.mode(WIFI_AP_STA);
  WiFi.disconnect();
  delay(100);

  configTime(-5 * 3600, 0, "pool.ntp.org", "time.nist.gov");
  net.setCACert(local_root_ca);
  client.begin(mqtt_server, port,net);
  client.onMessage(messageReceived);  
  }
  
  void loop()
  {
      if (screen1_show==true)
      {
         dashboard_1();  
      }  

      if ( mqtt == true)
        {
           if (!client.connected())
            {
              //reconnect();
              mqtt_connect();
            }
         
        }
      if(screen2_show==true)
      {
        dashboard_2();
      }

      if(screen_wifi==true)
      {
        dashboard_3();
      } 
    
     }

   
