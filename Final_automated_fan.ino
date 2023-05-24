#include "DHT.h"
#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);
int fan1=A1;
int fan2=A2;
int fan3=A3;
int B=8;
int count = 0;
int i;

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT test!"));
  pinMode(fan1,OUTPUT);
  pinMode(fan2,OUTPUT);
  pinMode(fan3,OUTPUT);
  pinMode(B,INPUT);
  dht.begin();
}


void c()
{
 for(i=0;i<10;i++){
  if(digitalRead(B)>0){
  count++;
  Serial.print("count= ");
  Serial.println(count);
} delay(500);
}return count;
}

void loop() {
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

 
  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F(" Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("C "));
  Serial.print(f);
  Serial.print(F("F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("C "));
  Serial.print(hif);
  Serial.println(F("F"));

  c();

switch (count)
{
    case 0: analogWrite(fan2,0);
            analogWrite(fan1,0);
            break;
   case 1:
   if (t >= 27 && t<30.25)
  { analogWrite(fan1,1000);
    Serial.println("rpm=1000");
      }
  if (t >= 30.25 && t<30.5)
   {
    analogWrite(fan1,2000);
    Serial.println("rpm=2000");
  }
  if (t >= 30.5 && t<30.75)
   {
    analogWrite(fan1,3000);
    Serial.println("rpm=3000");
   
  }
  if (t >= 30.75 && t<31)
   {
    analogWrite(fan1,4000);
    Serial.println("rpm=4000");
   
  }
  if (t >= 31.25 && t<34)
   {  analogWrite(fan1,5000);
    Serial.println("rpm=5000");
   }
        break;
    case 3: 
   if (t >= 27 && t<30.25)
  { analogWrite(fan2,1000);
     analogWrite(fan1,1000);
    Serial.println("rpm1=1000");
    Serial.println("rpm2=1000");
      }
   if (t >= 30.25 && t<30.5)
   {
    analogWrite(fan2,2000);
    analogWrite(fan1,2000);
    Serial.println("rpm1=2000");
    Serial.println("rpm2=2000");
  }
  if (t >= 30.5 && t<30.75)
   {
    analogWrite(fan2,3000);
    analogWrite(fan1,3000);
    Serial.println("rpm1=3000");
    Serial.println("rpm2=3000");
   
  }
  if (t >= 30.75 && t<31)
   {
    analogWrite(fan2,4000);
    analogWrite(fan1,4000);
    Serial.println("rpm1=4000");
    Serial.println("rpm2=4000");
   
  }
  if (t >= 31.25 && t<34)
   {  analogWrite(fan2,5000);
   analogWrite(fan1,5000);
    Serial.println("rpm1=5000");
    Serial.println("rpm2=5000");
}
   break;
    
    case 5: 
   if (t >= 27 && t<30.25)
  { analogWrite(fan3,1000);
    analogWrite(fan2,1000);
    analogWrite(fan1,1000);
    Serial.println("rpm1=1000");
    Serial.println("rpm2=1000");
    Serial.println("rpm3=1000");
      }
   if (t >= 30.25 && t<30.5)
   {
    analogWrite(fan3,2000);
    analogWrite(fan2,2000);
    analogWrite(fan1,2000);
    Serial.println("rpm1=2000");
    Serial.println("rpm2=2000");
    Serial.println("rpm3=2000");
   }
 
 if (t >= 30.5 && t<30.75)
   {
    analogWrite(fan3,3000);
    analogWrite(fan2,3000);
    analogWrite(fan1,3000);
    Serial.println("rpm1=3000");
    Serial.println("rpm2=3000");
    Serial.println("rpm3=3000");
   
  }
  if (t >= 30.75 && t<31)
   {
    analogWrite(fan3,4000);
    analogWrite(fan2,4000);
    analogWrite(fan1,4000);
    Serial.println("rpm1=4000");
    Serial.println("rpm2=4000");
    Serial.println("rpm3=4000");
   
  }
  if (t >= 31.25 && t<34)
   {  
    analogWrite(fan3,5000);
    analogWrite(fan2,5000);
    analogWrite(fan1,5000);
    Serial.println("rpm1=5000");
    Serial.println("rpm2=5000");
    Serial.println("rpm3=5000");
}
   break;
    
    case 6: 
   if (t >= 27 && t<30.25)
  { analogWrite(fan3,1000);
    analogWrite(fan2,1000);
    analogWrite(fan1,1000);
    Serial.println("rpm1=1000");
    Serial.println("rpm2=1000");
    Serial.println("rpm3=1000");
      }
   if (t >= 30.25 && t<30.5)
   {
    analogWrite(fan3,2000);
    analogWrite(fan2,2000);
    analogWrite(fan1,2000);
    Serial.println("rpm1=2000");
    Serial.println("rpm2=2000");
    Serial.println("rpm3=2000");
   }
 
 if (t >= 30.5 && t<30.75)
   {
    analogWrite(fan3,3000);
    analogWrite(fan2,3000);
    analogWrite(fan1,3000);
    Serial.println("rpm1=3000");
    Serial.println("rpm2=3000");
    Serial.println("rpm3=3000");
   
  }
  if (t >= 30.75 && t<31)
   {
    analogWrite(fan3,4000);
    analogWrite(fan2,4000);
    analogWrite(fan1,4000);
    Serial.println("rpm1=4000");
    Serial.println("rpm2=4000");
    Serial.println("rpm3=4000");
   
  }
  if (t >= 31.25 && t<34)
   {  
    analogWrite(fan3,5000);
    analogWrite(fan2,5000);
    analogWrite(fan1,5000);
    Serial.println("rpm1=5000");
    Serial.println("rpm2=5000");
    Serial.println("rpm3=5000");
}
   break;
    } 
  
}
