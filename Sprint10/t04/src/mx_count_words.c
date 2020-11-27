#include "../inc/header.h"

int mx_count_words(const char *str, char delimiter) {
    int word = 0;
    
    if (!str) 
        return -1;
    while (*str != '\0') {
        if (*str == delimiter) {
            while (*str == delimiter && *str != '\0')
                str++;
        }
        if (*str != delimiter && *str != '\0') {
            word++;
            while (*str != delimiter && *str != '\0')
                str++;
        }
    }
    return word;
}
