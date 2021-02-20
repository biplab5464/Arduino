void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void allLedOn()
{
  digitalWrite(8, 0); //--B
  digitalWrite(9, 0); //--A
  digitalWrite(3, 1); //--1
  digitalWrite(4, 1); //--2
}
void ledA1()
{
  digitalWrite(9, 0); //--A
  digitalWrite(8, 1); //--B
  digitalWrite(3, 1); //--1
  digitalWrite(4, 0); //--2
}
void ledB1()
{
  digitalWrite(9, 1); //--A
  digitalWrite(8, 0); //--B
  digitalWrite(3, 1); //--1
  digitalWrite(4, 0); //--2
}
void ledA2()
{
  digitalWrite(9, 0); //--A
  digitalWrite(8, 1); //--B
  digitalWrite(3, 0); //--1
  digitalWrite(4, 1); //--2
}
void ledB2()
{
  digitalWrite(9, 1); //--A
  digitalWrite(8, 0); //--B
  digitalWrite(3, 0); //--1
  digitalWrite(4, 1); //--2 
}

void ledA()
{
  digitalWrite(8, 1); //--B
  digitalWrite(9, 0); //--A
  digitalWrite(3, 1); //--1
  digitalWrite(4, 1); //--2
}
void ledB()
{
  digitalWrite(8, 0); //--B
  digitalWrite(9, 1); //--A
  digitalWrite(3, 1); //--1
  digitalWrite(4, 1); //--2
}

void led1()
{
  digitalWrite(8, 0); //--B
  digitalWrite(9, 0); //--A
  digitalWrite(3, 1); //--1
  digitalWrite(4, 0); //--2
}
void led2()
{
  digitalWrite(8, 0); //--B
  digitalWrite(9, 0); //--A
  digitalWrite(3, 0); //--1
  digitalWrite(4, 1); //--2
}

  
void allOff()
{
  digitalWrite(9, 1); //--A
  digitalWrite(8, 1); //--B
  digitalWrite(3, 0); //--1
  digitalWrite(4, 0); //--2 
}

void loop()
{
  ledA2();
  delay(5);
  allOff();
  ledB1();
  delay(5);
  allOff();
  ledB2();
  delay(5);
  allOff();
   
}