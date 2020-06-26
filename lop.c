#include<stdio.h>
int main()
{
	int r,c,x=1;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++,x++)
		{
			printf("%d",x);
		}
		printf("\n");
	}
	
}
