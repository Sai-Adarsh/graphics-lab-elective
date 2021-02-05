
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
   int gd=DETECT, gm;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");
   cleardevice();

   setbkcolor(BLUE);
   circle(500, 500, 100);

   setbkcolor(GREEN);
   rectangle(100,100,200,200);

   setbkcolor(CYAN);
   ellipse(200, 200, 0, 360, 50, 25);

   getch();
   closegraph();
}
