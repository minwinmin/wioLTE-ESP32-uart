#include <DHT.h>
const int PIN_DHT = 4;

String sendstr = "esp32";
DHT dht(PIN_DHT, DHT11); 

void setup(){
//  Serial.begin(115200);
  Serial.begin(57600);
  Serial.println("Start writeing.");
  dht.begin();
}

void loop(){

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.print("*C");
  
  for (int i = 0; i < sendstr.length(); i++){
    Serial.write(sendstr.charAt(i)); 
  }
  Serial.write(0);
  delay(2000);
}
