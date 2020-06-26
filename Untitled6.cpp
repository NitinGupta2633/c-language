#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nenter value of a ,b ,c");
	scanf("%d %d %d",&a,&b,&c);
	printf("\nafter swapping");
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	printf("\nvalue of a=%d",a);
	printf("\nvalue of b=%d",b);
	printf("\nvalue of c=%d",c);
	return 0;
	
	return 0;
	
	
}
