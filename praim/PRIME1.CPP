//whether a supplied number is prime or not
//=========================================
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
 int no;
 clrscr();
 printf("enter any number :");
 scanf("%d",&no);
 if(prime(no))
 printf("\n%d is prime number",no);
 else
 printf("\n%d is not a prime number",no);
 getch();
 }