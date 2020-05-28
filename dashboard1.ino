
//for dashboard 1 
  void screen1()
  {  
   
    M5.Lcd.pushImage(10,10,320,240, (uint16_t*)wifu1);
    M5.Lcd.setCursor(30,80);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("Wi-FI");
    
    M5.Lcd.pushImage(120,10,320,240, (uint16_t*)door_active);
    M5.Lcd.setCursor(110,80);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("Devices");
    
    M5.Lcd.pushImage(250,10,320,240, (uint16_t*)off_);
    M5.Lcd.setCursor(260,80);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("OFF");

    
    M5.Lcd.drawLine(100,0,100,120,0xa254);
    M5.Lcd.drawLine(200,0,200,120,0xa254);
    M5.Lcd.drawLine(0,120,350,120,0xa254);

    M5.Lcd.pushImage(50,200,320,240,(uint16_t*)arrow_left);
    M5.Lcd.setCursor(30,210);
    //M5.Lcd.print("Left");

    M5.Lcd.setCursor(110,210);
    M5.Lcd.print("Select");

    M5.Lcd.pushImage(230,200,320,240,(uint16_t*)arrow_right);
    M5.Lcd.setCursor(230,210);
    //M5.Lcd.print("Right");


       
    screen1_show = true;
     
  }

  void dashboard_1()
    {
         button_move_1();
         button_select_1(); 
         M5.update(); 
    }

  void button_move_1()
    {   
      
        if(M5.BtnA.wasPressed())
        {
              x = x-1;
              
               if(x==-1)
                {
             M5.Lcd.setCursor(260,80);
             M5.Lcd.setTextColor(0xfbe4);
             M5.Lcd.print("OFF");
             M5.Lcd.setCursor(30,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("Wi-FI");
             M5.Lcd.setCursor(110,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("Devices");
                off = true;
               devices = false;
               dashboard =  false;
               x=2;
                }     
              
              if(x==2)
              {
            M5.Lcd.setCursor(110,80);
            M5.Lcd.setTextColor(0xfbe4);
            M5.Lcd.print("Devices");
            M5.Lcd.setCursor(30,80);
            M5.Lcd.setTextColor(0xffff);
            M5.Lcd.print("Wi-FI");          
            M5.Lcd.setCursor(260,80);
            M5.Lcd.setTextColor(0xffff);
            M5.Lcd.print("OFF");
          
                devices = true;
                dashboard = false;
                off = false;
              }         
            
            if(x==1)
              {
             M5.Lcd.setCursor(30,80);
             M5.Lcd.setTextColor(0xfbe4);
             M5.Lcd.print("Wi-FI");
             M5.Lcd.setCursor(260,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("OFF");
             M5.Lcd.setCursor(110,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("Devices");
          
                 dashboard = true;
                 devices = false;
                 off = false;      
              }
            }
           
             if (M5.BtnC.wasPressed())
             {
            x= x+1;
              if(x==1)
                {
               M5.Lcd.setCursor(30,80);
               M5.Lcd.setTextColor(0xfbe4);
               M5.Lcd.print("Wi-FI");
               M5.Lcd.setCursor(260,80);
               M5.Lcd.setTextColor(0xffff);
               M5.Lcd.print("OFF");
               M5.Lcd.setCursor(110,80);
               M5.Lcd.setTextColor(0xffff);
               M5.Lcd.print("Devices");
               

               dashboard = true;
               devices = false;
               off =  false;
    
                }
             
             if(x==2)
                {
             M5.Lcd.setCursor(110,80);
             M5.Lcd.setTextColor(0xfbe4);
             M5.Lcd.print("Devices");
             M5.Lcd.setCursor(30,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("Wi-FI");          
             M5.Lcd.setCursor(260,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("OFF");

              devices = true;
              dashboard = false;
              off =  false;
                }
          
             if(x==3)
                {
             M5.Lcd.setCursor(260,80);
             M5.Lcd.setTextColor(0xfbe4);
             M5.Lcd.print("OFF");
             M5.Lcd.setCursor(30,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("Wi-FI");
             M5.Lcd.setCursor(110,80);
             M5.Lcd.setTextColor(0xffff);
             M5.Lcd.print("Devices");
            

               off    = true;
               dashboard = false;
               devices =  false;
    
                x=0;
                }     
         }
            
    }

     void button_select_1()
    {
    
       if (M5.BtnB.wasPressed()&& dashboard==true)
       { 
         M5.Lcd.clear();
         screen1_show = false;
         screen_wifi = true;
         //wifi();
         setup_wifi();
       } 
    
       if(M5.BtnB.wasPressed() && off==true)
       {
        M5.Lcd.setCursor(90,140);
        M5.Lcd.setTextColor(0xe8e4);
        M5.Lcd.setTextSize(1.8);
        M5.Lcd.print("Screen will be offline");
        delay(1000);
        M5.powerOFF();
     
       }
    
       if(M5.BtnB.wasPressed() && devices==true)
       {  
        
        M5.Lcd.clear();
        screen1_show=false;
        screen2_show=true;
        screen2();
       }
      
    }
