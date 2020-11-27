#ifndef HEADER_H
#define HEADER_H


#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int mx_atoi(const char *str);
bool mx_isdigit(int c);
void mx_printchar(char c);
void mx_printint(int n);
char *mx_file_to_str(const char *filename);
char *mx_strchr(const char *s, int c);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
bool mx_isspace(char c);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
void mx_strdel(char **str);
char *mx_strcpy(char *dst, const char* src);
char *mx_strtrim(const char *str);
char *mx_del_extra_whitespaces(const char *str);
char  *mx_take_info(const char *str);
int mx_strcmp(const char *s1, const char *s2);
typedef struct s_agent {
    char *name;
    int power;
    int strength;
}               t_agent;
t_agent *mx_create_agent(char *name, int power, int strength);
char *mx_strdup(const char *str);
char *mx_strstr(const char *str, const char *find);
t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);
void mx_sort_by_power(t_agent **agents, int count);
void mx_sort_by_name(t_agent **agents, int count);
void mx_sort_by_strength(t_agent **agents, int count);

#endif
