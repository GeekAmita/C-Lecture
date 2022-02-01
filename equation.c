/*To find roots of a quadratic equation*/
#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("\n Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\n Two distinct real roots exists : root1 = %.2f and root2 = %.2f \n", root1, root2);
    }

    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("\n Two equal and real roots exists : root1 = root2 = %.2f \n", root1);
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("\n Two distinct complex roots exists : root1 = %.2f+%.2fi and root2 = %.2f-%.2fi \n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
