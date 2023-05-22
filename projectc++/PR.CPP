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
	initgraph(&GraphDriver, &GraphMode, "c:\\TURBOC3\\BGI");
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
setcolor(3);
settextstyle(7,0,5);
outtextxy(150,150,"Naufal");
delay(50);
while(!kbhit())
{
setcolor(rand()%30);
circle(rand()%1000,rand()%500,rand()%60);
delay(50);
}
getch();
closegraph();
}

