// Write a program to perform following operations in matrix:
//     a. Addition
//     b. Subtraction
//     c. Multiplication
//     d. Transpose

#include <stdio.h>
int main()
{
    int m, n, i, j, k, choice;
    printf("Enter the number of rows and columns of the matrix: \n");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Transpose\nEnter your choice(1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("The sum of the two matrices is: \n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }
            printf("The difference of the two matrices is: \n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    c[i][j] = 0;
                    for (k = 0; k < n; k++) {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            printf("The product of the two matrices is: \n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;
        case 4:
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    c[i][j] = a[j][i];
                }
            }
            printf("The transpose of the first matrix is: \n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    c[i][j] = b[j][i];
                }
            }
            printf("The transpose of the second matrix is: \n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}    