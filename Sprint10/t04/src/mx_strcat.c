#include "../inc/header.h"

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int i = 0;
    int len = mx_strlen(s1);

    for (; s2[i] != '\0'; i++, len++) 
        s1[len] = s2[i];
    s1[len] = '\0';
    return s1;
}
