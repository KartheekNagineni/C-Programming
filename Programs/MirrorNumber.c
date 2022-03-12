#include <stdio.h>
#include <math.h>
  int main(){
    int num,reverse1,reverse2,remainder1,remainder2,square,sqroot;
    reverse1=0;
    reverse2=0;
    printf("Enter a number:");
    scanf("%d",&num);
    square=pow(num,2);
    while (square!=0){
      remainder1=square%10;
      reverse1=reverse1*10+remainder1;
      square=square/10;
    }
    sqroot=sqrt(reverse1);
    while (sqroot!=0){
      remainder2=sqroot%10;
      reverse2=reverse2*10+remainder2;
      sqroot=sqroot/10;
    }
    if (reverse2==num)
      printf("It is a mirror number");
    else
      printf("It is not a mirror number");
    return 0;
  }