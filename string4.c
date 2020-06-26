#include<stdio.h>
int main()
{
	
	char i, p[50],f[50];
	printf("enter a string\n");
	gets(p);
	for(i=0;p[i]!='\0';i++)
    {
    	f[i]=p[i];
	

	fflush(stdin);
}
	printf("copied string is = %s",f);
	return 0;
}
