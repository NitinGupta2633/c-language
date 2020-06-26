#include<stdio.h>
int main()
{
	int m[2][3],p[3][2],r,c;
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",m[r][c]);
		}
	}
	printf("after taking transpose");
	
	for(r=2;r>0;r--)
	{
		
		for(c=2;c>0;c--)
		{
			printf("%d",p[c][r]);
			
		}
		printf("\n");
	}
	
}

