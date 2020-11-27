#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if (data == NULL) return;
    if(list == NULL || *list == NULL) return;
    t_list *len = *list;
    int size=0;
    while (len != NULL) {
        size++;
        len = len->next;
    }
    if(index <= 0) {
        mx_push_front(list, data);
        return;
    }
    if(index >= size) {
        mx_push_back(list, data);
        return;
    }
    t_list *current = *list;
	for (int count = 0; count < index - 1; count++)
		current = current->next;
    t_list *node = mx_create_node(data);
	node->next = current->next;
	current->next = node;
}
