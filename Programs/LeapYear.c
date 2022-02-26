#include <stdio.h>
int main()
{
int y;
printf("Enter a year:");
scanf("%d",&y);
if(y%4==0)
{
if(y%100==0)
{
if(y%400==0)
{
printf("This is a leap year");
}
else
{
printf("This is not a leap year");
}
}
else
{
printf("This is a leap year");
}
}
else
{
printf("This is not a leap year");
}
}