/* Node MCU ESP8266 IOT wifi dev. Board wifi connectivity test 
  code by Ashraf Minhaj. Tutorial on blog https://www.ashrafminhajfb.blogspot.com
  for any quory mail at ashraf_minhaj@yahoo.com
  Consider subscribing my youTube channel www.youtube.com/c/fusebatti 
  */
  
  
#include <ESP8266WiFi.h>   //declare ESP8266 library

const char* ssid="Your wifi name";   //Put your wifi network name here
const char* password = "Password";   //Put your wifi password here


void setup() 
{

  Serial.begin(115200);      //initial Serial communication for serial monitor 
                             //Note:115200 depends on your board
  Serial.println();
  Serial.print("Wifi connecting to ");
  Serial.println( ssid );

  WiFi.begin(ssid,password);  

  Serial.println();
  Serial.print("Connecting");

  while( WiFi.status() != WL_CONNECTED )  //while loop runs repeatedly unless condition is false
  {                                       //it'll keep trying unless wifi is connected
      delay(500);
      Serial.print(".");        
  }

  Serial.println();

  Serial.println("Wifi Connected Success!");
  Serial.print("NodeMCU IP Address : ");   //Shows the IP (Internet Protocol) number of your NodeMcu
  Serial.println(WiFi.localIP() );         //Gets the IP address of your Board
  
}

void loop()              //In our case we don't need this but still it needs to be there.
{
  // put your main code here, to run repeatedly:

}
