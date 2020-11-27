#include "../inc/header.h"

int main(int argc, char *argv[]) {
	if (argc <= 2 || argc > 3) {
		mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
		exit(1);
	}

	int src = open(argv[1], O_RDONLY);
	if (src == -1){
			mx_printerr("mx_cp: ");
			mx_printerr(argv[1]);
			mx_printerr(": No such file or directory\n");
        	return 0;
		}
	int res = open(argv[2], O_RDONLY);
	if (res != -1) {
		exit(0);
	} else {
		res = open(argv[2], O_CREAT);
		if (res == -1){
			mx_printerr("error\n");
        	return 0;
		}
	}
	if(close(res) < 0){
		mx_printerr("error\n");
        return 0;
	}
	if((res = open(argv[2], O_WRONLY)) == -1){
		mx_printerr("error\n");
        return 0;
	}

	char c;
	while(read(src, &c, 1) > 0)
		write(res, &c, 1);
	
	if (close(src) < 0 || close(res) < 0) {
        mx_printerr("error\n");
        return 0;
    }
	exit(0);
}
