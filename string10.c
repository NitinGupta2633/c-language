#include<stdio.h>
int main()
{
	char p[1000],x;
	int i,j=0;
	printf("enter a  string\n");
	gets(p);
	printf("enter a character whose frequency you want to know\n");
	scanf("%c",&x);
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]==x)
		{
			j++;
			
		}
	}
	printf("frequency of %c is %d\n",x,j);
}
