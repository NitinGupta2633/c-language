#include<stdio.h>
int main()
{
	printf("enter elememts of transpose");
	int q[2][3],p[3][2],r,c;
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&q[r][c]);
		}
	}
	for(r=0;r<3;r++)
	{   
		for(c=0;c<3;c++)
		{
		p[r][c]=q[c][r]; 
		}
	}
	printf("after taking transpose");
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d    ",p[r][c]);
		}
		printf("\n");
	}
}
