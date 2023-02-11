// Write a program to implement the following dynamic memory allocation functions:
//     i) malloc()
//     ii) calloc()
//     iii) realloc()
//     iv) free()

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *ptr1, *ptr2;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    printf("The elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    ptr1 = (int *)calloc(n, sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr1 + i);
    }
    printf("The elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n");
    ptr2 = (int *)realloc(ptr, 2 * n * sizeof(int));
    printf("Enter the elements: ");
    for (i = n; i < 2 * n; i++) {
        scanf("%d", ptr2 + i);
    }
    printf("The elements are: ");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");
    free(ptr);
    free(ptr1);
    free(ptr2);
    return 0;
}