#include<stdio.h>
#include<math.h>
int main()
{
  int x,y,z=0,n=0;
  printf("enter a number");
  scanf("%d",&x);
  	while(x!=0)
  	{
  		y=x%8;
  		x=x/8;
  		z=z+y*pow(10,n);
  		n++;
	  }
	  printf("binary no =%d",z);
	  return 0;
}
