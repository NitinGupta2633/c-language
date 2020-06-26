#include<stdio.h>
int count( int x);
int main()
{
	int x,y;
	printf("enter the no");
	scanf("%d",&x);
	y=count(x);
    printf("no of digits in the entered no=%d",y);
}
int count(int x)
{
	int y=0;
	if(x!=0)
	{
		y++;
		count(x/10);
	}
	return y;
	

}
