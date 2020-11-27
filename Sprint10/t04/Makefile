.PHONY: all CAT uninstall clean reinstall

SRCS := $(wildcard src/*.c)

all: CAT

CAT:
	@clang -std=c11 -Wall -Wextra -Werror -Wpedantic ${SRCS} -o mx_wc

uninstall: clean

clean:
	@rm -f mx_wc

reinstall: uninstall CAT
