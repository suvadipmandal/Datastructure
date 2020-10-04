//LCM of two numbers
//==================
#include<stdio.h>
#include<conio.h>
int hcf(int x,int y)
 {
 int r;
 if(x<y)
  {
  x=x^y;
  y=x^y;
  x=x^y;
  }
 while(1)
  {
  r=x%y;
  if(r==0)
  return(y);
  else
   {
   x=y;
   y=r;
   }
  }
 }
void main()
 {
 int no1,no2;
 clrscr();
 printf("enter two integers :");
 scanf("%d%d",&no1,&no2);
 printf("LCM of %d and %d = %d",no1,no2,(no1*no2)/hcf(no1,no2));
 getch();
 }