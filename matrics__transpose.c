#include<stdio.h>
int main()
{
	int q[2][3],p[3][2],r,c;
	printf("enter elements of matrics");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&q[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{    
		for(c=0;c<3;c++)
		{
			 q[r][c]=p[c][r];
			printf("  %d",p[c][r]);
		}
		printf("\n");
	}
}
