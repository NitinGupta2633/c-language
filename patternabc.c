#include<stdio.h>
int main()
{
	int x,y,z;
	for(y=1;y<=5;y++)
	{
	
	for(x=4;x>=y;x--)
	{
		printf("-");
		
	}
	for(z=1;z<=2*y-1;z++)
	{
		printf("%c",y+64);
	}
	printf("\n");
}
}

