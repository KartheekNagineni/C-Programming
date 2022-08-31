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
        printf("%02d",node->item);
        node=node->next;
        if (node!=NULL)
            printf(",");
    }
    printf("\n\n");
}
void dupDelete(List* lp)
{
    Node* current=lp->head;
    Node* index;
    Node* temp;
    while (current!=NULL){
        temp=current;
        index=current->next;
        while (index!=NULL){
            if (current->item==index->item)
                temp->next=index->next;
            else
                temp=index;
            index=index->next;
        }
        current=current->next;
    }
}
int main()
{
    List* lp;
    lp=(List*)malloc(sizeof(List));
    initList(lp);
    addAtTail(lp,6);
    addAtTail(lp,2);
    addAtTail(lp,1);
    addAtTail(lp,6);
    addAtTail(lp,1);
    printf("List:\n");
    printList(lp);
    dupDelete(lp);
    printf("List After removing duplicates:\n");
    printList(lp);
    return 0;
}
