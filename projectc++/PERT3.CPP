#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
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
 int u;
 while(!kbhit())
 {
 for(u=1;u<=50;u++)
 {
  setcolor(u);
  setlinestyle(u,u,u);
  circle(300,150,1+2*u);
  circle(150,375,1+2*u);
  circle(450,375,1+2*u);
  delay(10);

 }
 for(u=50;u>=1;u--)
 {
  setcolor(0);
  circle(300,150,1+2*u);
  circle(150,375,1+2*u);
  circle(450,375,1+2*u);
  delay(10);
 }
 }
 getch();
 closegraph();
}