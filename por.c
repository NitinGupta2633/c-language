#include<stdio.h>
#include<string.h>
int main()
{

char aa[19];
char *bb[22];
char cc[22][19]={"Example", " String 1 ", "Words"};
int xx, yy;

 
strcpy(aa,cc[1]) ;
xx=strlen(aa);
yy=xx*sizeof(char);
bb[1]=(char *)malloc(yy) ;
printf("\n\n%d",xx);
xx=sizeof((char *)malloc(yy));
printf("\n\n%d",xx);
}


