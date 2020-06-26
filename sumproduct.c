#include<stdio.h>
int main()
{
	int r,x,y,z,sum,product;
	printf("enter a three digit number");
	scanf("%d",&x);
	y=x%10;
    z=(x/10)%10;
    r=(x/100)%10;
    sum=y+z+r;
    product=y*z*r;
    printf("sum=%d",sum);
    printf("product=%d",product);
    return 0;
    

}
