#include<stdio.h>
int main()
{
	int n,f=1,i=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(i<=n)
    {
		    f=f*i;
        i=i+1;
    }
    printf("Factorial of a given Number:%d",f);
    return 0;
}