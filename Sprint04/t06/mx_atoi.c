#include <stdbool.h>
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str) {
    bool minus = 0, is_character = 0;
    int result = 0;
    for(int i = 0; str[i]; i++){
        for(int j = 48; j <= 57; j++){
            if(mx_isspace(str[i]))
                continue;
            if(i == 0 && (int)str[i] == 45) {
                minus = 1;
                continue;
            }
            if(!mx_isdigit(str[i]) && !mx_isspace(str[i])){
                is_character = 1;
                break;
            }
            if((int)str[i] == j){
                if(minus == 1){
                    result = result * 10 - j + 48;
                    result *= -1;
                    continue;
                }
                else
                    result = result * 10 + j - 48;
            }
        }
        if(is_character)
            break;
        if(minus)
            result *= -1;
    }
    return result;
}
