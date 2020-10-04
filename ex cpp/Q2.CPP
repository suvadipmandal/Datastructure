//x^y using udf
//=============
#include<stdio.h>
#include<conio.h>
double power(int x,int y)
 {
 int flag=0;
 double d=1.0;
 if(y<0)
  {
  flag=1;
  y=-y;
  }
 if(y==0)
 return(1.0);
 else
  {
  while(y>0)
   {
   d=d*x;
   --y;
   }
  if(flag==1)
  return 1/d;
  else
  return(d);
  }
 }
void main()
 {
 int x,y;
 clrscr();
 printf("enter the value of x :");
 scanf("%d",&x);
 printf("enter the value of y :");
 scanf("%d",&y);
 printf("\n%d ^ %d = %lf",x,y,power(x,y));
 getch();
 }