#include <stdio.h>
#include "linked_list.h"

int main() {

    node_t* head;
    init(&head);

    push_back(&head, 6);
    push_back(&head, 9);
    push_back(&head, 45);
    push_back(&head, 2346);
    push_back(&head, 0);

    node_t* head2 = NULL;
    node_t* head3 = NULL; //empty linked_list

    push_front(&head2, 5);
    push_front(&head2, 4);
    push_front(&head2, 3);
    push_front(&head2, 2);

    push_back(&head2, 84);
    push_back(&head2, 42);
    push_back(&head2, 824);
    push_back(&head2, 3);
    push_back(&head2, 4);
    push_back(&head2, 8);

    push_front(&head2, 111);
    push_front(&head2, 111);
    push_front(&head2, 111);

    printf("Number of nodes before insert:%d\n", size(&head2));

    node_t* insertion_ptr = head2->next;
    insert(&head2, 888, head2);
    insert(&head2, 888, head2);

    print(head2);
    printf("\n");
    printf("Number of nodes: %d\n", size(&head2));
    printf("\n");
    printf("%s\n", bool_alpha(empty(&head2)));
    printf("%s\n", bool_alpha(empty(&head3)));


    return 0;
}