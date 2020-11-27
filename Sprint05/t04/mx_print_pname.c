#include <stdio.h>
#include <unistd.h>
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);

int main(int args, char *argv[])  {
    char *text = argv[args-args];
    while (mx_strchr(text,'/')) {
        text = mx_strchr(text,(int)'/');
        text++;
    }
    mx_printstr(text);
    mx_printchar('\n');
    return 0;
}
