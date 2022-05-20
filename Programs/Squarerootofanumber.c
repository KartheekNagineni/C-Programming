#include<stdio.h>
#include<math.h>
int main()
{
  	double number,result;
 	printf("Enter any Number:");
  	scanf("%lf",&number);
  	result=sqrt(number);
   	printf("Square Root a given number %.2lf=%.2lf",number,result);
  	return 0;
}
