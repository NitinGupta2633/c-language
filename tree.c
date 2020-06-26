#include<stdio.h>
int main()
{
	
	int r,c,s;
	printf("\n\n");
	for(r=1;r<=5;r++)
	{
		for(s=51;s>=r;s--)
		{
			printf(" ");
		}
		for(c=1;c<=2*r-1;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(r=1;r<=5;r++)
	{
		for(s=50;s>=r;s--)
		{
			printf(" ");
		}
		for(c=1;c<=2*r+1;c++)
		{
			printf("*");
		}
		printf("\n");

}
for(r=1;r<=5;r++)
	{
		for(s=50;s>=r;s--)
		{
			printf(" ");
		}
		for(c=1;c<=2*r+2;c++)
		{
			printf("*");
		}
		printf("\n");

}
for(r=1;r<=5;r++)
{
	for(s=50;s>0;s--)
	{
		printf(" ");
	}
	for(c=1;c<=5;c++)
	{
		printf("*");
	
	}
	printf("\n");
}

}
