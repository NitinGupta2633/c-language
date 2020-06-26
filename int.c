#include<stdio.h>
#include<math.h>
int main()
{
	
	float a,b,c,d,e,f,g,h,i,j;
	printf("enter the principal amount\n");
	printf("enter rate of interest\n");
	printf("enter time in months\n");
	printf("enter no times the interest  shoud be compounded(for compund interest)\n");
	scanf("%f%f%f%f",&a,&b,&c,&f);
	d=a*b*c/100;
	e=c*f;
	g=(1+b/c*0.01);
        h=pow(g,e);
	i=a*h;
	j=i-a;
	printf("simple interest=%f\n",d);
	printf("compound interest =%f\n",j);	
	return 0;
}

