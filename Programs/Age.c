#include <stdio.h>
int main()
{
    int currentYear=2022;
    int birthYear,age;
    printf("Enter your birth year:");
    scanf("%d",&birthYear);
    age=currentYear-birthYear;
    printf("You are %d years old",age);
}