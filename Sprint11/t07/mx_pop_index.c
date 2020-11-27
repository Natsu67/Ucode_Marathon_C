#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if(list == NULL || *list == NULL) return;
    if((*list)->next == NULL) {
        free(*list);
        *list = NULL;
        return;
    }
    t_list *len = *list;
    int size=0;
    while (len != NULL) {
        size++;
        len = len->next;
    }
    if(index <= 0) {
        mx_pop_front(list);
        return;
    }
    if(index >= size) {
        mx_pop_back(list);
        return;
    }
    t_list *node_mv = (*list);
    for(int i = 0; node_mv != NULL && i < index - 1; i++) {
        node_mv = node_mv->next;
    }
    if(node_mv == NULL || node_mv->next == NULL) return;

    t_list *temp = node_mv->next->next;
    free(node_mv->next);
    node_mv->next = temp;
}
