#include<stdio.h>
int main()
{
	int i,j,l=0;
	char p[50],q[50];
	printf("enter a string\n");
	gets(p);
    for(i=0;p[i]!='\0';i++)
    {
    l++;
	fflush(stdin);
	for(j=l-1;q[j]<=0;l--)
	{
		q[l]=p[j] ;
	}
}

printf("reversed string=%s",q);
}
