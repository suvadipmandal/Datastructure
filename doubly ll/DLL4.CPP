//node insertion(before target) into doubly non-circular linked list
//==================================================================
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
 {
 int no;
 struct x *next,*previous;
 }*p,*q,*r,*s;
void main()
 {
 char ch;
 int T,flag=0;
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
//inserting node within the lst
//=============================
printf("\nEnter the value of target node :");
scanf("%d",&T);
if(T==q->no)
 {
 flag=1;
 r->next=q;
 r->next->previous=r;
 r->previous=NULL;
 q=r;
 }
else
 {
 for(s=q;s!=p;s=s->next)
  {
  if(s->next->no==T)
   {
   flag=1;
   r->next=s->next;
   r->next->previous=r;
   r->previous=s;
   s->next=r;
   break;
   }
  }
 }

 if(flag==0)
 printf("\nTarget node not found...");
 else
 {
 printf("\n\nNodes information(left-to-right): \n");
 for(r=q;r!=NULL;r=r->next)
 printf("%d\t",r->no);
 }

 getch();
 }