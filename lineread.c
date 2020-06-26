#include<stdio.h>

int main()
{ 
    FILE  *fp ;
    char  line[100 ] ;    
    fp = fopen ("calculator.C", "r") ; 
 	
 while (fgets(line,100,fp)!=NULL) 
 
  {   
 	  puts( line ); 
   } 
 
 fclose ( fp );
  } 
