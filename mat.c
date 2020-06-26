#include<stdio.h>
int main()
{
	int i,j,k,a[3][2],b[2][3],v[3][3];
	printf("enter the first matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrics");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			v[i][j]=0;
			for(k=0;k<2;k++)
			{
				v[i][j]=v[i][j]+(a[i][k]*b[k][j]);
				
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d		",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}
