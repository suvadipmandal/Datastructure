//C Program to Reverse a Linked List
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
        int data;
        struct node *next;
}node;

node *create(int);
void print(node *);
node *invert(node *);

int main()
{
    node *head,*P;
    int n;
    printf(“Enter how many nodes? “);
    scanf(“%d”,&n);
    printf(“nEnter nodes: “);

    head=create(n);     //create function returns the address of first node
    printf(“nOriginal Linked List: “);
    print(head);

    P=invert(head);
    printf(“nnReversed Linked List: “);
    print(P);

    return 0;
}

node* create(int n)
{
    node *head,*P;
    int i;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    scanf(“%d”,&(head->data));
    P=head;

    //create subsequent nodes
    for(i=1;i<n;i++)
    {
        P->next=(node*)malloc(sizeof(node));
        //new node is inserted as the next node after P
        P=P->next;
        scanf(“%d”,&(P->data));
        P->next=NULL;
    }
    return(head);
}

void print(node *P)
{
    while(P!=NULL)
    {
        printf(“<- %d ->”,P->data);
        P=P->next;
    }
}

node *invert(node *head) //reverse a linked list pointed by head
{
node *P,*q,*r;

//initial  values of P, q and r
P=NULL;
q=head;
r=q->next;

//until all nodes have reversed
while(q!=NULL)
{
q->next=P;
P=q;
q=r;

if(r!=NULL)
r=r->next;
}

return(P);
}
