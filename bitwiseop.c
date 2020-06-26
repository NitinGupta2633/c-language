#include<stdio.h>
#include<math.h>
void bin_display(unsigned int input);
int main()
{
	unsigned input;
   printf("enter a decimmal number");
   scanf("%d",&input);
   bin_display(input);
}
void bin_display(unsigned int input)
{
	unsigned char i, mask=0x7f;
	for(i=0;i<=8;++i)
	{
		if(input & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		mask = mask>>1;
	}
}
