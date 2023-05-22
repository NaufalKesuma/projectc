#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int GraphDriver,GraphMode,ErrorCode;
void inisialisasi(void)
{
 GraphDriver = DETECT;
 initgraph(&GraphDriver,&GraphMode,"c:\\TC\\bgi");
 ErrorCode = graphresult();
 if(ErrorCode != grOk){
 printf("Graphics system error : %s\n",grapherrormsg(ErrorCode));
 getch();
 }

}
void main()
{
 inisialisasi();
 int x1,x2,y1,y2,r;
 x1=100;y1=150;x2=200;y2=50;
 line(x1,y1,x2,y2);

 line(x1+50,y1,x2+50,y2);
 line(x1,y1+100,x2,y2+100);

 r=50;
 circle(200,100,r);
 setcolor(12);
 circle(200,100,r*2);
 getch();
 closegraph();
}