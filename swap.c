#include<stdio.h>
int main()
{
	int a,b;
	printf(" \nenter value of a=");
	scanf("%d",&a);
	printf("\nenter value of b= ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping");
	printf("\nvalue of a=%d",a);
	printf("\nvalue of b=%d",b);
    
}
