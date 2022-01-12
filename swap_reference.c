#include <stdio.h>

void swapnum ( int *var1, int *var2 )
{   
    int temp ;
    temp = *var1 ;   
    *var1 = *var2 ;   
    *var2 = temp ;
}

int main()
{   
    int num1 , num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("\nEnter Number 2: ");
    scanf("%d", &num2);
   
    swapnum( &num1, &num2 );   
    printf("\nAfter swapping:");   
    printf("\nNumber 1= %d", num1);   
    printf("\nNumber 2= %d\n", num2);   
    return 0;
}