#include <stdio.h>

#define AREA(l, b) (l * b)

void main()
{
	int l1, l2, area;

    printf("\nEnter length of rectangle : ");
    scanf("%d", &l1);
    printf("\nEnter breadth of rectangle : ");
    scanf("%d", &l2);
    
	area = AREA(l1, l2);

	printf("\nArea of rectangle"
		" is: %d\n",
		area);
}
