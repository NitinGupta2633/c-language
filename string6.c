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
	if (p[i]>='a'&& p[i]<='z')
		{
			p[i]=p[i]-32;
			
		}
		fflush(stdin);

	}
	fflush(stdin);
	printf("string in uppercase=%s",p);
}
