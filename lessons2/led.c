int i=0,j=0;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  } 
}

void loop()
{
  for(j=-1;j<7;j++)
  {
    for(i=7;i>j;i--)
    {
      digitalWrite(i, HIGH);
      delay(500);//Wait for 500 millsecond(s)
      digitalWrite(i, LOW);
      delay(500);//Wait for 500 millsecond(s)
      digitalWrite(abs(i-7), HIGH);
      delay(500);//Wait for 500 millsecond(s)
      digitalWrite(abs(i-7), LOW);
      delay(500);//Wait for 500 millsecond(s)
     }
  }
}
    
    