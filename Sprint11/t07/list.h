#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;
void mx_pop_front(t_list **list);
void mx_pop_back(t_list **list);
void mx_pop_index(t_list **list, int index);
t_list *mx_create_node(void *data);
#endif
