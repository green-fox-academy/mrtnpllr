#include <linked_list.h>
#include <stdlib.h>

void linked_list_create(node_t** head)
{
	*head = NULL;
}

void linked_list_deallocate(node_t *head)
{

	if(head == NULL){
		return;
	}

	node_t* p = head;
	while(p != NULL){
		node_t* tmp = p->next;
		vPortFree(p);
		p = tmp;
	}
}

void linked_list_push_back(node_t **head, char* data)
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

void linked_list_push_front(node_t **head, char* data)
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

void linked_list_pop_back(node_t **head)
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

	/*
	if(head == NULL){
		vPortFree(head);
		return;
	}
*/

	if((*head)->next == NULL){
		vPortFree(*head);
		*head = NULL;
	    return;
	    }

	 node_t* second_last = *head;
	 while (second_last->next->next != NULL){
		 second_last = second_last->next;
	 }

	 vPortFree(second_last->next);
	 second_last->next = NULL;
}
