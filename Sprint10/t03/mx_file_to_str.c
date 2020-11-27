#include "file_to_str.h"

char *mx_file_to_str(const char *file) {
	if(!file)
		return NULL;
	
	int file = open(file, O_RDONLY);
	int file1 = open(file, O_RDONLY);
	if(file < 0){
		close(file);
		return NULL;
	}

	int filelen = 0;
	char buf;

    while(read(file1, &buf, 1))
        filelen++;

	if(filelen == 0)
		return NULL;

	char *str = mx_strnew(filelen);

	read(file, str, filelen);
	close(file);
	
	return str;
}
