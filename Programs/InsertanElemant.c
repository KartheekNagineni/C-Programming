#include <stdio.h>
int main()
{
  int Array[10],position,i,Number,Value;
  printf("Please Enter Number of elements in an array:");
  scanf("%d",&Number);
  printf("Please Enter %d elements of an Array:",Number);
  for (i=0;i<Number;i++)
   {
     scanf("%d",&Array[i]);
   }     
  printf("Please Enter the location of a Element you want to insert:");
  scanf("%d",&Position);
  printf("Please Enter the value of an Array Emenent to insert:");
  scanf("%d",&Value);
  for (i=Number-1;i>=Position-1;i--)
   {
	     Array[i+1]=Array[i];
   }
  Array[Position-1]=Value;
 printf("Final Array after Inserting an  Elemnt is:\n");
 for (i=0;i<=Number;i++)
  {
 	printf("%d\t",Array[i]);
  }     
 return 0;
}
