const int pinNo1 = 8;
const int pinNo2 = 7;
const int pinNo3 = 4;

void setup()
{
  pinMode(pinNo1, OUTPUT);
  pinMode(pinNo2, OUTPUT);
  pinMode(pinNo3, OUTPUT);
}

void loop()
{
  setColor(255,0,0);
  delay(1000);
  setColor(0, 255, 0);
  delay(1000);
  setColor(0,0, 255);
  delay(1000);
}

void setColor(int a, int b, int c){
	analogWrite(pinNo1,a);
	analogWrite(pinNo2,b);
  	analogWrite(pinNo3,c);
}