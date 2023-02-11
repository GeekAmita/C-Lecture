// Write a menu-based program to perform operations on Linear Array: 
//     i) Insert an element at the Kth Position.
//     ii) Delete an element from the Kth Position.
//     iii) Traverse an array element.

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, choice, k, data;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("1-Insert an element at the Kth Position\n2-Delete an element from the Kth Position\n3-Traverse an array element\nEnter your choice(1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter the position at which you want to insert the element: ");
            scanf("%d", &k);
            printf("Enter the element you want to insert: ");
            scanf("%d", &data);
            for (i = n; i >= k; i--) {
                a[i] = a[i - 1];
            }
            a[k - 1] = data;
            n++;
            printf("The array after insertion is: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Enter the position from which you want to delete the element: ");
            scanf("%d", &k);
            for (i = k - 1; i < n; i++) {
                a[i] = a[i + 1];
            }
            n--;
            printf("The array after deletion is: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("The array is: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}