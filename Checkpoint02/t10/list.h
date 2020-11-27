#pragma once
#ifndef LIST
#define LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list{
    void *data;
    struct s_list *next;
}              t_list;

t_list *mx_create_node(void *data);

#endif
