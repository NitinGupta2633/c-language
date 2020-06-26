#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("enter basic salary");
	scanf("%f",&a);
	b=a*0.5;
	c=a*0.2;
	d=a*0.1;
	e=a+b+c+d;
	printf("\ndream allowance=%f",b);
	printf("\nhouse rent allowance=%f",c);
	printf("\nvehical allowance=%f",d);
	printf("\ngross salary=%f",e);
	return 0;
	
}
