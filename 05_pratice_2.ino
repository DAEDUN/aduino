#define PIN7 7
void setup() {
  pinMode(PIN7, OUTPUT);

}

void loop() {
  delay(1000);
  digitalWrite(PIN7,HIGH);
  delay(1000);
  int i;
  for(i=0;i<5;i++)
  {
      digitalWrite(PIN7,LOW);
      delay(100);
      digitalWrite(PIN7,HIGH);
      delay(100);
  }
  exit(0);

}
