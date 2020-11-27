#pragma once
#ifndef NEW_AGENTS
#define NEW_AGENTS
#include <stdlib.h>
#include "agent.h"

t_agent **mx_create_new_agents(char **name, int *power,
	int *strength, int count);

t_agent *mx_create_agent(char *name, int power, int strength);

char *mx_strdup(const char *str);

int mx_strlen(const char *);

char *mx_strnew(const int size);

char* mx_strcpy(char *dst, const char *src);

#endif
