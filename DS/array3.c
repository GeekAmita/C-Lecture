#include<stdio.h>

int main() {
    int arr[3], sum=0;
    arr[0]=2;
    arr[1]=5;
    arr[2]=8;
    for(int i=0; i<3; i++) {
        sum=sum+arr[i];
    }
    printf("%d\n", sum);
    return 0;
}