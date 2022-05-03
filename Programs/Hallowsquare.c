#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter Hollow Square with Diagonals Rows:");
    scanf("%d",&rows);

    printf("Hollow Square Star Pattern With Diagonals\n");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(i==1||i==rows||i==j||j==1||j==rows||j==rows-i+1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }         
        }
        printf("\n");   
    }
    return 0;
}
