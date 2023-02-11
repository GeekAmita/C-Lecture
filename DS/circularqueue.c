#include<stdio.h>
#include<stdlib.h>

struct node {
    int item;
    struct node* value;
};
struct node *front = NULL;
struct node *rear = NULL;

void inqueue(int a) {
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->item = a;
    n->value = NULL;
    if((rear==NULL)&&(front==NULL)) {
        front = rear = n;
        rear->value = front;
    }
    else {
        rear->value = n;
        rear = n;
        n->value = front;
    }
}

void delqueue() {
    struct node* d;
    d = front;
    if((front==NULL)&&(rear==NULL)) {
        printf("\nQueue is empty");
    }
    else if(front==rear) {
        front = rear = NULL;
        free(d);
    }
    else {
        front = front->value;
        rear->value = front;
        free(d);
    }
}

void print() {
    struct node* d;
    d = front;
    if((front==NULL)&&(rear==NULL)) {
        printf("\nQueue is Empty");
    }
    else {
        do{
            printf("\n%d", d->item);
            d = d->value;
        } while (d != front);
    }
}

int main() {
    int opt, n, i, data;
    printf("\nEnter Your Choice:-");
    do{
        printf("\n\n1. for Insert the Data in Queue\n2. for Show the Data in Queue\n3. for Delete the Data from the Queue\n4. for the Exit\n");
        scanf("%d", &opt);
        switch(opt) {
            case 1:
                printf("\nEnter the number of data you want to insert in the Queue: ");
                scanf("%d", &n);
                printf("\nEnter the data: ");
                for(i=0; i<n; i++) {
                    scanf("%d", &data);
                    inqueue(data);
                }
                break;
            case 2:
                print();
                break;
            case 3:
                delqueue();
                break;
            case 4:
                break;
            default:
                printf("\nInvalid Input");
        }
    } while(opt!=4);
    return 0;
}