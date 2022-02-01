/*To find the sum & reverse of digits and check is palindrome or not*/
#include<stdio.h>

void main()
{
    int num, temp, remainder, sum = 0, reverse = 0;

    printf("Enter an integer : \n");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        sum = sum + remainder;
        num /= 10;
    }
    
    printf("Given number is = %d \n", temp);
    printf("Sum of digits of the number is = %d \n", sum);
    printf("Reverse of the number is = %d \n", reverse);
    if (temp == reverse)
    {    
        printf("NUMBER IS A PALINDROME \n");
    }
    else
        printf("##NUMBER IS NOT A PALINDROME## \n");
}