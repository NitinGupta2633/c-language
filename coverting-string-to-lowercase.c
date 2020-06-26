#include<stdio.h>
int main()
{
   char r[50],t[50],i;
   printf("enter a string\n");
   scanf("%s",&r);
   for(i=0;i!='\0';i++)
   {
   	t[i]=r[i];
   }
   
   printf("\ncopied string is = %s",t);
   return 0;
}

