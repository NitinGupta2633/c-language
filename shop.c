#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("enter no of pens");
	scanf("%d",&a);
	printf("enter no of pencil");
	scanf("%d",&b);
	printf("enter no of sharpner");
	scanf("%d",&c);
	d=a*10;
	e=b*5;
	f=c*2;
	g=d+e+f;
	h=17;
	printf("\nitem			  price(rs)		total(rs)");
	printf("\npen			     10			  %d",d);
	printf("\npencil	       		     5			  %d",e);
	printf("\nsharpner	    	     2			  %d",f);
	printf("\ngrand total	      	    %d	   	 %d",h,g);
}
