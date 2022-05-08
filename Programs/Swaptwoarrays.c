#include<stdio.h>
int main()
{
 int Size,i,a[10],b[10],Temp[10];
 printf("Please Enter the Size of the Array:");
 scanf("%d",&Size);
 printf("Please Enter the First Array Elements:");
 for(i=0;i<Size;i++)
  {
      scanf("%d",&a[i]);
  }
 printf("Please Enter the Second Array Elements:");
 for(i=0;i<Size;i++)
  {
      scanf("%d",&b[i]);
  }
 for(i=0;i<Size;i++)
  {
    a[i]=a[i]+b[i];
    b[i]=a[i]-b[i]; 
    a[i]=a[i]-b[i];
  }
 printf("first Array Elements After Swapping:",Size); 
 for(i=0;i<Size;i++)
  {
      printf("%d \t",a[i]);
  }
 printf("\nsecond Array Elements After Swapping:",Size); 
 for(i=0;i<Size;i++)
  {
      printf("%d \t",b[i]);
  }
  return 0;
} 
