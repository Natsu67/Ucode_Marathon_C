#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;
void mx_push_back(t_list **list, void *data);
void mx_push_front(t_list **list, void *data);
void mx_push_index(t_list **list, void *data, int index);
t_list *mx_create_node(void *data);
#endif
