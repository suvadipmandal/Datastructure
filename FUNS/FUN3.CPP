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
  line(random(getmaxx()),random(getmaxy()),random(getmaxx()),random(getmaxy()));
  delay(120);
  }
 closegraph();
 }