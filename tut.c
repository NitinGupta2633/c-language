#include<stdio.h>
int main()
{
int x,y,z=0,temp;
printf("enter a number");
scanf("%d",&x);
temp=x;
while(x>0)
{
	y%10;
	z=z+(y*y*y);
	x=x%10;
}
if (temp==z)
printf(" it is a armstrong number");
else
printf("it is not a armstrong number");
}
