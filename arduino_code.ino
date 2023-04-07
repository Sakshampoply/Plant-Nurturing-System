const int AirValue = 416;
const int WaterValue = 225;
int soilMoistureValue = 0;
int soilmoisturepercent=0;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  soilMoistureValue = analogRead(A0);
  soilmoisturepercent = map(soilMoistureValue, 1023, 0, 0, 100);
  Serial.println(soilMoistureValue);
  delay(100);
  if(soilmoisturepercent < 10){
    Serial.println("Nearly dry, Pump turning on");
    digitalWrite(13,HIGH);
  }
  else if(soilmoisturepercent >85){
    Serial.println("Nearly wet, Pump turning off");
    digitalWrite(13,LOW);
  }
  delay(4000);
}
