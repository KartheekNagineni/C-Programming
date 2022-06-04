#include <stdio.h>
int main()
{
  int Array[50],i,Number;
  printf("Enter Number of elements in an array:");
  scanf("%d",&Number);
  printf("Enter %d elements of an Array:",Number);
  for (i=0;i<Number;i++)
   {
     scanf("%d",&Array[i]);
   }     
  printf("Elemenst in this Array are:");
  for (i=0;i<Number;i++)
  {
 	printf("%d\t",Array[i]);
  }     
  return 0;
}
