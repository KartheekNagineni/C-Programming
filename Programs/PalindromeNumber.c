#include <stdio.h>
int main()
{
   int Number,Temp,Reminder,Rev=0;
   printf("Enter any value:");
   scanf("%d",&Number);
   Temp=Number;
   while (Temp>0)
   {
      Reminder=Temp%10;
      Rev=Rev*10+Reminder;
       Temp=Temp/10;
   }
   printf("Rev of entered=%d\n",Rev);
   if ( Number==Rev)
      printf("%d is a Palindrome\n",Number);
   else
      printf("%d is not a Palindrome\n",Number);
   return 0;
}
