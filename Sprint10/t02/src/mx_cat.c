#include "../inc/header.h"

int main(int argc, char *argv[]) {
	if (argc >= 2) {
		for (int i = 1; i < argc; i++) {
			int src = open(argv[i], O_RDONLY);
			if (errno) {
				write(2, "mx_cat: ", 8);
				write(2, argv[i], mx_strlen(argv[i]));
				write(2, ": ", 2);
				write(2, strerror(errno), mx_strlen(strerror(errno)));
				write(2, "\n", 1);
				exit(1);
			}
			char c;
			while(read(src, &c, 1) > 0)
				write(1, &c, 1);
			write(1, "\n", 1);
			if (close(src) < 0) {
				write(2, "mx_cat: ", 8);
				write(2, argv[i], mx_strlen(argv[i]));
				write(2, ": ", 2);
        			write(2, strerror(errno), mx_strlen(strerror(errno)));
        			write(2, "\n", 1);
        			exit(1);
        		}
		}
	}
	else {
		char c;
		while(read(0, &c, 1) > 0 && c != '\n')
			write(1, &c, 1);
		write(1, "\n", 1);
	}
	exit(0);
}
