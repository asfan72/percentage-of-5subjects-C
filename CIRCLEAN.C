#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i,x,y;
	initgraph(&gd,&gm,"c:\\TC\\BGI");
	x=319;
	y=239;
	for(i=0;i<=90;i++)
	{
		setcolor(i);
		circle(319,219-i,20+i);
		circle(319,259+i,20+i);
		circle(299-i,239,20+i);
		circle(339+i,239,20+i);
		delay(50);
	}
	getch();
	closegraph();
}