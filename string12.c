#include<stdio.h>
int main()
{
	int i,j=0,k=0;
	char p[5000];
	printf("enter a string ");
	gets(p);
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]==' '&&p[i]=='  ')
		{
			j++;
		}
		
	}
  k=j+1;
	printf("no of word=%d",k);
}
