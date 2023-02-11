#include<stdio.h>

struct student {
    int roll;
    char name[20];
}s[5],temp;

void main() {
    for(int i=0; i<5; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll);
    }
    for(int i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(s[j].roll<s[i].roll) {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp; 
            }
        }
    }
    for(int i=0; i<5; i++) {
        printf("Name: %s \nRoll no.: %d\n", s[i].name, s[i].roll);
    }

}
