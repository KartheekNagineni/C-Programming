#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct bst
 {
 	int data;
 	struct bst*left;
 	struct bst*right;
 };
 struct bst*insert(struct bst*,int);
 void inorder(struct bst*);
 void preorder(struct bst*);
 int main ()
  {
  	struct bst *r=NULL;
  	  r=insert(r,10);
  	  r=insert(r,20);
  	  r=insert(r,30);
  	  r=insert(r,40);
  	  r=insert(r,50);
  	  r=insert(r,60);
  	  printf("\n display element in inorder : ");
  	  inorder(r);
  	  printf("\n display element in preorder : ");
  	  preorder(r);
  	  return 1;
   } 
   struct bst*insert(struct bst*q,int val)
    {
      struct bst*tmp;
      tmp=(struct bst*)malloc(sizeof(struct bst));
    	if(q==NULL)
    	 { 
    	 	 tmp->data=val;
    	 	 tmp->left=tmp->right=NULL;
    	 	 return tmp;
		 }
		 else
		  {
		  	 if(val<(tmp->data))
		  	   {
		  	   	  q->left=insert(q->left,val);
			   }
		  	 else
		  	  {
		  	  	 q->right=insert(q->right,val);
		      }
		  }
		 return q; 
	}
	 void inorder(struct bst*q)
	 {
	 	if(q==NULL)
	 	 {
	 	 	return;
	     }
	 	   inorder(q->left);
	 	   printf("%d",q->data);
		   inorder(q->right);	
	 }
	 void preorder(struct bst*q)
	 {
	 	if(q!=NULL)
	 	 {
		  printf("%d",q->data);
		  preorder(q->left);
		  preorder(q->right);
	     }
	 }
