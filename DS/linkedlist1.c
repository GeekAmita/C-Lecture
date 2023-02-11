#include<stdio.h>
#include<stdlib.h>

struct node {
    int item;
    struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head) {
    node_t *temp=head;

    while (temp != NULL) {
        printf("-> %d ", temp->item);
        temp=temp->next;
    }
    printf("\n");
}

node_t *create_new_node(int item) {
    node_t *new = malloc(sizeof(node_t));
    new->item = item;
    new->next = NULL;
    return new;
}

node_t *insert_beg(node_t **head, node_t *node_to_insert) {
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}

node_t *find_node(node_t *head, int item) {
    node_t *temp = head;
    while (temp != NULL) {
        if (temp->item == item) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void insert_after_node(node_t *node_to_insert_after, node_t *newnode) {
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}

void main() {
    node_t *head;
    node_t *temp;

    for (int i=0; i<20; i++) {
        temp = create_new_node(i);
        head = insert_beg(&head, temp);
    }

    temp = find_node(head, 15);
    printf("%d\n", temp->item);

    insert_after_node(temp, create_new_node(40));

    printlist(head);

} 
