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
 //kotak dan lingkaran di bawah
 rectangle(190,250,250,300);
 circle(220,275,10);
 // kotak diatas
 rectangle(350,130,390,160);
 //garis kiri atas
 line(190,250,350,130);
 //garis kanan bawah
 line(250,300,390,160);
 // garis kanan atas
 line(250,250,390,130);
 //kota atas

 rectangle(255,80,309,200);
 //garis2 atas kiri
 setlinestyle(1,0,0);
 line(255,80,350,130);
 //garis2 atas kanan
 setlinestyle(0,0,0);
 line(310,80,390,130);
 getch();
 closegraph();
}