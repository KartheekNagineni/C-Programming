#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    strcat(a,b);
    printf("String after adding is:%s\n",a);
    return 0;
}