#include<stdio.h>
int factorial(int x);
int main()
{
	int x,fact;
	printf("enter the no");
	scanf("%d",&x);
	fact=factorial(x);
	printf("fact=%d",fact);
	
}
int factorial(int x)
{
	if(x==1||x==0)
	{
		return 1;
		
	}
	return x*factorial(x-1);
}
