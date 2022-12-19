

#include <Wire.h>
#include "Adafruit_MLX90614.h"


Adafruit_MLX90614 modIrTemp = Adafruit_MLX90614();

void setup() {
  pinMode(8,OUTPUT);        
  digitalWrite(8,LOW);      
  modIrTemp.begin();  
  Serial.begin(115200);
}

void loop() {

  Serial.print("Ambient = "); Serial.print(modIrTemp.readAmbientTempC()); 
  Serial.print("*C\tObject = "); Serial.println(modIrTemp.readObjectTempC());
   
  delay(1000); // can adjust this for faster/slower updates
}

