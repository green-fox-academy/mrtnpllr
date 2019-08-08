#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H


#define bool int
#define TRUE 1
#define FALSE 0

typedef struct node
{
    int data;
    struct node *next;
} node_t;

void init(node_t **head);

void push_back(node_t **head, int data);

void push_front (node_t** head, int data);

void insert(node_t** head, int data, node_t* existing_node);

int size(node_t** head);

bool empty(node_t** head);

void print(node_t *head);

char* bool_alpha(int boolean);


#endif
