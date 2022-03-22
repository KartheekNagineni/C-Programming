#include <stdio.h>
int Sum_Of_Digits (int); 
int main()
{
  int Number,Sum,Root;
  printf("Please Enter a number:");
  scanf("%d",&Number);
  while(Number>=10)
  {
    Sum=Sum_Of_Digits(Number);
    if(Sum>=10)
    {
      Number=Sum;
    }
    else
    {
      printf("Generic Root of a Given Number=%d",Sum);
      return 0;
    }
  }	
}
int Sum_Of_Digits (int Number)
{
  int Reminder,Sum;
  for (Sum=0;Number>0;Number=Number/10)
  {
     Reminder=Number%10;
     Sum=Sum+Reminder;  
  }     
 return Sum;
}