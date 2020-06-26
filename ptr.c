#include<stdio.h>
int main()
{
	int y=8, *j;
	 int 
	 j=&y;

	printf("value of y=%u",y);
    printf("add of y is %u",*y);
    printf("value of y=%u",**y);
    printf("add of y=%u",j);
    printf("value of y=%u",*j);
    return 0;
}
