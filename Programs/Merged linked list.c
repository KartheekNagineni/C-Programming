#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct Node
{
	int data;
	struct Node* next;
};
void MoveNode(struct Node** destRef,struct Node** sourceRef);
struct Node* SortedMerge(struct Node* a,struct Node* b)
{
	struct Node dummy;
	struct Node* tail=&dummy;
	dummy.next=NULL;
	while (1)
	{
		if (a==NULL)
		{
			tail->next=b;
			break;
		}
		else if (b==NULL)
		{
			tail->next=a;
			break;
		}
		if (a->data <=b->data)
			MoveNode(&(tail->next),&a);
		else
			MoveNode(&(tail->next),&b);
		tail=tail->next;
	}
	return(dummy.next);
}
void MoveNode(struct Node** destRef,struct Node** sourceRef)
{
	struct Node* newNode=*sourceRef;assert(newNode!=NULL);*sourceRef=newNode->next;
	newNode->next=*destRef;*destRef=newNode;
}
void push(struct Node** head_ref,int new_data)
{
	struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=(*head_ref);(*head_ref)=new_node;
}
void printList(struct Node *node)
{
	while (node!=NULL)
	{
		printf("%d ", node->data);
		node=node->next;
	}
}
int main()
{
	struct Node*res=NULL;
	struct Node*a=NULL;
	struct Node*b=NULL;
	push(&a,66);
	push(&a,30);
	push(&a,25);
	push(&b,5);
	push(&b,99);
	res=SortedMerge(a,b);
	printf("Merged Linked List is:\n");
	printList(res);
	return 0;
}
