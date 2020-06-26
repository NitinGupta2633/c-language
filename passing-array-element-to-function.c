#include<stdio.h>
void show(int element);
void main()
{
	int marks[5]={10,20,30,40,50};
	
	show(marks[2]);

}
void show(int element)
{
	printf("value is =%d",element);
}
