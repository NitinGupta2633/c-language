#include<stdio.h>
int main()
{
	int x,y,a,b,c,d;
	printf("enter any 4 digit number");
	scanf("%d",&x);
	y=x%10;
	a=(x/10)%10;
	b=(x/100)%10;
	c=(x/1000);
	d=(c+1)*1000+(b+1)*100+(a+1)*10+(y+1);	
	printf("\n%d",d);
}
