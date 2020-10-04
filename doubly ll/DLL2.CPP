//node insertion at the begining of the double non-circular linked list
//=====================================================================
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
 {
 int no;
 struct x *next,*previous;
 }*p,*q,*r;
void main()
 {
 char ch;
 p=q=(struct x*)malloc(sizeof(struct x));
 while(1)
  {
  clrscr();
  printf("\nenter any number :");
  scanf("%d",&p->no);
  printf("\nany more (y/n)? ");
  fflush(stdin);
  ch=getche();
  if(ch=='y' || ch=='Y')
   {
   p->next=(struct x *)malloc(sizeof(struct x));
   p->next->previous=p;
   p=p->next;
   }
  else
   {
   p->next=NULL;
   q->previous=NULL;
   break;
   }
  }
 printf("\n\nNodes information(right-to-left) :\n");
 for(r=p;r!=NULL;r=r->previous)
 printf("%d\t",r->no);
 printf("\n\nNodes information(left-to-right): \n");
 for(r=q;r!=NULL;r=r->next)
 printf("%d\t",r->no);
//creating new node
//================================================
 r=(struct x *)malloc(sizeof(struct x));
 printf("\n\nEnter the value for new node :");
 scanf("%d",&r->no);
//inserting the node at the begining of the list
//==============================================
 r->next=q;
 r->next->previous=r;
 r->previous=NULL;
 q=r;

 printf("\n\nNodes information(left-to-right): \n");
 for(p=q;p!=NULL;p=p->next)
 printf("%d\t",p->no);


 getch();
 }