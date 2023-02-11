/*To check wheather a number is armstrong or not*/
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       remainder = originalNum % 10;

       result += remainder * remainder * remainder;
        
       originalNum /= 10;
    }

    if (result == num)
        printf("\n%d is an Armstrong number. \n", num);
    else
        printf("\n##%d is not an Armstrong number.## \n", num);

    return 0;
}
