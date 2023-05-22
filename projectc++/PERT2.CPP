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
 settextstyle(3,0,4);
 outtextxy(25,50,"PEMROGRAMAN C ");
 outtextxy(25,100,"Nama Saya : MR.LOBA-LOBA");
 outtextxy(25,130,"Created by : Dianws & MARS");
 x=getmaxx()/2; y=getmaxy()/2;
 bar(x-75,y-50,x+75,y+100);
 setcolor(0); setfillstyle(9,14);
 fillellipse(x,y+25,60,60);
 setcolor(3); setlinestyle(1,1,1);
 setcolor(4); setlinestyle(0,0,3);
 setfillstyle(10,0);
 fillellipse(x-25,y+10,5,5);
 fillellipse(x+25,y+10,5,5);
 setcolor(0); setlinestyle(0,0,3);
 ellipse(x,y+40,180,360,20,10);
 getch();
 closegraph();
 return 0;
}