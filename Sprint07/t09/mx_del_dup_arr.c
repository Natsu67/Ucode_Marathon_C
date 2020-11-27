#include <stdlib.h>
#include <stdio.h>
int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    for (int i = 0; i < src_size; i++) {
        for (int z = 0; z < src_size; z++) {
            if (src[i] == src[z] && i != z) {
                src[z] = (0);
            }
        }
    }
    int *dst = malloc(*dst_size*4);
    int z=0;
    for (int i = 0; i < (*dst_size); i++) {
        for (; z < src_size; z++) {
            if (src[z] == (0)) {
                continue;
            }
            else {
                dst[i] = src[z];
                z++;
                break;
            }
        }
    }
    return dst;
}
