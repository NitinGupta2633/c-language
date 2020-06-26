#include<stdio.h>
float area(float x);
float peri(float y);
int main()
{
	float ar,per,r;
	printf("enter the radius of circle\n");
	scanf("%f",&r);
	ar=area(r);
	per=peri(r);
	printf("\narea==%f",ar);
	printf("\nperi==%f",per);
	return 0;
}
 float area(float x)
{
	return 3.14*x*x;
}
 float  peri(float y)
{
	return 2*3.14*y;
}
