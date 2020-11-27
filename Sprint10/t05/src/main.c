#include "../inc/header.h"

int main(int argc, char *argv[]) {
    if (argc != 3 || (!(mx_strcmp(argv[1],"-p") == 0) && !(mx_strcmp(argv[1],"-s") == 0) && !(mx_strcmp(argv[1],"-n") == 0))) {
        write(2, "usage: ./parse_agents [-p | -s | -n] [file_name]\n", 49);
        exit(0);
    }
    argc++;
    char *str = mx_file_to_str(argv[2]);
    if (!str) {
        write(2, "error\n", 6);
        exit(0);
    }
    char *temp_str_for_count = mx_file_to_str(argv[2]);
    int agent_count = 0;
    temp_str_for_count = mx_del_extra_whitespaces(temp_str_for_count);
    while(mx_strchr(temp_str_for_count,'{') != NULL) {
        temp_str_for_count = mx_strchr(temp_str_for_count,'{');
        temp_str_for_count++;
        agent_count++;
    }
    char *name_of_agent[agent_count];
    int *power_of_agent = malloc(4*agent_count);
    int *strength_of_agent = malloc(4*agent_count);
    for (int i = 0; i < agent_count; i++) {
        str = mx_strstr(str, "name: ");
        name_of_agent[i] = mx_take_info(str);
        str = mx_strstr(str,"power: ");
        power_of_agent[i] = mx_atoi(mx_take_info(str));
        str = mx_strstr(str,"strength: ");
        strength_of_agent[i] = mx_atoi(mx_take_info(str));
    }
    t_agent **my_agents = mx_create_new_agents(name_of_agent, power_of_agent, strength_of_agent, agent_count);
    if (mx_strcmp(argv[1],"-p") == 0) {
       mx_sort_by_power(my_agents,agent_count);
    }
    if (mx_strcmp(argv[1],"-s") == 0) {
       mx_sort_by_strength(my_agents,agent_count);
    }
    if (mx_strcmp(argv[1],"-n") == 0) {
       mx_sort_by_name(my_agents,agent_count);
    }
    for (int i = 0; i < agent_count; i++) {
       write(1, "agent: ", 7);
       write(1,my_agents[i]->name, mx_strlen(my_agents[i]->name));
       write(1, ", strength: ", 12);
       mx_printint(my_agents[i]->strength);
       write(1, ", power: ", 9);
       mx_printint(my_agents[i]->power);
       write(1, "\n", 1);
    }
}
