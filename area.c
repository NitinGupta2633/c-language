#include<stdio.h>
#include<math.h>
int main()
{
   int x,y;
   float z,num1,num2;	
 
  printf("what do you want to find \n 1. area \n 2. perimeter");
  scanf("%d",&x);
  printf("for which shape-\n1.circle\n2.rectangle\n3.square");
  scanf("%d",&y);
  switch (x)
  {
  	case 1: area();
  	break;
  	case 2: perimeter();
    break;
  }
  {
  	printf("result=%f",z);
  }
  
}
{
	int y;
	float square-a()
	{
		float side ,result;
		printf("enter side of square");
		scanf("%f",&side);
		result=side*side;
		return result;
		
	}
	float rectangle-a()
	{
		float l,b,result;
		printf("enter lenght and breadthe of rectangle");
		scanf("%f%f",&l,&b);
		result=l*b;
		return result;
		
	}
	float circle-a()
	{
		float r,result;
		printf("enter readius of circle");
		scanf("%f",&r);
		result=3.14*r*r;
		return result;
		
	}
	float  sqaure-p()
	{
		float side,result;
		printf("enter side of square");
		scanf("%d",&side);
		result=4*side;
		return result;
		
	}
    float rectangle-p()
    
    {
    	float l,b,result;
    	printf("enter length and breadthe  oh rectangle");
    	scanf("%f%f",&l,&b);
    	result=2*(l+b);
    	return result;
    	
	}
	float circle-p()
	{
		float r,result;
		printf("enter radius of circle");
		scanf("%f",&r);
		result=2*3.14*r;
		return result;
		}

void area()
{
	float result;
	switch (b)
	{
		case 1: result=circle-a()
		printf("result=%f",result);
		break;
		case 2: result=rectangle-a()
		printf("result=%f",result);
		break;
		case 3: result=square-a()
		printf("result=%f",result);
		break;
		
	}
		
		}		
void perimeter()
{
	float result;
	switch (b)
	{
		case 1: result=circle-p()
		printf("result=%f",&result);
		break;
		case 2:result=rectangle-p()
		printf("result=%f",&result);
		break;
		case 3:
		
	}
}
}
