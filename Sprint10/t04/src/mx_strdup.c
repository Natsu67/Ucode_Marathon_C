#include "../inc/header.h"

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);
    char *dst = mx_strnew(lenght);

    dst = mx_strcpy(dst, str);
    return dst;
}
