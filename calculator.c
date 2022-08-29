#include<stdio.h>

int main()
{
    int n1, n2, i;

    printf("Choose: \n1:+ \n2:- \n3:* \n4:/ \nEnter number 1-4: ");
    scanf("%d", &i);

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (i=1) 
    {
        int sum = n1 + n2;
        printf("Addition: %d", sum);
    }
    else if (i=2)
    {
        int sub = n1 - n2;
        printf("Substraction: %d", sub);
    }
    else if (i=3)
    {
        int product = n1 * n2;
        printf("Product: %d", product);
    }
    else if (i=4)
    {
        float div = n1 / n2;
        printf("Division: %f", div);
    }
    else
    {
        printf("## WRONG INPUT ##");
    }
    
    return 0;
}