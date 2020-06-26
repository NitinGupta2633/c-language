#include<stdio.h>
int main()
{
	int r,c,s,s1,c1,x,y,z;
	printf("\n\n\n");
	for(r=1;r<=5;r++)
	{
		for(s=50;s>r;s--)
		{  printf(" ");
	}
			for(c=1;c<=2*r-1;c++)
			{
				printf(".");
			}
				for(s1=6;s1>=2*r-3
				;s1--)
				{
					printf(" ");
					
}
					for(c1=1;c1<=2*r-1;c1++)
					{
						printf(".");
					}



	printf("\n");
	}
for(x=1;x<=10;x++)
{
	for(y=0;y<(x+43);y++)
	{
		printf(" ");
		
	}
	for(z=19;z>=2*x-1;z--)
	{
		printf(".");
		
	}
	printf("\n");
}
	
	return 0;
}
