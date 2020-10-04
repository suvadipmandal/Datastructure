//C Program for Addition and Multiplication of Polynomial Using Arrays or Linked List
#include<math.h>
#include<stdio.h>
#include<conio.h>
#define MAX 17
void init(int p[]);
void read(int p[]);
void print(int p[]);
void add(int p1[],int p2[],int p3[]);
void multiply(int p1[],int p2[],int p3[]);

/*Polynomial is stored in an array, p[i] gives coefficient of x^i .
  a polynomial 3x^2 + 12x^4 will be represented as (0,0,3,0,12,0,0,….)
*/

void main()
{
int p1[MAX],p2[MAX],p3[MAX];
int option;
do
{
printf(“nn1 : create 1’st polynomial”);
printf(“n2 : create 2’nd polynomial”);
printf(“n3 : Add polynomials”);
printf(“n4 : Multiply polynomials”);
printf(“n5 : Quit”);
printf(“nEnter your choice :”);
scanf(“%d”,&option);
switch(option)
{
case 1:read(p1);break;
case 2:read(p2);break;
case 3:add(p1,p2,p3);
      printf(“n1’st polynomial -> “);
      print(p1);
      printf(“n2’nd polynomial -> “);
      print(p2);
      printf(“n Sum = “);
      print(p3);
      break;
case 4:multiply(p1,p2,p3);
      printf(“n1’st polynomial -> “);
      print(p1);
      printf(“n2’nd polynomial -> “);
      print(p2);
      printf(“n Product = “);
      print(p3);
      break;
}
}while(option!=5);
}
void read(int p[])
{
int n, i, power,coeff;
init(p);
printf(“n Enter number of terms :”);
scanf(“%d”,&n);
/* read n terms */
for (i=0;i<n;i++)
{       printf(“nenter a term(power  coeff.)”);
scanf(“%d%d”,&power,&coeff);
p[power]=coeff;
}
}
void print(int p[])
{
int i;
for(i=0;i<MAX;i++)
if(p[i]!=0)
printf(“%dX^%d   “,p[i],i);
}
void add(int p1[], int p2[], int p3[])
{
    int i;
    for(i=0;i<MAX;i++)
p3[i]=p1[i]+p2[i];
}

void  multiply(int p1[], int p2[], int p3[])
{
int i,j;
init(p3);
for(i=0;i<MAX;i++)
for(j=0;j<MAX;j++)
   p3[i+j]=p3[i+j]+p1[i]*p2[j];
}
void init(int p[])
{
    int i;
    for(i=0;i<MAX;i++)
p[i]=0;
}



//Polynomial addition, multiplication (8th degree polynomials) using linked list
#include<math.h>
#include<stdio.h>
#include<conio.h>
#define MAX 17
typedef struct node
  {
int coeff;
struct node *next;
  }node;
node *  init();
void read(node *h1);
void print(node *h1);
node * add(node *h1,node *h2);
node * multiply(node *h1,node *h2);
/*Polynomial is stored in a linked list, ith node  gives coefficient of x^i .
  a polynomial 3x^2 + 12x^4 will be represented as (0,0,3,0,12,0,0,….)
*/
void main()
{
node *h1=NULL,*h2=NULL,*h3=NULL;
int option;
do
{
printf(“nn1 : create 1’st polynomial”);
printf(“n2 : create 2’nd polynomial”);
printf(“n3 : Add polynomials”);
printf(“n4 : Multiply polynomials”);
printf(“n5 : Quit”);
printf(“nEnter your choice :”);
scanf(“%d”,&option);
switch(option)
{
case 1:h1=init();read(h1);break;
case 2:h2=init();read(h2);break;
case 3:h3=add(h1,h2);
      printf(“n1’st polynomial -> “);
      print(h1);
      printf(“n2’nd polynomial -> “);
      print(h2);
      printf(“n Sum = “);
      print(h3);
      break;
case 4:h3=multiply(h1,h2);
      printf(“n1’st polynomial -> “);
      print(h1);
      printf(“n2’nd polynomial -> “);
      print(h2);
      printf(“n Product = “);
      print(h3);
      break;
}
}while(option!=5);
}
void  read(node *h)
{
int n,i,j,power,coeff;
node *p;
p=init();
printf(“n Enter number of terms :”);
scanf(“%d”,&n);
/* read n terms */
for (i=0;i<n;i++)
{       printf(“nenter a term(power  coeff.)”);
scanf(“%d%d”,&power,&coeff);
for(p=h,j=0;j<power;j++)
   p=p->next;
p->coeff=coeff;
}
}
void print(node *p)
{
   int i;
for(i=0;p!=NULL;i++,p=p->next)
if(p->coeff!=0)
printf(“%dX^%d   “,p->coeff,i);
}
node * add(node *h1, node *h2)
{
    node *h3,*p;
    h3=init();
    p=h3;
    while(h1!=NULL)
     {
h3->coeff=h1->coeff+h2->coeff;
h1=h1->next;
h2=h2->next;
h3=h3->next;
     }
 return(p);
}
node * multiply(node *h1, node *h2)
{
node *h3,*p,*q,*r;
int i,j,k,coeff,power;
h3=init();
for(p=h1,i=0;p!=NULL;p=p->next,i++)
for(q=h2,j=0;q!=NULL;q=q->next,j++)
   {
coeff=p->coeff * q->coeff;
power=i+j;
for(r=h3,k=0;k<power;k++)
r=r->next;
r->coeff=r->coeff+coeff;
    }
  return(h3);
}
node * init()
{
    int i;
    node *h=NULL,*p;
    for(i=0;i<MAX;i++)
{
p=(node*)malloc(sizeof(node));
p->next=h;
p->coeff=0;
h=p;
}
  return(h);
}