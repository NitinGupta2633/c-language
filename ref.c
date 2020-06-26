#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
int gd=DETECT, gm, n, midx, midy, a, b, m;
clrscr();
initgraph(&gd,&gm,"..\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
a:line(midx,0,midx,getmaxy());
line(midx-midy,midy,midx+midy,midy);
rectangle(midx-midy,0,midx+midy,getmaxy());
line(midx-midy,0,midx+midy,getmaxy());
line(midx+midy,0,midx-midy,getmaxy());
printf("Program for reflection and sharing\n");
printf("Enter choice\n1. Reflection\n2. Sharing\n3. Exit\n");
printf("Choice : ");
scanf("%d",&n);
switch(n)
{
 case 1:
 //codes for triangle
 line(midx+20,midy-10,midx+100,midy-10);
 line(midx+100,midy-10,midx+100,midy-50);
 line(midx+100,midy-50,midx+20,midy-10);

 // reflection (x,y)=(-x,-y)
 setcolor(2);
 line(midx-20,midy+10,midx-100,midy+10);
 line(midx-100,midy+10,midx-100,midy+50);
 line(midx-100,midy+50,midx-20,midy+10);

 // reflection (x,y)=(-x,y)
 setcolor(4);
 line(midx-20,midy-10,midx-100,midy-10);
 line(midx-100,midy-10,midx-100,midy-50);
 line(midx-100,midy-50,midx-20,midy-10);

 // reflection (x,y)=(x,-y)
 setcolor(6);
 line(midx+20,midy+10,midx+100,midy+10);
 line(midx+100,midy+10,midx+100,midy+50);
 line(midx+100,midy+50,midx+20,midy+10);

 // reflection (x,y)=(-y,-x)
 setcolor(8);
 line(midx-10,midy+20,midx-10,midy+100);
 line(midx-10,midy+100,midx-50,midy+100);
 line(midx-50,midy+100,midx-10,midy+20);

 // reflection (x,y)=(-y,x)
 setcolor(10);
 line(midx-10,midy-20,midx-10,midy-100);
 line(midx-10,midy-100,midx-50,midy-100);
 line(midx-50,midy-100,midx-10,midy-20);

 // reflection (x,y)=(y,-x)
 setcolor(12);
 line(midx+10,midy+20,midx+10,midy+100);
 line(midx+10,midy+100,midx+50,midy+100);
 line(midx+50,midy+100,midx+10,midy+20);

 // reflection (x,y)=(y,x)
 setcolor(14);
 line(midx+10,midy-20,midx+10,midy-100);
 line(midx+10,midy-100,midx+50,midy-100);
 line(midx+50,midy-100,midx+10,midy-20);
 getch();
 cleardevice();
 break;

 case 2:
 printf("Enter choice\n1. x-axis Sharing\n2. y-axis Sharing\n3. Exit");
 s:printf("Choice : ");
 scanf("%d",&m);
 switch(m)
 {
  case 1:
  printf("Enter value for sharing : ");
  scanf("%d",&a);
  //triangle formation
 line(midx+20,midy-10,midx+100,midy-10);
 line(midx+100,midy-10,midx+100,midy-50);
 line(midx+100,midy-50,midx+20,midy-10);

  //sharing on x-axis
 setcolor(YELLOW);
 line(midx+20,midy-10,midx+100,midy-10);
 line(midx+100,midy-10,midx+100+(a*50),midy-50);
 line(midx+100+(a*50),midy-50,midx+20,midy-10);
  break;

  case 2:
  printf("Enter value for sharing : ");
  scanf("%d",&b);
  //triangle formation
 line(midx+20,midy-10,midx+100,midy-10);
 line(midx+100,midy-10,midx+100,midy-50);
 line(midx+100,midy-50,midx+20,midy-10);

  //sharing on y-axis
 setcolor(RED);
 line(midx+20,midy-10,midx+100,midy-10-(b*100));
 line(midx+100,midy-10-(b*100),midx+100,midy-50-(b*100));
 line(midx+100,midy-50-(b*100),midx+20,midy-10);
  break;

  case 3:
  exit(0);

  default:
  printf("Enter choice correctly\n");
  }
  goto s;
 break;

 case 3:
 exit(0);

 default:
 printf("Enter choice again\n");
 }
 goto a;
getch();
}
