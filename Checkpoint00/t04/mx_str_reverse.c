int mx_strlen(const char *);
void mx_swap_char(char *, char *);
void mx_str_reverse(char *);

int mx_strlen(const char *s) {
    int j = 0;
    char i = s[0];
    while (i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}

void mx_swap_char(char *s1, char *s2) {
    char temp = *s1;
    char temp2 = *s2;
    
    *s2 = temp;
    *s1 = temp2;
}

void mx_str_reverse(char *s) {
    int len = mx_strlen(s);
    
    for (int i = 0; i < len/2; i++) {
        mx_swap_char(&s[i], &s[len - 1 - i]);
    }
}
