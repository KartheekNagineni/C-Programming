#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main(){
    int i;
    float data[6];
    printf("Enter 6 elements:");
    for (i=0;i<6;++i)
        scanf("%f",&data[i]);
    printf("\nStandard Deviation=%.6f",calculateSD(data));
    return 0;
}
float calculateSD(float data[]){
    float sum=0.0,mean,SD=0.0;
    int i;
    for (i=0;i<6;++i){
        sum+=data[i];
    }
    mean=sum/6;
    for (i=0;i<6;++i) {
        SD+=pow(data[i]-mean,2);
    }
    return sqrt(SD/6);
}
