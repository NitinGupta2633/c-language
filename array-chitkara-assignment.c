#include<stdio.h>
int main()
{
	int p[100],x,g=0;
	printf("enter no element which you want to enter");
	scanf("%d",&x);
	printf("enter the elements");
	fflush(stdin);
	for(g=0;g<x-1;g++)
	{
		scanf("%d	",&p[g]);
}
for(g=0;g<x;g++)
{

   printf("element %d  is %d\n",g,p[g]);
}
}

