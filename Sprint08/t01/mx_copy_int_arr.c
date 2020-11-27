#include "duplicate.h"

int *mx_copy_int_arr(const int *src, int  size) {
    if (size < 0 || src == NULL) return NULL;
    int *result = (int *)malloc(size*4);
    for (int i = 0; i < size; i++) {
        result[i] = src[i];
    }
    return result;
}
