#include<stdio.h>
int main()
{
	 int i,n,t=0,f=0;
   float  array[1000],total=0,avg;
   printf("enter the no of student whose you want to enter ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&array[i]);
	}
	fflush(stdin);
	printf("marks u have enter\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
		total=total+array[i];
	}
	avg=total/n;
	printf("total marks=%.2f\n",total);
	printf("avg=%d\n",avg);
	for(i=0;i<n;i++)
	{
		if(array[i]>avg)
		{
			t++;
		}
		else
		f++;
		}
	printf("no of student who got marks above below are=%d",t);
	printf("\nno of students whose masks are below avg are=%d ",f);
	
	
	 	
}
