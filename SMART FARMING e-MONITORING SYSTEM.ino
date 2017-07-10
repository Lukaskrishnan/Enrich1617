//SMART FARMING e-MONITORING SYSTEM



#define BLYNK_PRINT Serial #include <WiFi.h>

#include <BlynkSimpleIntelEdisonWiFi.h> #include <Wire.h>

#include "rgb_lcd.h"



rgb_lcd lcd;



const int colorR = 255; const int colorG = 255; const int colorB = 0; WidgetLCD lcd1(V4);


// You should get Auth Token in the Blynk App.



 
// Go to the Project Settings (nut icon).

char auth[] = "6a0317672df64effabd3c42cb1a01f78";



//	Your WiFi credentials. 

//	Set password to "" for open networks. char ssid[] = "****"; 

char pass[] = "****"; 



const int pinTemp = A0; const int B = 3975;

int sensorPin = A1; // select the input pin for the potentiometer int sensorValue;

int relay = 6;

int pumpLed = 13; //Sunlight

const int pinLight = A2; const int pinLed = 7; int thresholdvalue = 80; float h = 60;

void setup()

{

Serial.begin(9600); lcd.begin(16, 2);

lcd.setRGB(colorR, colorG, colorB); Blynk.begin(auth, ssid, pass); pinMode(pumpLed, OUTPUT); delay(1000);

}



void loop()



 
{

Blynk.run();



int Humidity=h; //Moisture Readings

sensorValue = analogRead(sensorPin);

//int humidityReal = map(sensorValue, 1023, 0, 0, 100); delay(500);

int Moisture=sensorValue;



//Temperature Readings

int val = analogRead(pinTemp);

float resistance = (float)(1023-val)*10000/val;

float Temperature = 1/(log(resistance/10000)/B+1/298.15)-273.15;





//Sunlight Readings

int sensor = analogRead(pinLight);

int sunlight = map(sensor,1023, 0,0,100); int Sunlight=sunlight;

delay(500);



Serial.print(" \n >>>>>Temperature:");

Serial.print(Temperature, 1);

Serial.print("C");

Blynk.virtualWrite(0, Temperature);





Serial.print(" \n>>>>>> Humidity:");

Serial.print(Humidity, 1);



 

Serial.print("%"); Blynk.virtualWrite(1, Humidity); delay(500);







Serial.print("\n >>>>>Moisture:");

Serial.print(Moisture, 1);

Serial.print("%");

Blynk.virtualWrite(2, Moisture);



Serial.print(" \n >>>>Sunlight:");

Serial.print(Sunlight, 1);

Blynk.virtualWrite(3, Sunlight);





if (Moisture <90)

{

digitalWrite(relay, HIGH); digitalWrite(pumpLed, HIGH); Serial.print("\n Soil is Dry"); Serial.print("\t Water Pump will turn ON"); lcd1.print(0, 0, "Pump Turn ON"); lcd1.print(0, 1, "Soil is Dry");

}

else if( Moisture > 90 && Moisture < 200) { Serial.print("\n Soil is Humid"); digitalWrite(relay,HIGH); digitalWrite(pumpLed,LOW);

}



 
else{

digitalWrite(relay, LOW); digitalWrite(pumpLed, LOW); Serial.print("\n Soli is Wet"); Serial.print("\t Water Pump will turn off");

lcd1.print(0, 0, "Smart Farm e-Monitoring System "); delay(10000);

lcd1.print(0, 0, "Pump Turn OFF"); lcd1.print(0, 1, "Soil is Wet");

}



lcd.setCursor(0,0); lcd.print("Temperature = "); lcd.print(Temperature); lcd.setCursor(0,1); lcd.print("Humidity = "); lcd.print(Humidity); delay(1000); lcd.setCursor(0,0); lcd.print("Moisture = "); lcd.print(Moisture); lcd.setCursor(0,1); lcd.print("Sunlight = "); lcd.print(Sunlight); delay(1000);


}
