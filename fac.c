#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter a number");
	scanf("%d",&x);
	for(y=1,z=1;y<=x;y++)
	{
		z=z*y;
	}

		printf("%d",z);
	return 0;
}
