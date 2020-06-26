#include<stdio.h>
#include<string.h>
struct student
{
	struct std
	{
		char name[50];
		 int rollno;
	}s;
	
	 int clase;
	 int mobile;
};
int main()
{    struct student s1;
	printf("enter your name,class,mobile.no,rollno\n");
	scanf("\n%s",&s1.s.name);
	
	scanf("\n%d",&s1.clase);
	scanf("\n%d",&s1.mobile);
	scanf("\n%d",&s1.s.rollno);
	
	printf("your name is=%s",s1.s.name);
	printf("\nyour class is =%d",s1.clase);
	printf("\nyour mobile no is=%d",s1.mobile);
	printf("\nyour roll no is =%d",s1.s.rollno);
}
