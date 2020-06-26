#include<stdio.h>
float add(float x,float y);
float diff(float a,float b);
float multi(float c,float d);
float divide(float e ,float f);


int main()
{
	int choice;
	float num1, num2, result;
	printf("select an opreator");
	
	printf("\n1.addition	2.subtraction	3.multiplicaton	  4.divide  ");
	scanf("%d",&choice);
    printf("enter first digit");
    scanf("%f",&num1);
    printf("enter value of second digit ");
    scanf("%f",&num2);
    switch(choice)
    {
    	case 1: 
		
		result=add(num1,num2);
    	printf("sum=%f",result);
    	
		break;
	case 2:
		
	     result=diff(num1,num2);
		printf("diff=%f",result);
		break;
	
		case 3:
			
			result=multi(num1,num2);
			printf("multiplication=%f",result);
			
			break;
			case 4: 
			
			result=divide(num1,num2);
			printf("divide=%f",result);
	
	   
		break;
	
		default:
			printf("wrong choice");
			
		}
		return 0;
	}
	float add(float x,float y)
	{
	
		return x+y;
		
	}
	float diff(float a,float b)
   {
   	return a-b;
   	
   }
   float multi(float c,float d)
   {
   	return c*d;
   	
   }
   float divide(float e, float f)
   {
   	
   	return e/f;
   }


   


