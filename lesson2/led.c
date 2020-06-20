int i=0;
void setup()
{
  for(i=1;i<=8;i++)
  {
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=1;i<=4;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(8-i+1, HIGH);
    delay(700); 
    digitalWrite(i, LOW);
    digitalWrite(8-i+1, LOW);
    delay(700); 
  }
  for(i=5;i<=8;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(8-i+1, HIGH);
    delay(700); 
    digitalWrite(i, LOW);
    digitalWrite(8-i+1, LOW);
    delay(700); 
  }
}