/*To find the greater number between two*/

#include<stdio.h>

int main () {
    int N1, N2;
    printf("\n Enter First Number : ");
    scanf("%d", &N1);

    printf("\n Enter Second Number : ");
    scanf("%d", &N2);
    
    if(N1 > N2) 
    {
        printf("\n %d is greater \n", N1);
    }
    else
    {
        printf("\n %d is greater \n", N2);
    }
    return 0;
}