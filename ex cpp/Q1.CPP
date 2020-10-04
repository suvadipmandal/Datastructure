//how many spaces are present in a string?
//========================================
#include<stdio.h>
#include<conio.h>
void main()
 {
 char x[60];
 int i,s=0;
 clrscr();
 printf("enter any string :");
 gets(x);
 for(i=0;x[i]!='\0';++i)
 if(x[i]==' ')
 ++s;
 printf("\nNumber of spaces=%d",s);
 getch();
 }