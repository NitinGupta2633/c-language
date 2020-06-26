#include<stdio.h>
#include<conio.h>
int main()
{
	int p[100],x,z,max,min;
	printf("enter size of array");
	scanf("%d",&z);
	printf("enter the element");
	for(x=0;x<z;x++)
	{
		scanf("%d",&p[x]);
		
	}
	min=max=p[0];
	for(x=0;x<z;x++)
	{
		if(min>p[x])
	{
			min=p[x];
		}
		 if (max<p[x])
	    {
		max=p[x];}
	}
	printf("largest aray=%d",max);
	printf("smallest array=%d",min);
	return 0;
	}
	
	

