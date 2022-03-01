#include <stdio.h>
float parallelogramArea(float pgramBase,float pgramHeight)
{
    return pgramBase*pgramHeight;
}
int main()
{
    float pgramBase,pgramHeight,pgramArea;
    printf("Enter Base:");
    scanf("%f",&pgramBase);
    printf("Enter Height:");
    scanf("%f",&pgramHeight);
    pgramArea=parallelogramArea(pgramBase,pgramHeight);
    printf("The Area Of Parallelogram:%.2f\n",pgramArea); 
    return 0;
}