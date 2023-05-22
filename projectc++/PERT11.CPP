#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
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
 int x,y,xp,yp,sudut,i=0;
 float ssin,ccos,xx,yy;
 inisialisasi();
 xp=300;yp=250;x=300;y=100;sudut=0;
 //pusat rotasi
 circle(xp,yp,10);
 //lingkaran asal
 //circle(x,y,50);
 int a=0,b=15,z,w=0;
for(z=1;z<=3;z++)
{
w=w+1;
for(i=1;i<=36;i++){
 setcolor(w);
 sudut=sudut+10;
 //nilai sinus
 ssin=sin(3.14159/180*sudut);
 //nilai cosinus
 ccos=cos(3.14159/180*sudut);
 xx=xp+(x-xp)*ccos-(y-yp)*ssin;
 yy=yp+(x-xp)*ssin+(y-yp)*ccos;
 circle(xx,yy,50);
 delay(100);
 setcolor(a);
 circle(xx,yy,50);
 }
 }
 getch();
 closegraph();

}