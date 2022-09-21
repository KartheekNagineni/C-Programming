#include <stdio.h>
#include <stdlib.h>
int main(){
 int *arr,i,n1,n2;
 printf("Enter size:");
 scanf("%d",&n1);
 arr=(int*) malloc(n1*sizeof(int));
 printf("Addresses of previously allocated memory:");
 for(i=0;i<n1;++i)
   printf("%u\n",arr+i);
   printf("\nEnter the new size:");
   scanf("%d",&n2);
   arr=realloc(arr,n2*sizeof(int));
   printf("Addresses of newly allocated memory:");
   for(i=0;i<n2;++i)
     printf("%u\n",arr+i);
     free(arr);
     return 0;
}
