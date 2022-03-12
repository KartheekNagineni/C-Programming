#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int Diceroll(int DiceSides)
{
  srand(time(NULL));
  int n=(DiceSides-1)+1; 
  int DiceRoll =1+rand()%n;
  return DiceRoll;
}
int main(int argc,char argv)
{
  int DiceSides;
  printf("Enter the number of sides dice have:");
  scanf("%d",&DiceSides);
  int Dice=Diceroll(DiceSides);
  printf("you rolled:%d \n",Dice);
  return 0;
}