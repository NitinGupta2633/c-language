#include<stdio.h>
int multi(int x, float y);
int main()
{
	int x;
	float y,z;
	printf("enter 2 no");
	scanf("%d",&x);
	scanf("%f",&y);
	z=multi(x,y);
	printf("%f",z);
}
int multi(int x, float y)

{  float multi;
    multi=x*y;
    return multi;
}
	
