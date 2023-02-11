#include<stdio.h>

int main() {
    int n=2, i, arr[10];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for(i=3; i<10; i++) {
        n++;
        arr[i]+=arr[i]+n;
    }
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}