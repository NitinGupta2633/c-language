#include<stdio.h>
void show(int array[]);
void main()
{
	int marks[5]={10,20,30,40,50};
	show(marks);
}
void show(int array[])
{
	int x;
	for(x=0;x<5;x++)
	{
		printf("%d	",array[x]);
	}
}
