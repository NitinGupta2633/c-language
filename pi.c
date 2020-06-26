#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=6;r++)
	{
		for(c=1;c<=6;c++)
		{
			if (c==1 || c==3)
			{
				for(c=1;c<=6;c++)
				printf("*\n");
			}
			else
			printf("\n");
		
		}
	}
}
