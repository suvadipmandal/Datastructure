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
 rectangle(midx-100,midy-100,midx+100,midy+100);
 rectangle(midx-70,midy-70,midx+130,midy+130);
 line(midx-100,midy-100,midx-70,midy-70);
 line(midx+100,midy+100,midx+130,midy+130);
 line(midx+100,midy-100,midx+130,midy-70);
 line(midx-100,midy+100,midx-70,midy+130);
 getch();
 closegraph();
 }