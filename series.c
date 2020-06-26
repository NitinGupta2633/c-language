#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	printf("enter the no of terms u want to print");
	scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
    	z=pow(3,y);
    	z=z+1;
    	printf("%d\n",z);
	}
}
