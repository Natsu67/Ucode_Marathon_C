#include "list.h"
void mx_pop_back(t_list **list) {
    t_list *temp = *list;
    if (*list == NULL || list == NULL)
        return;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    t_list *temp_2 = temp->next;
    temp->next = NULL;
    free(temp_2);
}
