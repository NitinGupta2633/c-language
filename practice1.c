#include<stdio.h>
int main()
{
	char p[50],q[20];
	int l=0,i;
	printf("enter the string in upper case\n");
	gets(p);
	for(i=0;p[i]!='\0';i++)
	{
		p[i]=(p[i])-32;
	}
	printf("string in lower case is %s",p);
}
