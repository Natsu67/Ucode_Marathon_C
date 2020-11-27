#include <unistd.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);

int mx_strlen(const char *s) {
    int count = 0;
    char i = s[0];
    while (i != '\0') {
        count++;
        i = s[count];
    }
    return count;
}

void mx_printstr(const char *s) {
    int len = mx_strlen(s);
    write(1, s, len);
}
