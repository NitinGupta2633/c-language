#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("ENTER A NUMBER\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}

if(sum==num)
	printf("PERFECT NUMBER");
else
	printf("NOT A PERFECT NUMBER");
}

