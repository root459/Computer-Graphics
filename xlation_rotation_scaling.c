#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void main(){
int x1,x2,x3,y1,y2,y3;
float a,s,c,z;
float x,y,tx,ty;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("enter the coordinates of the triangle:");
scanf("%d %d %d %d %d %d, ",&x1,&y1,&x2,&y2,&x3,&y3);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
printf("enter the scaling factor of x and y");
scanf("%f %f",&x,&y);
x1=x1*x;
y1=y1*y;
x3=x3*x;
y3=y3*y;
x2=x2*x;
y2=y2*y;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
printf("enter the translation x and y");
scanf("%f %f",&tx,&ty);
x1=x1+tx;
x2=x2+tx;
x3=x3+tx;
y1=y1+ty;
y2=y2+ty;
y3=y3+ty;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
printf("enter the angle");
scanf("%f",&a);
z=3.14/180;
a=a*z;
c=cos(a);
s=sin(a);
x1=floor(x1*c-y1*s);
x2=floor(x2*c-y2*s);
x3=floor(x3*c-y3*s);
y2=x2*s+y2*c;
y1=x1*s+y1*c;
y3=x3*s+y3*c;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);
getch();
 closegraph();
}