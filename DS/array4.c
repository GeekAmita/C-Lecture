#include<stdio.h>

int main() {
    int arr[3], newarr[3];
    arr[0]=15;
    arr[1]=10;
    arr[2]=12;
    for(int i=0; i<3; i++) {
        newarr[i]=arr[i];
    }
    for(int i=0; i<3; i++) {
        printf("%d ", newarr[i]);
    }
    return 0;
}