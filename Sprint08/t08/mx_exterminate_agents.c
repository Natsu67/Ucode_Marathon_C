#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents)
{
	for (int i = 0; (*agents)[i] != NULL; i++) {
        free((*agents)[i]->name);
        (*agents)[i]->name = NULL;
        free((*agents)[i]->strength);
        (*agents)[i]->strength = NULL;
        free((*agents)[i]->power);
        (*agents)[i]->power = NULL;
    }
    free(*agents);
    *agents = NULL;
}
