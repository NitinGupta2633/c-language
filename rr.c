#include<stdio.h>
int main()
{
	int r,c,s;
	for(r=1;r<=8;r++)
	{
		for(c=4;c>=r;c--)
		{
			printf("*");
			
		}
		printf("\n");
	}
}
