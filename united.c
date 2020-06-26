#include<stdio.h>
int main()
{
	char str[50];
	int l,i;
	printf("enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("lenght of string=%d\n",l);
}
