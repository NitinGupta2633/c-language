#include<stdio.h>
int main()
{
	int x,y,z,a;
	printf("enter a number");
	scanf("%d",&a);
	for(x=a;x<=a;x++)
	{
		for(y=2;y<a;y++)
		{
			z=x%y;
			if(z==0)
			{
				printf("%d is not a prime no\n",x);
			}
			else
			{
				printf("%d is a prime \n",x);
			}
		}
	}
}
