int a = 11,b=10,c=9,d=8  ,n1=2,n2=3, n3=4,n4 =5;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  
  pinMode(n1, OUTPUT);
  pinMode(n2, OUTPUT);
  pinMode(n3, OUTPUT);
  pinMode(n4, OUTPUT);
}

void allLed()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  
  digitalWrite(n1,1);
  digitalWrite(n2,1);
  digitalWrite(n3,1);
  digitalWrite(n4,1);
}

void ledOff()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}
void leda1()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}

void leda2()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}
void leda3()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
}
void leda4()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
}
void ledb1()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}

void ledb2()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}
void ledb3()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
}
void ledb4()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
}
void ledc1()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}

void ledc2()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}
void ledc3()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
}
void ledc4()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
}

void ledd1()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}

void ledd2()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}
void ledd3()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
}
void ledd4()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
}
void ledr1()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}
void ledr2()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
}
void ledr3()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
}
void ledr4()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
}
void leds1()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,1);
  digitalWrite(n2,1);
  digitalWrite(n3,1);
  digitalWrite(n4,1);
}
void leds2()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  
  digitalWrite(n1,1);
  digitalWrite(n2,1);
  digitalWrite(n3,1);
  digitalWrite(n4,1);
}
void leds3()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  
  digitalWrite(n1,1);
  digitalWrite(n2,1);
  digitalWrite(n3,1);
  digitalWrite(n4,1);
}
void leds4()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  
  digitalWrite(n1,1);
  digitalWrite(n2,1);
  digitalWrite(n3,1);
  digitalWrite(n4,1);
}



void loop()
{
  ledr1();
  delay(80);
  ledr2();
  delay(80);
  ledr3();
  delay(80);
  ledr4();
  delay(80);
  leds1();
  delay(80);
  leds2();
  delay(80);
  leds3();
  delay(80);
  leds4();
  delay(80);
}
  
  
