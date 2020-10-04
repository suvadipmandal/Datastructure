#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct x
 {
 int no;
 struct x *next,*previous;
 }*p,*q;
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
 for(;p!=NULL;p=p->previous)
 printf("%d\t",p->no);
 printf("\n\nNodes information(left-to-right): \n");
 for(p=q;p!=NULL;p=p->next)
 printf("%d\t",p->no);
 getch();
 }