#include "../inc/header.h"

char *mx_strnew(const int size) {
    char *newstr = (char *)malloc(size + 1);
    for (int i = 0; i <= size; i++)
        newstr[i] = '\0';
    return newstr;
}
