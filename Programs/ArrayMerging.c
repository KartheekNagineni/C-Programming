#include<stdio.h>
int main()
{
 	int aSize,bSize,mSize,i,j;
	int a[10],b[10],Merged[20];
 	printf("Enter First Array Size:");
 	scanf("%d",&aSize);
  	printf("Enter First Array Elements:");
 	for(i=0;i<aSize;i++)
  	{
      	scanf("%d",&a[i]);
  	}
  	printf("Enter Second Array Size:");
 	scanf("%d",&bSize);
   	printf("Enter Second Array Elements:");
 	for(i=0;i<bSize;i++)
  	{
      	scanf("%d",&b[i]);
  	}
  	for(i=0;i<aSize;i++)
  	{
      	Merged[i]=a[i];
  	}
  	mSize=aSize+bSize;
  	for(i=0,j=aSize;j<mSize&&i<bSize;i++,j++)
  	{
  		Merged[j]=b[i];
  	}
 	printf("Array Elements After Merging:",mSize); 
 	for(i=0;i<mSize;i++)
  	{
    	printf("%d\t",Merged[i]);
  	}
  	return 0;
}