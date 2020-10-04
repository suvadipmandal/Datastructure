#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
 {
 int gd=0,gm;
 int x,y;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 closegraph();
 printf("\nScreen Resolution : %d X %d",x+1,y+1);
 getch();
 }