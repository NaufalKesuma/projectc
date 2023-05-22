#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
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
 int x1,y1,x2,y2,xp,yp,teta;
 float xx,yy,ssin,ccos;
 x1=100;y1=150;x2=200;y2=150;
 xp=x1;yp=y1;teta=45;
 ssin=sin(3.14159/180*teta);
 ccos=cos(3.14159/180*teta);
 line(x1,y1,x2,y2);

 xx=xp+(x2-xp)*ccos-(y2-yp)*ssin;
 yy=yp+(x2-xp)*ssin+(y2-yp)*ccos;
 line(x1,y1,xx,yy);
 getch();
 closegraph();
}