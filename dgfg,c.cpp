#include<stdio.h>

int main()
{
	char str1[50],str2[50];
	printf("enter a string");
	gets(str1);
	
	strcpy(str2,str1);`
	
	printf("\ncopied string is %s",str1);
}
