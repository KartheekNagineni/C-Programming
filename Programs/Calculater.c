#include <stdio.h>
int main()
{
	char Operator;
	float num1,num2,result=0;
	printf("Enter an Operator:");
  	scanf("%c",&Operator);
	printf("Enter the Values for two Numbers:");
  	scanf("%f%f",&num1,&num2);
  	switch(Operator)
  	{
  		case '+':
  			result=num1+num2;
  			break;
  		case '-':
  			result=num1-num2;
  			break;  			
  		case '*':
  			result=num1*num2;
  			break;
  		case '/':
  			result=num1/num2;
  			break;
		default:
			printf("\n You have enetered an Invalid Operator");				    			
	}
	printf("The result of %.2f%c%.2f=%.2f",num1,Operator,num2,result);
  	return 0;
}