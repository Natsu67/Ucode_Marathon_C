#include <stdio.h>
#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

bool mx_isspace(char c){
    if (c == ' ' || c == '\t' || c == '\n' ) {
        return true;
    }
    else if (c == '\v' || c == '\f' || c == '\r') {
        return true;
    }
    else {
        return false;
    }
}
bool mx_isdigit(int c){
    if (c >= 49 && c <= 57) {
        return true;
    } 
    else {
        return false;
    }
}

int mx_atoi(const char *str) {
    int res = 0;
    int sign = 1;
    int i = 0;
    while (mx_isspace(str[i]) == true) i++;
    if (str[i] == '-' || str[i] == '+') {
        sign = 1 - 2 * (str[i++] == '-');
    }
    while (str[i] >= '0' && str[i] <= '9') { 
        if (res > __INT_MAX__ / 10 || (res == __INT_MAX__ / 10 && str[i] - '0' > 7)) { 
            if (sign == 1) 
                return __INT_MAX__; 
            else
                return (__INT_MAX__ * -1) - 1; 
        } 
        res = 10 * res + (str[i++] - '0'); 
    }
    return res*sign;
}
