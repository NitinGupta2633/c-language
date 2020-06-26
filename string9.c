#include<stdio.h>
int main()
{
	int x,y,z,l=0;
	char p[50],q[50];
	printf("enter a string\n");
	gets(p);
	for(x=0;p[x]!='\0';x++)
	{
          l++;	
}
	z=l-1;
	for(y=0;y<=l;y++,z--)
    {
    	
    	q[y]=p[z];
    	
}
fflush(stdin);
printf("reversed string is=%s ",q);

}
