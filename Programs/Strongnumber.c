#include <stdio.h>
int main()
{
  int Number,Temp,Reminder,Sum=0,i; 
  long Factorial;
  printf("Please Enter a Number to Check for Strong Number:");
  scanf("%d",&Number);
  Temp=Number;
  while(Temp>0)
   {
     Factorial=1,i=1; 
     Reminder=Temp%10;
     while(i<=Reminder)
     {
     	Factorial=Factorial*i;
     	i++;
     }
     printf("Factorial of %d=%d\n",Reminder,Factorial);
     Sum=Sum+Factorial;
     Temp=Temp/10;
   }
  printf("Sum of the Factorials of a Given Number %d is=%d\n",Number,Sum);
 
  if (Number==Sum)
      printf("%d is a Strong Number.\n",Number);
  else
      printf("%d is not a Strong Number.\n",Number);
 
  return 0;
}
