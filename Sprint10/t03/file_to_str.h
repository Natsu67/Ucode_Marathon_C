#pragma once
#ifndef HEADER
#define HEADER
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
char *mx_strjoin(char const *s1, char const *s2);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char *mx_strcat(char *s1, const char *s2);

char *mx_strdup(const char *str);

char* mx_strcpy(char *dst, const char *src);

char *mx_file_to_str(const char *filename);

#endif
