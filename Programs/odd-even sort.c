#include <stdio.h>
#define MAX 5
void Exchange(int*num1,int*num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
void OddEvensort(int*arr)
{
    int flag=0;
    int i=0;
    while (!flag){
        flag=1;
        i=1;
        while (i<MAX){
            if (arr[i]>arr[i+1]){
                Exchange(&arr[i],&arr[i+1]);
                flag=0;
            }
            i=i+2;
        }
        i=0;
        while (i<MAX-1){
            if (arr[i]>arr[i+1]){
                Exchange(&arr[i],&arr[i+1]);
                flag=0;
            }
            i=i+2;
        }
    }
}
int main()
{
    int arr[MAX];
    int i=0;
    printf("Enter array elements:\n");
    while (i<MAX){
        scanf("%d",&arr[i]);
        i++;
    }
    OddEvensort(arr);
    printf("Sorted Array:\n");
    i=0;
    while (i<MAX){
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
    return 0;
}
