#include<stdio.h>
int main()
{
   char r[50],t[50];
   int i;
   printf("enter a string\n");
   gets(r);
   for(i=0;i!='\0';i++)
   {
   	t[i]=r[i];
   }
   
   printf("\ncopied string is = %s",t);
   return 0;
}

