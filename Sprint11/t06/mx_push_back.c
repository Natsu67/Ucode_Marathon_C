#include "list.h"

void mx_push_back(t_list **list, void *data) {
 	if (!data) return;
    t_list *new_node = mx_create_node(data);
    t_list *last = *list;
    if (*list == NULL || list == NULL) {
        *list = new_node;
        return;
    }
    while (last->next != NULL) {last = last->next;}
    last->next = new_node;
}
