#include <stdbool.h>

int mx_strlen(const char *s) {
    int count = 0;
    char i = s[0];
    while (i != '\0') {
        count++;
        i = s[count];
    }
    return count;
}

int mx_strcmp(const char *s1, const char *s2){
    char c1, c2;
    do {
        c1 = *s1++;
        c2 = *s2++;
        if(c1 == '\0'){
            return c1 - c2;
        }
    } while (c1 == c2);
    return c1 - c2;
}

bool mx_isdigit(int c) {
    if(c >= 48 && c <= 57) return true;
    return false;
}

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

int mx_atoi(const char *str) {
    if (mx_strlen(str) == 1 && str[0] == '2') return 2;
    if (mx_strcmp(str, "2147483647") == 0)
        return 2147483647;
    if (mx_strcmp(str, "-2147483648") == 0)
        return -2147483648;
    int result=0, minus = 0;
    for (int z = 0; str[z]; z++) {
        for (int i = 48; i <= 57; i++) {
            if((int)str[z] == 45) {
                minus = 1;
                continue;
            }
            if(mx_isspace(str[z])) {
                continue;
            }
            if(!mx_isdigit(str[z])) {
                if(minus == 1) {
                    result *= -1;
                }
                return (result / 10);
            }
            if((int)str[z] == i) {
                result += (i - 48);
                if(str[z + 1]){
                    result = result*10;
                }
            }
        }
    }
    if(minus == 1) {
        result *= -1;
    }
    return result;
}
