#include<stdio.h>
int fact(int x);
int main()
{   int x,y,result;
	printf("enter the no");
	scanf("%d",&x);
	result=fact(x);
	printf("factorial=%d",result);
}
int fact(int x)
{
	int factorial,y,z=1;
	for(y=1;y<=x;y++)
    {
    	z=z*y;
	}
	return z;
}
