#include<stdio.h>
#include<math.h>
int main()
{
	
	float a,b,c,d,s,A;
	printf(" enter value of three sides of triangle ");
	scanf("%f%f%f",&a,&b,&c);
    s=a*0.5+b*0.5+0.5*c;
	d=s*(s-a)*(s-b)*(s-c);
	A=sqrt(d);
	printf("area of traingle is=%f",A);
	
		
	
	return 0;
}
