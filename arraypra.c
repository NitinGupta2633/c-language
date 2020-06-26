#include<stdio.h>
int main()
{
	int x[10],y,z,i;
	printf("enter element of array ");
	for(i=0;i<10;i++)
	{
		scanf("\n%d",&x[i]);
		
	}
	printf("enter the element for which u r looking for");
	scanf("%d",&y);
	for(i=0;i<=9;i++)
	{
		if(x[i]==y)
		{
			printf("the entered element is %d and is entered on %d no\n",y,i+1);
		}
		
	else
		{
			printf("this number is not in the series");
		}
	}
}
