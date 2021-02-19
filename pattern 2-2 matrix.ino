//led in square
void loop()
{
  int i;
  for(i=0;i<3;i++)
  {
    allLedOn();
    delay(200);
    allOff();
    delay(100);
  }
  for(i=0;i<5;i++)
  {
    delay(500);
    ledA();
    delay(500);
    led2();
    delay(500);
    ledB();
    delay(500);
    led1();
    
  }
 
  for(i=0;i<2;i++)
  {
    allLedOn();
    delay(200);
    allOff();
    delay(100); 
  }
  delay(2000);
}

//led one by one
void loop()
{
  int i;
  for(i=0;i<3;i++)
  {
    allLedOn();
    delay(200);
    allOff();
    delay(100);
  }
  ledA1();
  delay(5);
  ledA2();
  delay(500);
  ledB1();
  delay(500);
  ledB2();
  delay(500);
  ledB2();
  delay(500);
  ledB1();
  delay(500);
  ledB2();
  ledA2();
  delay(500);
  ledA1();
  delay(500);
  for(i=0;i<2;i++)
  {
    allLedOn();
    delay(200);
    allOff();
    delay(100); 
  }
  delay(2000);
}