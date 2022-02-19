#include<stdio.h>
int main()
{
  	float Unit_Price, Sales_Amount, Amount;
   	printf("Enter the Product Cost:");
  	scanf("%f",&Unit_Price);
 	printf("Enter the Sale Price:");
  	scanf("%f",&Sales_Amount);
  	if (Sales_Amount>Unit_Price)
  	{
  		Amount=Sales_Amount-Unit_Price;
  		printf("Profit Amount=%.4f",Amount);
  	}
  	else if(Unit_Price>Sales_Amount)
    {
    	Amount=Unit_Price-Sales_Amount;
  		printf("Loss Amount=%.4f",Amount);
	}
  	else
    	printf("No Profit No Loss");
  return 0;
}