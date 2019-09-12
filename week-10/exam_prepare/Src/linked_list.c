#include <linked_list.h>
#include <stdlib.h>

node_t* linked_list_create()
{
	return NULL;

	/*node_t* head_ptr = (node_t*)pvPortMalloc(sizeof(node_t));
	coord_t coordinates;
	coordinates.x = 0;
	coordinates.y = 0;
	head_ptr->data = coordinates;
	head_ptr->next = NULL;

	return head_ptr;*/
}

void linked_list_deallocate(node_t *head)
{

	if(head == NULL){
		return;
	}

	node_t* p = head->next;
	while(p != NULL){
		vPortFree(head);
		head = p;
		p = head->next;
	}

	vPortFree(head);
}

void linked_list_push_back(node_t **head, coord_t data)
{
	if(*head == NULL){
	    node_t* new_node = (node_t*)pvPortMalloc(sizeof(node_t));
	    new_node->data = data;
	    new_node->next = NULL;
	    *head = new_node;

	    return;
	}


    node_t* new_node = (node_t*)pvPortMalloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;

    node_t* temp_ptr = *head;
    while(temp_ptr->next != NULL){
    	temp_ptr = temp_ptr->next;
    }

    temp_ptr->next = new_node;
}

void linked_list_push_front(node_t **head, coord_t data)
{
	if(*head == NULL){
		node_t* new_node = (node_t*)pvPortMalloc(sizeof(node_t));
		new_node->data = data;
		new_node->next = NULL;
		*head = new_node;

		return;
	}

	node_t* new_node = (node_t*)pvPortMalloc(sizeof(node_t));
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}

node_t* linked_list_pop_back(node_t *head)
{
	/*
}
	if(*head == NULL){
		return;
	}

	node_t* temp_ptr = *head;
	while(temp_ptr->next != NULL){
		temp_ptr = temp_ptr->next;
	}

	coord_t retrieved_data = temp_ptr->data;
	temp_ptr->next = NULL;
	vPortFree(temp_ptr);

	return retrieved_data;
	*/

	if(head == NULL){
		return NULL;
	}

	if(head->next == NULL){
		vPortFree(head);
	    return NULL;
	    }

	 node_t* second_last = head;
	 while (second_last->next->next != NULL){
		 second_last = second_last->next;
	 }

	 vPortFree(second_last->next);
	 second_last->next = NULL;

	 return head;
}
