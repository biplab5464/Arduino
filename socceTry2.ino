#include<LiquidCrystal.h>
int sp1 = 0, sp2 = 0, ctr = 0, ctr1 = 0, ctr2 = 0, pre1, pre2, flag = 1, ctr3 = 0, b , bSts, k = 7 ;
LiquidCrystal game(2, 3, 4, 5, 6, 7);

void setup()
{
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);

  game.begin(16, 2);
  game.setCursor(2, 1);
  game.print("srx games");
  delay(900);
  game.setCursor(3, 0);
  game.print("starting game");
  delay(900);
  game.clear();
  game.print("loading");
  delay(1000);
  game.clear();



}


void loop()
{
  if (flag == 0)
  {
    game.clear();
    game.setCursor(0, 0);
    game.print("GAME OVER");
    game.setCursor(0, 1);
    game.print("P1:");
    game.setCursor(4, 1);
    game.print(sp1);
    game.setCursor(11, 1);
    game.print("P2:");
    game.print(sp2);
    delay(500);
     game.clear();
    if(sp1>sp2) game.print("p1 wins");
    else if(sp2>sp1) game.print("p2 wins");
    else game.print("tie");
    delay(2000);
    game.clear();
    exit(0);
    //delay(7000);
   // flag=1;
    
  }
  else
  {
    int a = digitalRead(9), b = digitalRead(10);//SWITCH SELECTION
    int y = random(0, 2);
    //GAME OVER LOGIC
    if (k == 1)
    {
      if (y == ctr)   sp1++;
      else            flag = 0;
    }
    if (k == 14)
    {
      if (y == ctr3)   sp2++;
      else            flag = 0;
    }

    {
    


      //PLAYER1 POSTION DEPENDANT ON SWITCH OUTPUT
      if (a == 0)
      {
        ctr1++;
        delay(100);
        ctr = ctr1 % 2;

      }

      //PLAYER 2 POSITION DEPENDANT ON SWITCH OUTPUT
      if (b == 0)
      {
        ctr2++;
        delay(100);
        ctr3 = ctr2 % 2;
      }

      //PLAYER  1 CURSOR
      game.setCursor(0, ctr);
      game.print(")");
      if (ctr == 1)
      {
        pre1 = 0;
      }
      else
      {
        pre1 = 1;
      }
      game.setCursor(0, pre1);
      game.print(" ");

      //PLAYER 2 POSTION
      game.setCursor(15, ctr3);
      game.print("(");
      if (ctr3 == 1)
      {
        pre2 = 0;
      }
      else
      {
        pre2 = 1;
      }
      game.setCursor(15, pre2);
      game.print(" ");

      //BALL POSITION
      if (k == 14)       bSts = 0;
      if (k == 1)        bSts = 1;

      if (bSts == 1)
      {
        k++;
        game.setCursor(k, y);
        game.print("o");
        delay(400);
        game.setCursor(k , 0 );
        game.print(" ");
        game.setCursor(k , 1);
        game.print(" ");
      }
      else
      {
        k--;
        game.setCursor(k, y);
        game.print("o");
        delay(400);
        game.setCursor(k , 0);
        game.print(" ");
        game.setCursor(k , 1);
        game.print(" ");
      }



    }
  }
}














































