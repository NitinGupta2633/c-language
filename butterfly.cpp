#include<stdio.h>
int main()
{
	int r,c,s,r1,c1,s1;
	for(r=0;r<=10;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("-");
		}
		if(r<=9)
		{
			
		for(s=1;s<10;s++)
		{
			printf("*");
		}
		printf("\n");
	}
}
	for(r=0;r<=10;r++)
	{
		for(c=10;c>=r;c--)
		{
			printf("-");
		}
		for(c1=1;c1<=10;c1++)
		{
			printf("*");
		}
		printf("\n");
	}

}
