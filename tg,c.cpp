#include<stdio.h>
 int main()
 {
 	int  s[2][3] ,r,c;
 	printf("enter element of matrices");
 	
 	for(r=0;r<2;r++)
 	{
 		for(c=0;c<3;c++)
 		{
 			scanf("%d",&s[r][c]);
		 }
	 }
	 for(r=0;r<2;r++)
 	{
 		for(c=0;c<3;c++)
 		{
 			printf("%d   ",s[r][c]);
		 }
	 	printf("\n");
	 	
	 }
	    
	 
	 	 return 0;
 }
 
 

