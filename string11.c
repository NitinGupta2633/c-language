#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countSpace(char *s[]);
void main()
{
   char message[60];
   int spaces;
   printf("\nPls enter a message with 25 to 59 characters: ");
   gets(message);
   spaces = countSpace(message);
   printf("\nThe number of spaces in the message is: %d", spaces);
}
int countSpace(char *s[])
{
    int space;
    space =0;
    int i;
    for(i=0;s[i]!='\0';i++)
    {
    
        if(s[i]==' '&&s[i]==' ')
        {
        	printf("44");
        	
            space++;
        }
    }
    return space;
}
