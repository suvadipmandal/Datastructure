#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void main()
 {
 int gd=0,gm;
 initgraph(&gd,&gm,"..\\bgi");
 while(!kbhit())
  {
  setcolor(random(15));
  settextstyle(random(5),0,random(6));
  outtextxy(random(getmaxx()),random(getmaxy()),"POKA");
  delay(20);
  }
 closegraph();
 }