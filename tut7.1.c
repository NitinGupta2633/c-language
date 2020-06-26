#include<stdio.h>
int x(int y);
int main()
{
	int a,c,f=0;
	printf("enter a number");
	scanf("%d",&a);
	
	for(c=1;c<=a;c++)
	{
		f+=x(c)/c;
	}
	printf("%d",f);
	return 0;
	
}
int x(int y)
{
	if(y==0)
	return 1;
	if(y==1)
	return 1;
	else
	return y*x(y-1);
}
