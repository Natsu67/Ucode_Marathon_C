#include <unistd.h>
#include <stdbool.h>
bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printint(int n);
int main(int argc, char *argv[]) {
    int mult[9][9];
    if (argc != 3)
        return 0;
    if (!mx_isdigit(mx_atoi(argv[1]) + '0') || !mx_isdigit(mx_atoi(argv[2]) + '0'))
        return 0;
    int min, max;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            mult[i][j] = (i + 1) * (j + 1);
        }
    }
    if (mx_atoi(argv[1]) < mx_atoi(argv[2])) {
        min = mx_atoi(argv[1]);
        max = mx_atoi(argv[2]);
    }
    else {
        min = mx_atoi(argv[2]);
        max = mx_atoi(argv[1]);
    }
    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            mx_printint(mult[i - 1][j - 1]);
            if (j != max)
                write(1, "\t", 1);
        }
        write(1, "\n", 1);
    }
    return 0;
}
