#include<stdio.h>
int main()
{
	int r1,s1,c1, r,c,s,r2,c2,s2,s3,r3,c3,c4,r4,s4,s5,r5,c5;
	for(c=1;c<=8;c++)
	{
		printf("*");
	
		
		for(r=1;r<=5;r++)
		{
			if(c==1)
			{
				printf("*");
			}
			else if(c==4)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
	
	}
	for(r1=1;r1<=6;r1++)
	{
		for(s1=1;s1<=2;s1++)
		{
			printf(" ");
		}
		
	}
	for(c1=1;c1<=1;c1++)
	{
		printf("*");
		
	}
	if(c==8)
	{
	for(r2=1;r2<=7;r2++)
	{
	   printf("*");
	}
	}
	for(s2=1;s2<=6;s2++)
	{   if(c<8)
		{
		printf(" ");
	
	}
	}
	for(c2=1;c2<=1;c2++)
	{
		if(c<8)
		{
		printf("*");
	}
}
  for(c3=1;c3<=6;c3++)
  {
  	for(s3=1;s3<=2;s3++)
  	{
  		printf(" ");
	  }
  }
  for(r4=1;r4<=1;r4++)
  {
  	printf("*");
  }
  for(r3=1;r3<=1;r3++)
  {
  	for(c4=1;c4<=8;c4++)
  	{   if(c==1)
  	{
	  	printf("*");
  }
  else if(c==8)
  {
  	printf("*");
  }
  else
  {
  	printf(" ");
  }
  }
}
for(s4=1;s4<=1;s4++)
{
	for(c5=1;c5<=9;c5++)
	{
		printf(" ");
		
	}
	
printf("*");
if(c==1)
{
	printf("      *");
}
else if(c==2)
{
	printf("    *");
	
}
else if(c==3)
{
	printf("  *");
}
else if(c==4)
{
	printf(" *");
}
else if(c==5)
{
	printf("  *");
}
else if(c==6)
{
	printf("    *");
	
}

else if(c==7)
{
	printf("      *");
}

else if(c==8)
{
	printf("        *");
}
	printf("\n");
}

}
}


 

