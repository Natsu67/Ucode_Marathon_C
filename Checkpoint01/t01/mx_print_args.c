#include <unistd.h>
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

void mx_printchar(char c) {
	write(1, &c, 1);
}

void mx_printstr(const char *s) {
    int len = mx_strlen(s);
    write(1, s, len);
}

int mx_strlen(const char *s) {
    int count = 0;
    char i = s[0];
    while (i != '\0') {
        count++;
        i = s[count];
    }
    return count;
}

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
