#include<stdio.h>
// Function that convert Decimal to binary 
int decToBinary(int input); 

// driver code 
int main() 
{ 
    int input ;
	printf("enter the number in decimal form");
	scanf("%d",&input); 
    decToBinary(input); 
} 
int decToBinary(int input)
{ 
    // Size of an integer is assumed to be 32 bits 
    for (int i = 16; i >= 0; i--) { 
        int k = input >> i; 
        if (k & 1) 
            printf("1"); 
        else
            printf("0"); 
    } 
} 
  
