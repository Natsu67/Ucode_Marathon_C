#include "../inc/header.h"

void mx_print_total (int *total) {
    mx_printchar('\t');
    mx_printint(total[0]);
    mx_printchar('\t');
    mx_printint(total[1]);
    mx_printchar('\t');
    mx_printint(total[2]);
    mx_printchar('\t');
    mx_printstr("total");
    mx_printchar('\n');
}
