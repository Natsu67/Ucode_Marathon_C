#include "../inc/header.h"
t_agent *mx_create_agent(char *name, int power, int strength) {
    if (name == NULL)
        return NULL;
    if (power < 0 && strength <0)
        return NULL;
    t_agent *result = malloc(16);
    result->name = mx_strdup(name);
    result->power = power;    
    result->strength = strength;

    return result;
}
