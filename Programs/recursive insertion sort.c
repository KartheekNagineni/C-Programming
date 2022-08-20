#include <stdio.h>
void rec_insertion(int arr[],int n)
{
    if (n<=1)
        return;
        rec_insertion(arr,n-1);
    int last=arr[n-1];
    int j=n-2;
    while (j>=0&&last<arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
    printf("\nAfter performing Insertion sort:\n");
    for (int i=0;i<n;i++)
        printf("%d " , arr[i]);
}
int main()
{
    int arr[]={36,18,12,24,6,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    rec_insertion(arr,n);
    return 0;
}
