#include<stdio.h>
int main()
{
	int r,c,s,r1,c1,r2,s1,r3,c2,s2,s3,c3,c4,r4,c5;
	
	printf("\n\n");
	for(r=1;r<=5;r++)
	{
		for(s=24;s>=r;s--)
		{
			printf(" ");
			
		}
		for(c=1;c<=2*r-1;c++)
		{
			printf("*");
			
		}
		for(r1=50;r1>=1;r1--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(r2=1;r2<=4;r2++)
	{
		for(s1=1;s1<=20;s1++)
		{
			printf(" ");
		}
		for(c=1;c<=60;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(r2=1;r2<=5;r2++)
	{
		for(s2=1;s2<=20;s2++)
		{
			printf(" ");
			
		}
		for(c2=1;c2<=6;c2++)
		{
			printf("*");
		}
		for(s3=1;s3<=7;s3++)
		{
			printf(" ");
			
		}
		for(c3=1;c3<=15;c3++)
		{
			printf("*");
	
		}
		for(c4=1;c4<=12;c4++)
		{
			if(r2==2||r2==3)
			{
				printf(" ");
			}
			else
			{
			printf("*");
		}
		}
		for(r4=1;r4<=4;r4++)
		{
			for(c5=1;c5<=5;c5++)
			{
				printf("*");
			}
		}
		
		
		printf("\n");
	}
	
}
