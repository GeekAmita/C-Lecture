#include<stdio.h>

int main() {
    int arr[4], freq[4];
    arr[0]=3;
    arr[1]=2;
    arr[2]=2;
    arr[3]=5;
    for(int i=0; i<4; i++) {
        int count=1;
        for(int j=i+1; j<4; j++) {
            if(arr[i]==arr[j]) {
                count++;
                freq[j]=4;
            }
        }
        if(freq[i]==0) {
            freq[i]=count;
        }
    }
    for(int i=0; i<4; i++) {
        if(freq[i]==1) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}