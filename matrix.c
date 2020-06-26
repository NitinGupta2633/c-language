#include<stdio.h>
int main()
{
	int x[3][3],y[3][3],z[3][3],r,c;
	printf("enter elements of matrics");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			scanf("%d",&x[r][c]);
		}
	}
	printf("\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			scanf("%d",&y[r][c]);
		}
	}
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			z[r][c]=x[r][c]+y[r][c];
		  printf("%d",z[r][c]);
		}
		printf("\n");
	}
}

