#include<stdio.h>
int fact(int x);
int psn(int a,int b);
int main()
{
	int x,y,end,start,z;
	printf("enter the lower limit ");
	scanf("%d",&start);
	printf("enter the upper limit ");
	scanf("%d",&end);
	psn(start,end);
	return 0;
}
int psn(int a,int b)
{
	int num,sum;
	while(a!=b)
	{
		sum=0;
		num=a;
		}while(num!=0)
		{
			sum=sum+fact(num%10);
			num=num/10;
		}
		if(a==b)
		{
			printf("%d",a);
		  a++;
		}
		
	}
int fact(int x)
{
	if(x==0||x==1)
	{
		return 1;
	}
	else
	return (x*fact(x-1));
}
