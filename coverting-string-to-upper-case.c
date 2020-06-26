#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str1[50];
	printf("enter a string\n");
	gets(str);
	printf("\nafter converting the string to lower case = %s",strupr(str));

}
