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



void loop()
{
	
  
  digitalWrite(n1,1);
  digitalWrite(c,1);
  
  
  
  
  
}
  
  
