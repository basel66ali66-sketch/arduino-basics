void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  int brightness = map(value, 0, 1023, 0, 255);
  analogWrite(9, brightness);
  Serial.println(brightness);
  delay(50);
}
