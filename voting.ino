#include<LiquidCrystal.h>
#include<EEPROM.h>
LiquidCrystal evm(13, 12, 11, 10, 9, 8);
int a = 0, b = 0, c = 0, flag = 1, ad1 = 0, ad2 = 1, ad3 = 2, a1, b1, c1;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  evm.begin(16, 2);
  for (int i = 2; i <= 7; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
  pinMode(A0, INPUT_PULLUP);

  digitalWrite(13, 1);
  evm.print("Voting Day");
  delay(1500);
  evm.clear();


}

void loop() {


  evm.clear();
  if (digitalRead(2) == 0)
  {
    a++;
    delay(200);
    evm.print("vote receieved");
    evm.setCursor(0, 1);
    evm.print("for A");
    Serial.print(a);
    delay(400);
    evm.clear();
    EEPROM.update(ad1, a);
  }
  if (digitalRead(3) == 0)
  {
    b++;
    delay(200);
    evm.print("vote receieved");
    evm.setCursor(0, 1);
    evm.print("for B");
    Serial.println(b);
    delay(400);
    evm.clear();
    EEPROM.update(ad2, b);

  }
  if (digitalRead(4) == 0)
  {
    c++;
    delay(200);
    evm.print("vote receieved");
    evm.setCursor(0, 1);
    evm.print("for c");
    Serial.println(b);
    delay(400);
    evm.clear();
    EEPROM.write(ad3, c);
  }
  if (digitalRead(6) == 0)
  {
    evm.print("voting closed");
    delay(300);
    evm.clear();

  }
  if (digitalRead(5) == 0) {
    evm.print("voting closed");
    evm.clear();
    evm.print("A:");
    a1 = EEPROM.read(ad1);
    evm.print(a1, DEC);
    evm.setCursor(13, 0);
    evm.print("B:");
    b1 = EEPROM.read(ad2);
    evm.print(b1, DEC);
    evm.setCursor(0, 1);
    evm.print("C:");
    c1 = EEPROM.read(ad3);

    evm.print(c1, DEC);
    delay(2000);
    evm.clear();

    if ((a1 > b1) && (a1 > c1))evm.print("A wins");
    else if ((b1 > a1) && (b1 > c1))evm.print("B wins");
    else evm.print("C wins");
    delay(1000);
    evm.clear();
  }
  if (digitalRead(7) == 0)
  {
    a1 = EEPROM.read(ad1);
    b1 = EEPROM.read(ad2);
        c1 = EEPROM.read(ad3);
    evm.print("total");
    evm.setCursor(0, 1);
    evm.print(a1 + b1 + c1);
    delay(2000);
  }
  if (digitalRead(A0) == 0)
  {
    for (int i = 0; i < EEPROM.length(); i++)
    {
      EEPROM.write(i, 0);
    }
    digitalWrite(13, 1);
  }


}






