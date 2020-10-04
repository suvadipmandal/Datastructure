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
 setfillstyle(1,RED);
 floodfill(midx,midy,RED);
 setcolor(WHITE);
 line(midx-149,midy-1,midx+149,midy-1);
 line(midx-149,midy,midx+149,midy);
 line(midx-149,midy+1,midx+149,midy+1);
  line(midx-1,midy-149,midx-1,midy+149);
  line(midx,midy-149,midx,midy+149);
  line(midx+1,midy-149,midx+1,midy+149);
setfillstyle(1,YELLOW);
floodfill(midx-75,midy-50,RED);
 getch();
 closegraph();
 }