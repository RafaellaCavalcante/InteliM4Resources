// C++ code
//
int red = 13;

void setup()
{
  pinMode(red,OUTPUT);
}

void loop()
{
  digitalWrite(red,HIGH);
  delay(500);
  digitalWrite(red,LOW);
  delay(500);
}