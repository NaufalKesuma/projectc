#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
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
 int i,x;
 inisialisasi();
 x=random(100)+1;
 for(i=0;i<=200;i++)
 {
 setcolor(x);
 circle(50,i,50);
 delay(50);
 setcolor(0);
 circle(50,i,50);
 }
 for(i=200;i>=0;i--)
 {
 setcolor(x);
 circle(50,i,50);
 delay(50);
 setcolor(0);
 circle(50,i,50);
 }
 getch();
 closegraph();
}