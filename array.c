#include <stdio.h>
int smallfun(float array[]);
int main()
{
   float array[11];
    int result;
   printf("enter 11 random values\n\n");
   int i=0;
   for(i=0;i<11;i++)
   {
       printf("\n\nenter value %d\n",i+1);
       scanf("%f",&array[i]);
   }
   result=smalllfun(array);
    if(result==-1)
    {
        printf("no values found");
    }
    else
    {
        printf("the second value of array is greater than %d values of array",result);
    }
    return 0;
}
int smalllfun(float array[])
{
    float x,result=0;
    x=array[1];
    int i=0;
    for(i=0;i<11;i++)
    {
        if(x>array[i])
        {
            result++;
        }
    }
    if(result>0)
    {
        return result;
    }
    else
    {
        return -1;
    }
}
/*
				*************************output*******************************
				
				
enter 11 random values



enter value 1
2.342


enter value 2
98.787


enter value 3
45


enter value 4
876


enter value 5
89.768


enter value 6
676.45


enter value 7
565.23


enter value 8
547.35


enter value 9
10.0


enter value 10
54


enter value 11
656.56
the second value of array is greater than 5 values of array
				
			
					
*/
