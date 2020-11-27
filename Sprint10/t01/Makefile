.PHONY: all READ clean

SRCS := $(wildcard src/*.c)

all: T00

T00:
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic ${SRCS} -o mx_cp

uninstall: clean

clean:
	@rm -f mx_cp

reinstall: clean all
