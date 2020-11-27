#include "../inc/header.h"

char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strjoin(char const *s1, char const *s2) {
    char *str;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL)
        return mx_strdup(s2);
    else if (s2 == NULL)
        return mx_strdup(s1);
    str = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    str = mx_strcat(mx_strcpy(str, s1), s2);
    return str;
}
