#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H


#include "cmsis_os.h"

typedef struct node{
	int data;
	struct node* next;
}node_t;

void linked_list_create();
void linked_list_deallocate(node_t *head);
void linked_list_push_back(node_t **head, int data);
void linked_list_push_front(node_t **head, int data);
void linked_list_pop_back(node_t **head);

#endif
