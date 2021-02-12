#include<LiquidCrystal.h>


int sp1 = 0, ctr = 0, ctr1 = 0, pre1, flag = 1,score,noh,p;

LiquidCrystal game(2, 3, 4, 5, 6, 7);


void setup() 
{
  
  game.begin(16, 2);
  game.setCursor(2, 1);
  game.print("srx games");
  delay(900);
  game.print("flapy bird");
  delay(900);
  game.setCursor(3, 0);
  game.print("starting game");
  delay(900);
  game.clear();
  game.print("loading");
  delay(1000);
  game.clear();
  

}

//FUNTION FOR GAME OVER
void gameOver()
{
  game.clear();
    game.setCursor(0, 0);
    game.print("GAME OVER");
    game.setCursor(0, 1);
    game.print("score=");
    gmae.print(score);
    exit(0);
}


void loop() 
{
  if (flag == 0)
    gameOver();
 
  else
  
  {   
      //PLAYER POSTION DEPENDANT ON SWITCH OUTPUT
      if (digitalRead(9) == 0)
      {
        ctr1++;
        delay(100);
        ctr = ctr1 % 2;

      }

      // PLAYER CURSOR 
      game.setCursor(0, ctr);
      game.print("O");
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

      //  THE HASTAGS  BOMBARD LOGIC
      p = random(0,1);  noh =random(1,5);
       
      
      
  }
  
}


 
