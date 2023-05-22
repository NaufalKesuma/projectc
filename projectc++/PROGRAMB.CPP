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
  setcolor(3);
  rectangle(200,200,300,300);
  rectangle(400,150,450,200);
  line(200,200,400,150);
  line(300,300,450,200);
  line(300,200,450,150);
  setlinestyle(3,0,1);
  line(200,300,400,200);

  line(540,180,450,250);
  line(540,180,630,250);

   line(450,250,630,250);
   line(450,300,630,300);
   line(450,250,450,300);
   line(630,250,630,300);

    line(460,300,460,400);
    line(620,300,620,400);
    line(460,400,620,400);

getch();
closegraph();
}
