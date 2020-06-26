#include<stdio.h>
int main()
{
	int r,c,s;
	for(r=1;r<=5;r++)
	{
		for(s=4;s>=r;s--)
		{
			printf("-");
			
		}
		for(c=1;c<=2*r-1;c++)
		{
			printf("*");
			printf("\n");
		}
		for(r=1;r<=5;r++)
	{
		for(s=66;s>=r;s--)
		{
			printf("-");
			
		}
		for(c=1;c<=2*r-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	
		printf("\n");
		
	}
}
