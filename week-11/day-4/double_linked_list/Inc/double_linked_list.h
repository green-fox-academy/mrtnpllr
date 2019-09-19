#ifndef DOUBLE_LINKED_LIST_DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_DOUBLE_LINKED_LIST_H


#include "cmsis_os.h"

typedef struct coordinates{
	int coord_x;
	int coord_y;
}coordinates_t;

typedef struct node{
	coordinates_t data;
	struct node* previous;
	struct node* next;
}node_t;

typedef struct double_linked_list{
	node_t* head;
	node_t* tail;
}double_linked_list_t;

void linked_list_create(double_linked_list_t* list);
void linked_list_deallocate(double_linked_list_t* list);
void linked_list_push_back(double_linked_list_t* list, coordinates_t data);
void linked_list_push_front(double_linked_list_t* list, coordinates_t data);
void linked_list_pop_back(double_linked_list_t* list);


#endif
