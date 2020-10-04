#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
 {
 int gd=0,gm,cc=1;
 int x,y,midx,midy;
 initgraph(&gd,&gm,"..\\bgi");
 x=getmaxx();
 y=getmaxy();
 midx=x/2;
 midy=y/2;
 while(1)
  {
  putpixel(midx,midy,cc);
  x=getch();
  if(x==82||x==114)++midx;
  if(midx>getmaxx())midx=1;
  if(x==76||x==108)--midx;
  if(midx<1)midx=getmaxx();
  if(x==85||x==117)--midy;
  if(midy<1)midy=getmaxy();
  if(x==68||x==100)++midy;
  if(midy>getmaxy())midy=1;
  if(x==90)break;
  if(x>=48&&x<=57)cc=x-48;
  if(x==67||x==99){midx=getmaxx()/2;midy=getmaxy()/2;}
  }
 closegraph();
 }