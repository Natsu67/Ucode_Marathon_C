#pragma once
#ifndef TO_NBR
#define TO_NBR
#include <stdlib.h>
#include <stdbool.h>

bool mx_isalpha(int);

bool mx_isdigit(int);

bool mx_islower(int c);

bool mx_isupper(int c);

unsigned long mx_hex_to_nbr(const char *hex);

#endif
