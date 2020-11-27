FILE_NAMES = atoi isdigit isspace printchar printint printstr strcmp strcpy strlen

SRC_FILES = $(addprefix src/mx_, $(addsuffix .c, $(FILE_NAMES)))
OBJ_FILES = $(addprefix mx_, $(addsuffix .o, $(FILE_NAMES)))

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: MINILIBMX

MINILIBMX: $(OBJ_FILES)
	ar rcs minilibmx.a $(addprefix obj/, $(OBJ_FILES))

$(OBJ_FILES): $(SRC_FILES) inc/header.h
	mkdir -p obj
	clang $(CFLAGS) -c $(SRC_FILES) -I inc/
	mv $(OBJ_FILES) obj

clean:
	rm -rf obj
	rm -rf $(OBJ_FILES)	

uninstall: clean
	rm -rf minilibmx.a

reinstall: uninstall all

.PHONY: all uninstall clean reinstall
