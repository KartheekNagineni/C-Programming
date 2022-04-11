#include<stdio.h>
int main()
{
    int i,j,rows,columns;
    printf("Enter the Number of rows:");
    scanf("%d",&rows);
    printf("Enter the Number of Columns:");
    scanf("%d",&columns);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
	{
           printf("*");
        }
        printf("\n");
    }
    return 0;
}