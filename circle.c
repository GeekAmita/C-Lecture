//To find circumference and area of a Circle.//

#include<stdio.h>

float pie = 3.14;

int main() {
    float radius, area, circumference;
    printf("\n Enter the radius of Circle : ");
    scanf("%f", &radius);
    area = pie * radius * radius;
    circumference = 2 * pie * radius;
    printf("\n Area of Circle : %f \n Circumference of Circle : %f \n", area , circumference);
    return (0);

}