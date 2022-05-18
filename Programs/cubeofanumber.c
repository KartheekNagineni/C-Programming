#include<stdio.h>
int main()
{
  int number,cube;
  printf("Enter any integer Value:");
  scanf("%d",&number);
  cube=number*number*number;
  printf("Cube of a given number %d is=%d",number,cube);
  return 0;
}
