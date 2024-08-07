  unsigned long timeStart;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  timeStart = millis();
  delay(500);
  unsigned long timeEnd = millis();

  unsigned long durration = timeEnd- timeStart;

  Serial.print(" durration of ation: ");

  Serial.println(durration);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
   unsigned long timeEnd = millis();

  unsigned long durration = timeEnd- timeStart;

  Serial.print(" time since start: ");

  Serial.println(durration);

}
