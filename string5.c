#include<stdio.h>
int main()
{
	int i,l,u;
	char p[50],q[50];
	printf("enter first string\n");
	gets(p);
	printf("enter second string");
	gets(q);
	for(i=0;p[i]!='\0';i++)
fflush(stdin);
	for(u=0;q[u]!='\0';u++,i++)
	{
		p[i]=q[u];
	}
	
	printf("concatenated string is =%s",p);
}
