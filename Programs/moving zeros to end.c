#include <stdio.h>
void pushZerosToEnd(int arr[],int n)
{
    int count={0};  
    for (int i=0;i<n;i++)
        if (arr[i]!=0)
            arr[count++]=arr[i]; 
    while (count<n)
        arr[count++]=0;
}
int main()
{
    int arr[]={6,0,2,4,0,1,5,4,0,3,8,0,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    pushZerosToEnd(arr,n);
    printf("%s","Array after moving all zeros to end of array:");
    for (int i=0;i<n;i++)
      printf("%d ", arr[i]);
    return 0;
}
