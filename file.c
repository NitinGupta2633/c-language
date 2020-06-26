#include<stdio.h>
int main()
{ 
    FILE *fp;
    char ch;    
    fp = fopen ("calculator.C","r"); 
    while (1) 
  {   
  ch=fgetc(fp); 
  if(ch==EOF)   
  break; 
  printf("%c",ch); 
   } 
 fclose(fp);
  } 
  
