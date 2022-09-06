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
    lp->head=NULL;
    lp->tail=NULL;
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
        lp->head=node;
        lp->tail=node;
    }
    else {
        lp->tail->next=node;
        lp->tail=lp->tail->next;
    }
}
void addAtHead(List* lp,int item)
{
    Node* node;
    node=createNode(item);
    if (lp->head==NULL){
        lp->head=node;
        lp->tail=node;
    }
    else {
        node->next=lp->head;
        lp->head=node;
    }
}
void printList(List* lp)
{
    Node* node;
    if (lp->head==NULL){
        printf("\nEmpty List");
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
void printEvens(List* lp)
{
    Node* temp;
    temp=lp->head;
    while (temp!=NULL){
        if (temp->item % 2==0)
            printf("%d ",temp->item);
        temp=temp->next;
    }
}
int main()
{
    List* lp;
    lp=(List*)malloc(sizeof(List));
    initList(lp);
    addAtHead(lp,2);
    addAtHead(lp,3);
    addAtHead(lp,6);
    addAtHead(lp,7);
    addAtHead(lp,4);
    printf("List:\n");
    printList(lp);
    printf("Even elements:\n");
    printEvens(lp);
    printf("\n");
    return 0;
}
