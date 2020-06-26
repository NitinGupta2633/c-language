#include<stdio.h>
int main()
{
	char p[50],q[50];
    int i;	
	printf("enter a string");
	gets(p);
	fflush(stdin);
	for(i=0;p[i]!='\0';i++)
	{
		q[i]=p[i];
	}
	printf("copied string is =%s",q);
	
}
