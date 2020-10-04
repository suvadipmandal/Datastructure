#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
 {
 int gd=0,gm;
 initgraph(&gd,&gm,"..\\bgi");
 while(!kbhit())
  {
  setcolor(random(15));
  circle(random(getmaxx()),random(getmaxy()),random(200));
  delay(100);
  }
 closegraph();
 }