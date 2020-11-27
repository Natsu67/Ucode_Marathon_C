#include "list.h"

void mx_pop_back(t_list **list) {
    
    if (*list == NULL || list == NULL) return;

    if ((*list)->next == NULL) {
        free(*list);
        *list= NULL;
        return;
    }

    t_list *temp = *list;
    while (temp->next->next != NULL) { temp = temp->next; }
    
    free(temp->next);
    temp->next = NULL;
}
////////////////////////
t_list *mx_create_node(void *data) {
    if (!data) return NULL;
   t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
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
#include <stdio.h>
int main() {
    t_list *node1 = mx_create_node("1");
    mx_push_back(&node1, "2");
    mx_push_back(&node1, "3");
    mx_push_back(&node1, "4");
    t_list *temp = node1;
    for (int i = 0; temp != NULL; i++){
        printf("%s\n", temp->data);
        temp= temp->next;
    }
    mx_pop_back(&node1);
    for (int i = 0; node1 != NULL; i++){
        printf("%s\n", node1->data);
        node1 = node1->next;
    }
}
