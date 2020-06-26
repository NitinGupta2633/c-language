#include<stdio.h>
int main()
{
	int x[10],i,y,z;
	printf("enter 10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&x[i]);
	}
	y=x[0]+x[2]+x[4]+x[6]+x[8];
	z=x[1]+x[3]+x[5]+x[7]+x[9];
	printf("sum of even place=%d",z);
	printf("\nsum of odd place=%d",y);
	
}
