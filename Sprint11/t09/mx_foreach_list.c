#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) {
	t_list *current = list;
	while (current != NULL) {
		(*f)(current);
		current = current->next;
	}
}
