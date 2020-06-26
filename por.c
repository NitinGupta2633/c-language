
#include<stdio.h>
int main()
{
    float a;
    int b;
    printf("enter a three digit number upto two decimal places");
    scanf("%f",&a);
    b=a;
    printf("%d\n",b%10);
    printf("%d\n",b%100);
    printf("%d\n",b%1000);
    return 0;
}

