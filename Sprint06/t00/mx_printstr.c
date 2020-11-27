#include <unistd.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);

void mx_printstr(const char *s) {
    int len = mx_strlen(s);
    write(1, s, len);
}
