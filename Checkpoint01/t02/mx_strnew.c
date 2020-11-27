#include <stdlib.h>

char *mx_strnew(const int size){
    char *str = (char *)malloc((size + 1) * sizeof(char));
    if(str == NULL || size < 0) return NULL;
    for(int i = 0; i < size + 1; ++i) str[i] = '\0';
    return str;
}
