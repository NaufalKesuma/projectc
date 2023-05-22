#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
int xmax, ymax;
int GraphDriver, GraphMode, ErrorCode;
void inisialisasi(void)
{
	GraphDriver = DETECT;
	initgraph(&GraphDriver, &GraphMode, "c:\\Tc\\BGI");
	ErrorCode = graphresult();
	if(ErrorCode!=grOk)
	{
	printf("Graphics System Error : %s\n",grapherrormsg(ErrorCode));
	getch();
	}
}
void main()
{
inisialisasi();
  setcolor(2);
  setlinestyle(0,0,3);
  line(140,140,75,225);
  line(75,225,190,225);
  line(190,225,140,140);

  setlinestyle(0,0,3);
  line(300,50,260,100);
  line(300,50,335,100);
  line(260,100,335,100);

  setcolor(3);
  line(140,140,300,50);
  line(75,225,260,100);
  line(190,225,335,100);

  setcolor(4);
  setlinestyle(0,0,3);
  ellipse(450,250,0,360,80,25);
  ellipse(450,390,0,360,60,25);

  setcolor(5);
  line(370,250,390,390);
  line(530,250,510,390);
  line(450,275,450,415);
getch();
closegraph();
}
