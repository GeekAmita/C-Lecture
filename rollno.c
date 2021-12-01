#include <stdio.h>

int main(){
    int rollNo;
    float marks;

    printf("Enter Roll no. :\n");
    scanf("%d", &rollNo);
    printf("Enter Marks: \n");
    scanf("%f", &marks);
    printf("Roll No.: %d got %f Marks \n", rollNo,marks);

    return 0;
    
    }