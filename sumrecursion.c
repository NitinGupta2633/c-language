#include<stdio.h>
int sum(int x);
int main()
{
	int x,y;
	printf("enter no upto wich you want the sum");
	scanf("%d",&x);
	y=sum(x);
	printf("sum=%d",y);
}
int sum(int x)
{
	if(x!=0)
	{
		return x+sum(x-1);
	}
}
