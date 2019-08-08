#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

void init(node_t **head)
{
    *head = NULL;
}

void push_back(node_t **head, int data)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    node_t *p = *head;
    while (p->next != NULL) {
        p = p->next;
    }

    p->next = new_node;
}

void push_front(node_t **head, int data)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void insert(node_t** head, int data, node_t* existing_node)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->next = existing_node->next;
    new_node->data = data;
    existing_node->next = new_node;
}

int size(node_t** head)
{
    int number_of_nodes = 1;
    node_t *counter_pointer = *head;
    while (counter_pointer->next != NULL) {
        counter_pointer = counter_pointer->next;
        number_of_nodes++;
    }

    return number_of_nodes;
}

bool empty(node_t** head)
{
    if (*head == NULL)
        return TRUE;
    else
        return FALSE;
}

void print(node_t *head)
{
    int counter = 0;
    while (head != NULL) {
        printf("Counter\tData\tPointer\n");
        printf("%d.\t %d\t%p\n", ++counter, head->data, head->next);
        head = head->next;
    }
}

char* bool_alpha(int boolean)
{
    switch (boolean) {
        case 0:
            return "FALSE";
        case 1:
            return "TRUE";
        default:
            break;
    }
}