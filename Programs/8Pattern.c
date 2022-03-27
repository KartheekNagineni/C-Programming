#include <stdio.h>
int main()
{
	int rows;
	printf("Please Enter No Of Rows:");
	scanf("%d",&rows);
	printf("Printing 8 Pattern of Stars\n");
	for (int i=1;i<=rows*2-1;i++)
	{
		if (i==1||i==rows||i==rows*2-1)
		{
			for (int j=1;j<=rows;j++)
			{
				if (j==1||j==rows)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		else
		{
			for (int k=1;k<=rows;k++)
			{
				if (k==1||k==rows)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}