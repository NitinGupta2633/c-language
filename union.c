#include<stdio.h>
union student{
	int rollno;
	char name[50];
	int marks;
};
int main()
{
	union student s1;
	printf("enter roll.no,name,marks");
	scanf("%d",&s1.rollno);
	scanf("%s",&s1.name);
	scanf("%d",&s1.marks);
	printf("%d , %s , %d",s1.rollno,s1.name,s1.marks);
}
