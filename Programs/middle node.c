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
        lp->head=node;
        lp->tail=node;
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
        lp->head=node;
        lp->tail=node;
    }
    else {
        node->next=lp->head;lp->head=node;
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
        node = node->next;
        if (node!=NULL)
            printf(",");
    }
    printf("\n");
}
void findMiddleNode(List* lp)
{
    Node* temp;
    int count=0;
    int middle=0;
    temp=lp->head;
    while (temp!=NULL){
        count++;
        temp=temp->next;
    }
    middle=count/2;
    if (count%2!=0)
        middle+=1;
    count=0;
    temp=lp->head;
    while (temp!=NULL){
        count++;
        if (count==middle){
            printf("Middle node in the list:%d\n",temp->item);
            break;
        }
        temp=temp->next;
    }
}
int main()
{
    List* lp;
    lp=(List*)malloc(sizeof(List));
    initList(lp);
    addAtTail(lp,1);
    addAtTail(lp,2);
    addAtTail(lp,3);
    addAtTail(lp,4);
    addAtTail(lp,5);
    printf("List:\n");
    printList(lp);
    findMiddleNode(lp);
    return 0;
}
