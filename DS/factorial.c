#include<stdio.h>

int main()
{
    int sum=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {   
        int k=i;
        for (int j = 1; j <= i; j++)
        {
            k=k*j;
        }
        printf("%d! = %d\n",i,k);
        sum=sum+k;    
    }
    printf("The sum is: %d",sum);    

    return 0;
} 
