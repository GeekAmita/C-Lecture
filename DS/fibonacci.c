#include<stdio.h>

int main() {
    int n1 = 0, n2 = 1, n3, i, fib[10];
    fib[0]=n1;
    fib[1]=n2;
    for(i=2; i<10; i++) {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        fib[i]+=fib[i]+n3;
    }
    for(i=0; i<10; i++) {
        printf("%d ", fib[i]);
    }
    return 0;
} 
