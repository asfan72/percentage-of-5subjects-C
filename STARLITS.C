#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
	int gd=DETECT,gm,i=0,x,y,maxx,maxy;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\TC\\BGI");
	cleardevice();
	while(!kbhit())
	{
		x=random(maxx);
		y=random(maxy);
		putpixel(x,y,i);
		i++;
		delay(10);
	}
	getch();
}