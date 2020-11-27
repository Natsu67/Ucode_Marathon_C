.PHONY: all READ clean

SRCS := $(wildcard src/*.c)

all: T00

T00:
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic ${SRCS} -o read_file

uninstall: clean

clean:
	@rm -f read_file

reinstall: clean all
