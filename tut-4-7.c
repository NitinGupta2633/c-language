#include<stdio.h>
int main()
{
	int x,a;
	printf("enter basic salary");
	scanf("%d",&x);
	if(x<=10000)
	{
		a=(x)+(x*0.20)+(x*0.80);
    printf("gross salary=%d",a);
	}
	else if(x>10000&&x<=20000)
	{
		a=x+(x*0.25)+(x*0.90);
		printf("gross salary=%d",a);
	}
	else if(x>20000)
	{
		a=x+(x*0.30)+(x*0.95);
		printf("gross salary=%d",a);
	}
	
}
