#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,i,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		if (n%i==0)
		sum=sum+i;
	}
	if (n==sum)
	printf("Entered number is a perfect number");
	else
	printf("Entered number is not a perfect number");
	getch();
	return 0;
	}