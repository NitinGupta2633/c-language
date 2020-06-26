#include<stdio.h>
int main()
{
	int x,y,z,sum=0;
	for(x=1;x<=500;x++)
	{
		for(y=2;y<x;y++)
		{
			z=y%x;
			if(z==0)
			{
			sum=sum+y;
		}
		
		}
	}

		if(sum==x)
	{
		printf("%d",x);
}
		

	return 0;
}
