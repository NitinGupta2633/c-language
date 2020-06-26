#include<stdio.h>
int main()
{
	int r,c,s;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=10;c++)
		{     s=r*c;
			printf("%d  ",s);
		}
		printf("\n");
	}
}
