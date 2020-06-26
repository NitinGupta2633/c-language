#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str1[50];
	printf("enter a string\n");
	gets(str);
	printf("\nreversed string is =%s",strrev(str));
	if(strrev(str)==str)
	{
		printf("\nit is palindrome");
	}
	else
	{
		printf("\nit is not a palindrome");
	}
	
}
