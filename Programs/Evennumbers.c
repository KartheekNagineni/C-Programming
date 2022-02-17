#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    printf("The even numbers from 1 to %d are:\n",n);
    for(i=0;i<=n;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}