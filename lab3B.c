#include<stdio.h>
int bin_display( unsigned int input);  // Function that convert Decimal to binary   
int main()   // main fuction
{ 
   unsigned int input ;
	printf("enter the number in decimal form\n");
	scanf("%d",&input);        // taking input
   	printf("\nthe number in decimal form is --- %d\n",input); // displaying the entered decimal number
	 bin_display(input);  // calling the bin_display funtion
}
 
int bin_display( unsigned int input)
{ 
int i;
   printf("the number in the binary form is ---  "); // displaying the bunary form
     
    for (i = 16; i >= 0; i--) { 
        int k = input >> i; 
        if (k & 1) 
            printf("1"); 
        else
            printf("0"); 
    } 
} 

/*

		outputs
		
		
enter the number in decimal form
255

the number in decimal form is --- 255
the number in the binary form is ---  00000000011111111



enter the number in decimal form
3454

the number in decimal form is --- 3454
the number in the binary form is ---  00000110101111110




enter the number in decimal form
23

the number in decimal form is --- 23
the number in the binary form is ---  00000000000010111 



    */
  
