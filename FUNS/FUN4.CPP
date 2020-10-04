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
  putpixel(random(getmaxx()),random(getmaxy()),random(15));
 // delay(20);
  }
 closegraph();
 }