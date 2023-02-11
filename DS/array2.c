#include<stdio.h>

int main() {
    int arr[3];
    arr[0]=2;
    arr[1]=5;
    arr[2]=7;
    for(int i=0; i<3/2; i++) {
        int temp=arr[i];
        arr[i]=arr[2-i];
        arr[2-i]=temp;
    }
    for(int i=0; i<3; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}