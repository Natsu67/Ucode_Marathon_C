#include "../inc/header.h"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		mx_printerr("usage: ./read_file [file_path]\n");
		return 0;
	}
	int fd = open(argv[1], O_RDONLY);
	if (fd < 0) {
		mx_printerr("error\n");
		return 0;
	}
	char c;
	while(read(fd, &c, 1) > 0)
		write(1, &c, 1);
	if (close(fd) < 0) {
        mx_printerr("error\n");
        return 0;
    }
	return 0;
}
