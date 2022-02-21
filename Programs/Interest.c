#include<stdio.h>
int main(){
   int amount,rate,time,si;
   printf("Enter the Amount:");
   scanf("%d",&amount);
   printf("Enter the Rate of Interest:");
   scanf("%d",&rate);
   printf("Enter the Period of Time:");
   scanf("%d",&time);
   si=(amount*rate*time)/100;
   printf("Interest:%d",si);
   return(0);
}