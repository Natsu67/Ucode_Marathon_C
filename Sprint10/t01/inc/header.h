#pragma once
#ifndef HEADER
#define HEADER
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
void mx_printerr(const char *s);

int mx_strlen(const char *s);

#endif
