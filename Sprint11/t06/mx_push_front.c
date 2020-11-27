#include "list.h"

void mx_push_front(t_list **list, void *data) {
	if (!data) return;
	t_list *front = mx_create_node(data);
	if (*list == NULL || list == NULL) {
        *list = front;
        return;
    }
	front->next = *list;
	*list = front;
}
