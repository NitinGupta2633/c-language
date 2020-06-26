#include<stdio.h>
int main()
{
	int m[2][2],p[2][2],r,c,q[2][2];
printf("enter value of first matrics");
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
	{
		scanf("%d",&m[r][c]);
		
		
	}
	
	}	
	printf("enter element of second matrics ");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&p[r][c]);
		}
		}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			q[r][c] = m[r][c] + p[r][c];
			printf("%d   ",q[r][c]);
		}
		printf("\n");
	}
}
