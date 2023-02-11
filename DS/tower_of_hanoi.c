#include<stdio.h>

void towers(int, char, char, char);

void main() {
    int n;
    scanf("%d", &n);
    towers(n, 'A', 'C', 'B');
}

void towers(int n, char from, char to, char temp) {
    if (n==1) {
        printf("Moved disk1 from %c to %c", from, to);
    }
    else {
        towers(n-1, from, temp, to);
        printf("Moved disk %d from %c to %c", n, from, to);
        towers(n-1, temp, to, from);
    }
}