#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include "cmsis_os.h"

typedef struct coord{
	uint32_t x;
	uint32_t y;
}coord_t;

typedef struct node{
	coord_t data;
	struct node* next;
}node_t;

node_t* linked_list_create();
void linked_list_deallocate(node_t *head);
void linked_list_push_back(node_t **head, coord_t data);
void linked_list_push_front(node_t **head, coord_t data);
node_t* linked_list_pop_back(node_t *head);

#endif
