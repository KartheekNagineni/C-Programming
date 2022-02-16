#include <stdio.h>
int main(){
   int num1,num2,quot,rem;
   printf("Enter Dividend:");
   scanf("%d",&num1);
   printf("Enter Divisor:");
   scanf("%d",&num2);
   quot=num1/num2;
   rem=num1%num2;
   printf("Quotient:%d\n",quot);
   printf("Remainder:%d",rem);
   return 0;
}