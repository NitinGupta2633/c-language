#include<stdio.h>
#include<math.h>
int main()
{
	int d,x,y,z=0,s,c=1,n=0;
	printf("enter a number  in binary form");
	scanf("%d",&x);
	while(x!=0)
	{   
		y=x%10;
		z=z+pow(2,n)*y;
		x=x/10;
		n++;
		
	
	}
	printf("decimal no=%d",z);
	return 0;
}
