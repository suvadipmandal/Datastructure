#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
 {
 int gd=0,gm;
 int x,y,midx,midy;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 closegraph();
 midx=x/2;
 midy=y/2;
 printf("\nScreen Resolution : %d X %d",x+1,y+1);
 printf("\n Co-ordinate of the middle of the screen : %d X %d",midx,midy);
 getch();
 }