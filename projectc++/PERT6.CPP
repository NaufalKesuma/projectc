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
 rectangle(100,200,200,300);
 rectangle(400,150,450,200);
 line(100,200,400,150);
 line(200,300,450,200);
 line(200,200,450,150);
 setlinestyle(3,0,1);
 line(100,300,400,200);

 getch();
 closegraph();
}