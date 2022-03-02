#include <stdio.h>
int main()
{
  int month;
  printf("Enter the Month Number From 1 to 12:");
  scanf("%d",&month);
  if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
  {
  	printf("31 Days in the Entered Month");  	
  }
  else if(month==4||month==6||month==9||month==11)
  {
  	printf("30 Days in the Entered Month");  	
  }  
  else if(month==2)
  {
  	printf("Either 28 or 29 Days in this Month");  	
  } 
  else
    printf("Please enter Valid Number between 1 to 12");
  return 0;
}