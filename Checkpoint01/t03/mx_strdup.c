#include <unistd.h>
#include <stdlib.h>
char *mx_strcpy(char *dst, const char* src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);

char *mx_strnew(const int size){
    char *str = (char *)malloc((size + 1) * sizeof(char));
    if(str == NULL || size < 0) return NULL;
    for(int i = 0; i < size + 1; ++i) str[i] = '\0';
    return str;
}

int mx_strlen(const char *s) {
    int j = 0;
    char i = s[0];
    while (i != '\0') {
        j++;
        i = s[j];
    }
    return j;
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

char *mx_strdup(const char *str) {
    int size = mx_strlen(str);
    char *result = mx_strnew(size);
    return (mx_strcpy(result,str));
}
