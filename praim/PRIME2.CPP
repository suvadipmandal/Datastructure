//1 to n prime numbers
//====================
#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int no)
 {
 int i;
 if(no<=1)
 return(0);
 else
 if(no>=2 && no<=3)
 return(1);
 else
  {
  for(i=2;i<=sqrt(no);++i)
  if(no%i==0)
  return(0);
  return(1);
  }
 }
void main(void)
 {
 int i,no;
 clrscr();
 printf("enter any number :");
 scanf("%d",&no);
 for(i=1;i<=no;++i)
 if(prime(i))
 printf("\n%5d is prime number",i);
 getch();
 }