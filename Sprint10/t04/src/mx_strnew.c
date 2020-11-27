#include "../inc/header.h"

char *mx_strnew(const int size) {
    char *arr = NULL;

    if (size < 0)
        return NULL;
    arr = (char *)malloc((size + 1) * sizeof(char));
    for (int i = 0; i <= size; i++)
        arr[i] = '\0';
    return arr;
}
