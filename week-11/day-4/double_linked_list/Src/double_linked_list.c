#include <double_linked_list.h>
#include <stdlib.h>

void linked_list_create(double_linked_list_t* list)
{
	list->head = NULL;
	list->tail = NULL;
}

void linked_list_deallocate(double_linked_list_t* list)
{
	if(list->head == NULL || list->tail == NULL){
		return;
	}

	node_t* p = list->head;
	while(p != NULL){
		node_t* tmp = p->next;
		p->next = NULL;
		vPortFree(p);
		p = tmp;
	}

	list->head = NULL;
	list->tail = NULL;
}

void linked_list_push_back(double_linked_list_t* list, coordinates_t data)
{
	if(list->head == NULL || list->tail == NULL){
		node_t* new_node = (node_t*)pvPortMalloc(sizeof(coordinates_t));
		new_node->data = data;
		new_node->previous = NULL;
		new_node->next = NULL;
		list->head = new_node;
		list->tail = new_node;

		return;
	}

	node_t* new_node = (node_t*)pvPortMalloc(sizeof(coordinates_t));
	new_node->data = data;
	new_node->previous = list->tail->next;
	new_node->next = NULL;
	list->tail = new_node;


}


void linked_list_push_front(double_linked_list_t* list, coordinates_t data)
{
	if(list->head == NULL || list->tail == NULL){
		node_t* new_node =(node_t*)pvPortMalloc(sizeof(coordinates_t));
		new_node->data = data;
		new_node->previous = NULL;
		new_node->next = NULL;
		list->head = new_node;
		list->tail = new_node;

		return;
	}

	node_t* new_node = (node_t*)pvPortMalloc(sizeof(coordinates_t));
	new_node->data = data;
	new_node->next = list->head->previous;
	new_node->previous = NULL;
	list->head = new_node;
}



void linked_list_pop_back(double_linked_list_t* list)
{
	/*if(list->head == list->tail){
		vPortFree(list->head);
		vPortFree(list->tail);
		list->head = NULL;
		list->tail = NULL;

		return;
	}

	vPortFree(list->tail->next);*/


}
