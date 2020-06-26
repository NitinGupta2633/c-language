#include<stdio.h>
int main()
{
  int x,y,a[1000],b[1000],c[2000],i;
  printf("how much elemen");
  scanf("%d%d",&x,&y);
  printf("enter elemets of a&b array");
  for(i=0;i<x;i++)
  {
   scanf("%d",&a[i]);
}
for(i=0;i<y;i++)
{
	scanf("%d",&b[i]);
	
}
for(i=0;i<x;i++)
{
	c[i]=a[i];
}
for(i=0;i<y;i++)
{
	c[i+x]=b[i];
}
for(i=0;i<y+x;i++)
{
	printf("%d",c[i]);
}
}
