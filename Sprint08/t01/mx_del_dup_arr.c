#include "duplicate.h"
int *mx_copy_int_arr(const int *src, int size);

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src == NULL) return NULL;
    int dst_size = 0;
    for (int i = 0; i < src->size; i++) {
        int wasprv = 0;
        for (int j = 0; j < i; j++)
        if (src->arr[j] == src->arr[i]) {
            wasprv++;
            break;
        }
        if (wasprv)
            continue;
        dst_size++;
    }
    int *arr = (int *)malloc(src->size * dst_size);
    arr = mx_copy_int_arr(src->arr, dst_size);
    int t = 0;
    int k = -1;
    for (int i = 0; i < src->size; i++) {
        k = 0;
        for (int j = i; j < src->size; j++) {
            if (src->arr[i] == src->arr[j] && i != j) {
                k = 0;
            } else {
                for (int p = 0; p < t; p++) {
                    if (src->arr[i] == arr[p]) {
                        k = 1;
                    }
                }
                if (k != 1) {
                    arr[t] = src->arr[i];
                    t++;
                    k = 0;
                    break;
                }
            }
        }
    }
    t_intarr *res = (t_intarr *)malloc(sizeof(t_intarr));
    res->arr = arr;
    res->size = dst_size;
    free(arr);
    return res;
}
