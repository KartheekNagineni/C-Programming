#include<stdio.h>
int main()
{
    int i,j,rows,columns;
    i=1;
    printf("Enter the Number of Rows:");
    scanf("%d",&rows);
    printf("Enter the Number of Columns:");
    scanf("%d",&columns);
    while(i<=rows)
    {
    	j=1;
    	while(j<=columns)
		{
			if(i%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			j++;       	
        }
        i++;
        printf("\n");
    }
    return 0;
}