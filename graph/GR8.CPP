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
 midx=x/2;
 midy=y/2;
 setcolor(GREEN);
 circle(midx,midy,200);
 setfillstyle(1,BLUE);
 floodfill(midx-155,midy,GREEN);
 setcolor(RED);
 circle(midx,midy,150);
 setfillstyle(6,RED);
 floodfill(midx,midy,RED);
 getch();
 closegraph();
 }