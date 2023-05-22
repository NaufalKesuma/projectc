#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int x,y;
int GraphDriver, GraphMode, ErrorCode;
void inisalisasi(void)

{
 GraphDriver = DETECT;
  initgraph(&GraphDriver, &GraphMode, "c:\\tc \\bgi\\");
  ErrorCode = graphresult();
  if (ErrorCode !=grOk)
  {
   printf("Graphics system error : %s\n",
   grapherrormsg(ErrorCode));
   getch();
   }
  }
  void main()
  {
  inisalisasi();
  int u;
while(!kbhit())
{
  for(u=1; u<=100; u++)
  {
  setcolor(u);
  setlinestyle(0,0,3);
  circle(80,100,30+1*u);
  }
  for(u=100; u>=1; u--)
  {
  setcolor(0);
  circle(80,100,30+u*1);
  }
  for(u=1; u<=50; u++)
  {
  setcolor(u);
  setlinestyle(0,0,3);
  circle(500,100,30+1*u);
  }
  for(u=50; u>=1; u--)
  {
  setcolor(0);
  circle(500,100,30+u*1);
  }
  for(u=1; u<=50; u++)
  {
  setcolor(u);
  setlinestyle(0,0,3);
  circle(500,300,30+1*u);
  }
  for(u=50; u>=1; u--)
  {
  setcolor(0);
  circle(500,300,30+u*1);
  }
  for(u=1; u<=50; u++)
  {
  setcolor(u);
  setlinestyle(0,0,3);
  circle(80,300,30+1*u);
  }
  for(u=50; u>=1; u--)
  {
  setcolor(0);
  circle(80,300,30+u*1);
  }
  for(u=1; u<=50; u++)
  {
  setcolor(u);
  setlinestyle(0,0,3);
  circle(300,200,100+2*u);
  }
  for(u=50; u>=1; u--)
  {
  setcolor(0);
  circle(300,200,100+u*2);
  }

}

  getch();
  closegraph();
  }