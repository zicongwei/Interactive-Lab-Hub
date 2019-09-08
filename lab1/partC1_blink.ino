delay_val = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH); 
  delay(delay_val);
  digitalWrite(9, LOW);
  delay(delay_val);
  if (delay_val > 100) {
    delay_val -= 50;
  }
}
