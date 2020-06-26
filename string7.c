#include<stdio.h>
int main()
{
	char p[50];
	int i;
	printf("enter a string");
	gets(p);
	for(i=0;p[i]!='\0';i++)
	{  
	fflush(stdin);
	if (p[i]>='A'&& p[i]<='Z')
		{
			p[i]=p[i]+32;
			
		}
		fflush(stdin);

	}
	fflush(stdin);
	printf("string in lowercase=%s",p);
}
