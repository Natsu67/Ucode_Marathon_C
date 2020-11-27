#include "../inc/header.h"

char *mx_file_to_str(const char *filename) {
    char *dst = NULL;
    int fd;
    int counter = 0;
    char ch;

    fd = open(filename, O_RDONLY);
    while (read(fd, &ch, 1))
        counter++;
    close(fd);
    fd = open(filename, O_RDONLY);
    dst = mx_strnew(counter);
    for (int i = 0; read(fd, &ch, 1); i++)
        dst[i] = ch;
    close(fd);
    return dst;
}
