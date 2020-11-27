int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    for (int i = len1, z = 0; z < len2; i++, z++){
        if(s1) {
            s1[i] = s2[z];
        }
        else {
            return s1;
        }  
    }
    return (0);
}
