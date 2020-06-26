#include<stdio.h>
int main()
{
	int r,c,s,s1,c1;
	for(r=1;r<=5;r++)
	{
		for(s=5;s>r;s--)
		{  printf("-");
	}
			for(c=1;c<=2*r-1;c++)
			{
				printf("*");
			}
				for(s1=10;s1>=1;s1--)
				{
					printf("-");
					
					}
					for(c1=9;c1>=2*r-1;c1--)
					{
						printf("*");
					}
				
			
		
	printf("\n");
	}
	return 0;
}
