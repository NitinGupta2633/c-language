#include<stdio.h>
int main()
{
	int r,c,s,j;
	for(r=1;r<=5;r++)
	{
	   for(s=4;s>=r;s--)
	   {
	   	printf(" ");
	    }	
	    for(c=1;c<=2*r-1;c++)
	    {
	    	if(c%2!=0)
	    	{
			printf("%d",2*r-1);
	      	}
	      	else
	      	{
	      		printf("%d",2*r-2);
			  }
		}
		printf("\n");
	}
}
