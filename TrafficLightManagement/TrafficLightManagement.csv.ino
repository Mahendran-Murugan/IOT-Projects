int green = 1;
int yellow = 2;
int red = 3;
void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 10; i++){
    digitalWrite(green, HIGH);
    delay(100);
    digitalWrite(green, LOW);
    delay(100);
  }
  digitalWrite(green, HIGH);
  delay(15000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(5000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(15000);
  digitalWrite(red, LOW);
}