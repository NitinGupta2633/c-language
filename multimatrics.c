#include<stdio.h>
int main()
{
	int a[2][3],b[3][2],z[2][2],r,c,k;
   
    printf("enter value of first matrics");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("enter value of second matrics");
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	printf("after multiplication");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			z[r][c]=0;
			for(k=0;k<3;k++)
			{
				z[r][c]=z[r][c]+(a[r][k]*b[k][c]);
			}
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",z[r][c]);
		}
    printf("\n");
	}
	
	
}
