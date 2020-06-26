#include<stdio.h>
int main()
{ 
    FILE  *fp ;
    char  ch ;    
    fp = fopen ("myfile.txt", "r") ; 
   ch=getchar();
   while ( 1 ) 
{   
   ch=fgetc( fp ) ; 
   if (ch==EOF)   
   break; 
   printf( "%c", ch ); 
}
   fclose ( fp );
} 
