#include<stdio.h>

int main() {
    int arr[3], duplicate=0;
    arr[0]=5;
    arr[1]=1;
    arr[2]=1;
    for(int i=0; i<3; i++) {
        for(int j=i+1; j<3; j++) {
            if(arr[i]==arr[j]) {
                duplicate++;
            }
        }
    }
    printf("%d", duplicate);
    return 0;
}