#include<stdio.h>
#include<string.h>
union student
{
	int rollno;
	char name[50];
	int marks;
};
int main()
{
	union student s1;
	union student s2;
	printf("enter data\n");
	scanf("%d",&s1.rollno);
	scanf("%s",&s1.name);
	scanf("%d",&s1.marks);
	printf("%d\n%d",s1.rollno,s1.marks);
}

