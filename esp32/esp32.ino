String sendstr = "esp32";

void setup(){
//  Serial.begin(115200);
  Serial.begin(57600);
  Serial.println("Start writeing.");
}

void loop(){
  for (int i = 0; i < sendstr.length(); i++){
    Serial.write(sendstr.charAt(i)); 
  }
  Serial.write(0);
  delay(2000);
}
