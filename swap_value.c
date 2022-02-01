/*To implement call by value*/
#include <stdio.h>

void swap( int var1, int var2 )
{
    int temp ;
    temp = var1 ;
    var1 = var2 ;
    var2 = temp ;
    printf("\nAfter swapping:: Number 1= %d, Number 2= %d\n", var1, var2);
}

void main()
{
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("\nEnter Number 2: ");
    scanf("%d", &num2);
    swap(num1, num2);
}