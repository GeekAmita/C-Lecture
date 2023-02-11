#include<stdio.h>

int calculator(int n1, int n2, int x) 
{
    switch (x) 
    {
    case 1:
        int sum = n1 + n2;
        printf("Addition: %d", sum);
        break;
    
    case 2:
        int sub = n1 - n2;
        printf("Substraction: %d", sub);
        break;

    case 3:
        int product = n1 * n2;
        printf("Product: %d", product);
        break;

    case 4:
        float div = n1 / n2;
        printf("Division: %f", div);
        break;

    default:
            printf("\n ##WRONG INPUT## \n");
    }
        return 0;
}

int main()
{
    int a, b, c;
    
    printf("Addition:1 \nSubstraction:2 \nMultiplication:3 \nDivision:4 \nEnter number (1-4): ");
    scanf("%d", &c);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    calculator(a, b, c);

    return 0;
}