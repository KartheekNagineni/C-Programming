#include <stdio.h>
#include <stdlib.h>
typedef struct tmp {
    int item;
    struct tmp* next;
} Node;
typedef struct
    {
    Node* head;
    Node* tail;
} List;
void initList(List* lp)
{
    lp->head=NULL;lp->tail=NULL;
}
Node* createNode(int item)
{
    Node* nNode;
    nNode=(Node*)malloc(sizeof(Node));
    nNode->item=item;
    nNode->next=NULL;
    return nNode;
}
void addAtTail(List* lp,int item)
{
    Node* node;
    node=createNode(item);
    if (lp->head==NULL){
        lp->head=node;lp->tail=node;
    }
    else {
        lp->tail->next=node;lp->tail=lp->tail->next;
    }
}
void addAtHead(List* lp,int item)
{
    Node* node;
    node=createNode(item);
    if (lp->head==NULL){
        lp->head=node;lp->tail=node;
    }
    else{
        node->next=lp->head;lp->head=node;
    }
}
void printList(List* lp)
{
    Node* node;
    if (lp->head==NULL){
        printf("Empty List");
        return;
    }
    node=lp->head;
    while (node!=NULL){
        printf("%01d",node->item);
        node=node->next;
        if (node!=NULL)
            printf(",");
    }
    printf("\n");
}
void printNthNode(List* lp,int n)
{
    Node* temp;
    int count=0;
    int nodeNum=0;
    int i=0;
    temp=lp->head;
    while (temp!=NULL){
        count++;
        temp=temp->next;
    }
    if (n>count){
        printf("You have entered wrong value of N\n");
        return;
    }
    nodeNum=count-n+1;
    count=0;
    temp=lp->head;
    while (temp!=NULL){
        count++;
        if (count==nodeNum)
            printf("Nth node in the list is : %d\n",temp->item);
        temp=temp->next;
    }
}
int main()
{
    List* lp;
    lp=(List*)malloc(sizeof(List));
    initList(lp);
    addAtTail(lp,6);
    addAtTail(lp,3);
    addAtTail(lp,5);
    addAtTail(lp,1);
    addAtTail(lp,9);
    printf("List:\n");
    printList(lp);
    printNthNode(lp,4);
    return 0;
}
