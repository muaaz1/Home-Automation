
void mqtt_connect()
{
  
  M5.Lcd.println("MQTT connecting");
  while (!client.connect("lulu", mqttuser, mqttPassword))
  {
    delay(1000);
  }
  M5.Lcd.println("connected!");
  client.subscribe("elo");
  client.publish("elo" , "DR HAIKAL HENSEM");
  M5.lcd.setCursor(230,210);
  M5.Lcd.setTextColor(0xffff);
  M5.Lcd.print("Back");
}

void messageReceived(String &topic, String &payload) {
  Serial.println("incoming: " + topic + " - " + payload);
}
  
  void setup_wifi()
  {
    screen_wifi = true;
    delay(20);
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid,pass);
    M5.Lcd.setCursor(0,0);

    while(WiFi.status() !=WL_CONNECTED)
    {
      delay(500);
      M5.Lcd.println("connecting to wifi..");
    }

    M5.Lcd.println("connected to wifi..");
    M5.Lcd.println(WiFi.localIP());
    mqtt = true;
    
  }

  void dashboard_3()
    {
      button_move_3();
      //button_select_3();
      M5.update();
    } 

    void button_move_3()
  {
    if(M5.BtnC.wasPressed())
    {
       k= k+1;
              if(k==1)
                {
                M5.Lcd.setCursor(230,210);
                M5.Lcd.setTextColor(0xfbe4);
                M5.Lcd.print("Back");
                delay(200);

               
              betul = true;
               M5.Lcd.clear();
            screen1_show=true;
            screen_wifi=false;
            screen1();
               
    
                }
    }
  }

  
