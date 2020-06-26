#include<stdio.h>
struct student {
	int rollno;
	char name[50];
	int submarks[6];
	
};
int main()
{    int i=0,j=0,k;
	struct student s[5];
	for(i=0;i<=4;i++)
	{
		fflush(stdin);
		printf("enter details of %d student ie. rollno name & marks in all 6 subjects\n",i+1);
		scanf("%d\n",&s[i].rollno);
	    scanf("%s\n",&s[i].name);
	    for(j=0;j<6;j++)
	    {
		scanf("%d\n",&s[i].submarks[j]);
	}
	
}
	for(i=0;i<=4;i++)
	{
		fflush(stdin);
		printf("\n the entered detail of %d student is=\n",i+1);
		printf("rollno=%d\n",s[i].rollno);
		printf("name=%s\n",s[i].name);
       for(j=0;j<=5;j++)
       {
	   
		printf("marks=%d\n",s[i].submarks[j]);
	}
}
}
