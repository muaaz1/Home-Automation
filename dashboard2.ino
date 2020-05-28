
    // For devices layout
  
  void screen2()
  {
   
    M5.Lcd.setCursor(15,43);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("ALL");
    
    M5.Lcd.setCursor(15,83);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("Lamp 1");
    
    M5.Lcd.setCursor(15,113);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("Lamp 2");
      
    M5.Lcd.setCursor(15,153);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("Lamp 3");
    
    M5.lcd.setCursor(15,183);
    M5.Lcd.setTextColor(0xffff);
    M5.Lcd.print("Back");
    M5.Lcd.drawRect(0,20,100,180,0x7bef);

    M5.Lcd.setCursor(215,13);
    M5.Lcd.print("STATUS");

     M5.Lcd.setCursor(35,215);
     M5.Lcd.setTextColor(0xfd79);
     M5.Lcd.print("Down");

     M5.Lcd.setCursor(115,215);
     M5.Lcd.print("Select");

     M5.Lcd.setCursor(235,215);
     M5.Lcd.setTextColor(0xfd79);
     M5.Lcd.print("Up");
     
     screen2_show = true;
  }
                      
    
  
  
  void dashboard_2()
    {
      button_move_2();
      button_select_2();
      M5.update();
    }



    void button_move_2()
  {   
  
    if(M5.BtnA.wasPressed())
    {
        q= q+1;
          if(q==1)
            {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");

             all   = true;   
             lamp1 = false;
             lamp2 = false;
             lamp3 = false;
             back =  false;

           }

          if(q==2)
            {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");
             lamp1 = true;
             all   = false;
             lamp2 = false;
             lamp3 = false;
             back =  false;

           }
         
         if(q==3)
            {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");
              lamp2 = true;
              all   = false;
              lamp1 = false;
              lamp3 = false;
              back =  false;
            }
      
          if(q==4)
            {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");
              lamp3 = true;
              back = false;
              lamp2 = false;
              lamp1 = false;
              all   = false;
  
              
            }

          if(q==5)
            {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Back");
              back = true;
              lamp2 = false;
              lamp1 = false;
              lamp3 = false;
              all   = false;

  
              q=0;
            }

     }
     
       
         if (M5.BtnC.wasPressed())
        {
          q = q-1;
          
           if(q==-1)
            {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Back");
              back = true;
              lamp2 = false;
              lamp1 = false;
              lamp3 = false;
              all   = false;
             
              q=4;
            }

           if(q==4)
            {
             M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");
 
              lamp3 = true;
              back = false;
              lamp2 = false;
              lamp1 = false;
              all   = false;
            }

           if(q==3)
            {
               M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");
    
              lamp2 = true;
              lamp1 = false;
              lamp3 = false;
              back  =  false;
              all   = false;
            }     
          
          if(q==2)
          {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");
             lamp1 = true;
             lamp2 = false;
             lamp3 = false;
             back  =  false; 
             all   = false;     
          }         
        
        if(q==1)
          {
              M5.Lcd.setCursor(15,43);
              M5.Lcd.setTextColor(0xfbe4);
              M5.Lcd.print("ALL");
              
              M5.Lcd.setCursor(15,83);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 1");
              
              M5.Lcd.setCursor(15,113);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 2");
                
              M5.Lcd.setCursor(15,153);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Lamp 3");
              
              M5.lcd.setCursor(15,183);
              M5.Lcd.setTextColor(0xffff);
              M5.Lcd.print("Back");
  
             all   = true;
             lamp2 = false;
             lamp3 = false;
             back  = false; 
             lamp1 = false;  
          }
        }
}


    void button_select_2()
    {
      if (M5.BtnB.wasPressed()&& all==true)
        {
          w=w+1;
          if(w==1)
          {
            M5.lcd.setCursor(209,43);
            M5.Lcd.setTextColor(0x51d);
            M5.Lcd.print("ON");
            
            M5.Lcd.setCursor(209,83); //lamp1
            M5.Lcd.setTextColor(0x51d);
            M5.Lcd.print("ON");
            
            M5.Lcd.setCursor(209,113); //lamp2
            M5.Lcd.setTextColor(0x51d);
            M5.Lcd.print("ON");
            
            M5.Lcd.setCursor(209,153); //lamp3
            M5.Lcd.setTextColor(0x51d);
            M5.Lcd.print("ON"); 
            
            M5.Lcd.setCursor(253,43);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("OFF");

            M5.Lcd.setCursor(253,83); //lamp1
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("OFF");
            
            M5.Lcd.setCursor(253,113); //lamp2
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("OFF");
            
            M5.Lcd.setCursor(253,153); //lamp3
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("OFF"); 

            digitalWrite(pin,HIGH);
            digitalWrite(pin2,HIGH);
            digitalWrite(pin3,HIGH);
            client.publish("elo", "ALL LED ON");
            
            
          }

          if(w==2)
          {
            M5.Lcd.setCursor(253,43);
            M5.Lcd.setTextColor(0xe8e4);
            M5.Lcd.print("OFF");

            M5.Lcd.setCursor(253,83); //lamp1
            M5.Lcd.setTextColor(0xe8e4);
            M5.Lcd.print("OFF");
            
            M5.Lcd.setCursor(253,113); //lamp2
            M5.Lcd.setTextColor(0xe8e4);
            M5.Lcd.print("OFF");
            
            M5.Lcd.setCursor(253,153); //lamp3
            M5.Lcd.setTextColor(0xe8e4);
            M5.Lcd.print("OFF"); 
            
            M5.Lcd.setCursor(209,43);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("ON");

             M5.Lcd.setCursor(209,83); //lamp1
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("ON");
            
            M5.Lcd.setCursor(209,113); //lamp2
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("ON");
            
            M5.Lcd.setCursor(209,153); //lamp3
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("ON"); 
            
            digitalWrite(pin,LOW);
            digitalWrite(pin2,LOW);
            digitalWrite(pin3,LOW);
            client.publish("elo", "ALL LED OFF");

            w=0;
          }

          M5.Lcd.setTextColor(0xffff);
        }
    
      if (M5.BtnB.wasPressed()&& lamp1==true)
        { 
          w=w+1;
          if(w==1)
          {
            M5.Lcd.setCursor(209,83);
            M5.Lcd.setTextColor(0x51d);
            M5.Lcd.print("ON");
            M5.Lcd.setCursor(253,83);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("OFF"); 
            digitalWrite(pin,HIGH);
            client.publish("elo", "LED 1 ON");
    
          
        }
    
          if(w==2)
          {
            M5.Lcd.setCursor(253,83);
            M5.Lcd.setTextColor(0xe8e4);
            M5.Lcd.print("OFF");
            M5.Lcd.setCursor(209,83);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("ON"); 
            digitalWrite(pin,LOW);
            client.publish("elo", "LED 1 OFF");
            
          w=0;
          } 
           
         M5.Lcd.setTextColor(0xffff); // after ubah color dlm loop, kena reset
       }
    
       if(M5.BtnB.wasPressed() && lamp2==true)
       {
         w=w+1;
          if(w==1)
          {
            M5.Lcd.setCursor(209,113);
            M5.Lcd.setTextColor(0x51d);
            M5.Lcd.print("ON");
            M5.Lcd.setCursor(253,113);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("OFF"); 
            digitalWrite(pin2,HIGH);
            client.publish("elo", "LED 2 ON");
    
          
        }
    
          if(w==2)
          {
            M5.Lcd.setCursor(253,113);
            M5.Lcd.setTextColor(0xe8e4);
            M5.Lcd.print("OFF");
            M5.Lcd.setCursor(209,113);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("ON"); 
            digitalWrite(pin2,LOW);
            client.publish("elo", "LED 2 OFF");
            w=0;
           
          } 
           M5.Lcd.setTextColor(0xffff); // after ubah color dlm loop, kena reset
            
       }
      if(M5.BtnB.wasPressed() && lamp3==true)
       {
         w=w+1;
          if(w==1)
          {
            M5.Lcd.setCursor(209,153);
            M5.Lcd.setTextColor(0x51d);
            M5.Lcd.print("ON");
            M5.Lcd.setCursor(253,153);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("OFF"); 
            digitalWrite(pin3,HIGH);
            client.publish("elo", "LED 3 ON");
    
          
        }
    
          if(w==2)
          {
            M5.Lcd.setCursor(253,153);
            M5.Lcd.setTextColor(0xe8e4);
            M5.Lcd.print("OFF");
            M5.Lcd.setCursor(209,153);
            M5.Lcd.setTextColor(0x0000);
            M5.Lcd.print("ON"); 
            digitalWrite(pin3,LOW);
            client.publish("elo", "LED 3 OFF");
            w=0;
           
          } 
           M5.Lcd.setTextColor(0xffff); // after ubah color dlm loop, kena reset
      
       }
    
       if(M5.BtnB.wasPressed() && back==true)
       {  
        
            M5.Lcd.clear();
            screen1_show=true;
            screen2_show=false;
            screen1(); // lepas clear, akan go back to screen1() iaituu home page
            
       }
      
    }
