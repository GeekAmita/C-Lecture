//Write a program to compute minimum/maximum of a given array

#include <stdio.h>
int main()
{
    int n, i, min, max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("The minimum element of the array is %d\n", min);
    printf("The maximum element of the array is %d\n", max);
    return 0;
}    