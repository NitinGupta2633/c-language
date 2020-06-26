#include<stdio.h>
int main()
{
	int x;
	printf("enter the temp in celsius");
    scanf("%d",&x);
    if(x<0)
    {
    	printf("freezing weather");
	}
	else if(x>=0&&x<10)
	{
		printf("very cold weather");
			}
			else if(x>=10&&x<20)
			{
				printf("cold weather");
			}
          else if(x>=20&&x<30)
          {
          	printf("normal weather");
		  }
		  else if(x>=30&&x<40){
		  	printf("hot");
		  	
		  }
		  else if(x>=40)
		  {
		  	printf("very hot");
		  }
}
