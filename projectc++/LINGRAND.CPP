#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
int xmax, ymax;
int GraphDriver, GraphMode, ErrorCode;
void graphics(void)
{
	GraphDriver = DETECT;
	initgraph(&GraphDriver, &GraphMode, "c:\\TC\\BGI");
	ErrorCode = graphresult();
	if(ErrorCode!=grOk)
	{
	printf("Graphics System Error : %s\n",grapherrormsg(ErrorCode));
	getch();
	}
}
void main()
															{
graphics();
int x,y,r;

while(!kbhit())
{
x=random(639);
y=random(439);
r=random(100);

setcolor(rand()%30);
circle(x,y,r);
delay(5);
}
getch();
closegraph();
}

