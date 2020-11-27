#include "../inc/header.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    if (count < 1)
        return NULL;
    for (int i = 0; i < count; i++) {
        if(name == NULL || name[i] == NULL)
            return NULL;
    }
    for (int i = 0; i < count; i++) {
        if(strength == (0))
            return NULL;
    }
    for (int i = 0; i < count; i++) {
        if(power[i] == (0))
            return NULL;
    }
    t_agent **result = malloc(16 * (count) + 1);
    for (int i = 0; i < count; i++) {
        result[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    result[count] = NULL;
    return result;
}
