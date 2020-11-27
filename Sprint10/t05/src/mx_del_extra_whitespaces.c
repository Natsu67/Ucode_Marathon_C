#include "../inc/header.h"

char *mx_del_extra_whitespaces(const char *str) {
    if (str == NULL || mx_strlen(str) <= 0)
        return NULL;
    int space = 0;
    char *temp = mx_strtrim(str);
    for (int i = 0; i < mx_strlen(temp); i++) {
        if(mx_isspace(temp[i])){
            temp[i] = ' ';
        }
        if(mx_isspace(temp[i]) && mx_isspace(temp[i + 1])) {
                space++;
        }
    }
    int new_size = mx_strlen(temp) - space;
    char *a = mx_strnew(new_size);
    int first_space = 0;
    for (int i = 0, z = 0; i < new_size; z++) {
        if (mx_isspace(temp[z])){
            if(first_space == 1){
                continue;
            }
            first_space = 1;
        }
        else { 
            first_space = 0;
        }
        a[i] = temp[z];
        i++;
    }
    mx_strdel(&temp);
    return a;
}
