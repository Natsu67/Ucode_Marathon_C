#include "file_to_str.h"
char *mx_strcpy(char *dst, const char* src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL){
        return NULL;
    }
    if (s1 == NULL && s2 != NULL){
        return mx_strdup(s2);
    }
    if (s1 != NULL && s2 == NULL){
        return mx_strdup(s1);
    }
    int size1 = mx_strlen(s1);
    int size2 = mx_strlen(s2);
    char *result = mx_strnew(size1+size2);
    char *temp1 = mx_strdup(s1);
    char *temp2 = mx_strdup(s2);
    result = mx_strcat(temp1, temp2);
    return result;
}
