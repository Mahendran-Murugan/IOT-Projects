int pinNo1 = 8;
int pinNo2 = 7;
void setup()
{
  pinMode(pinNo1, OUTPUT);
}

void loop()
{
  digitalWrite(pinNo1, HIGH);
  delay(1000); 
  digitalWrite(pinNo1, LOW);
  delay(1000);
  digitalWrite(pinNo2, HIGH);
  delay(1000);
  digitalWrite(pinNo2, LOW);
  delay(1000);
}