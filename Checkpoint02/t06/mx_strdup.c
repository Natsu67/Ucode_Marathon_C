#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char* src);

char *mx_strnew(const int size) {
    char *str = (char*) malloc((size + 1) * sizeof(char));
    if (str == NULL || size < 0)return NULL;
    for (int i = 0; i < size; i++) str[i] = '\0';
    str[size] = '\0';
    return str;
}

int mx_strlen(const char *s) {
    int count = 0;
    char i = s[0];
    while (i != '\0') {
        count++;
        i = s[count];
    }
    return count;
}

char *mx_strcpy(char *dst, const char* src) {
    int i = 0;
    while (src[i] !=  '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

char *mx_strdup(const char *str){
    return (mx_strcpy(mx_strnew(mx_strlen(str)), str)); 
}
