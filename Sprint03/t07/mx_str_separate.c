void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    for (int i = 0; str[i]; i++) {
        if(str[i] == delim) {
            if (str[i+1] && (str[i]!=str[i+1])) {
                mx_printchar('\n');
            }
            continue;
        }
        mx_printchar(str[i]);
    }
    mx_printchar('\n');
}
