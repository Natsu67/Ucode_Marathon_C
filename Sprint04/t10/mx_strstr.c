char *mx_strstr(const char *s1, const char *s2);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2){
  if(mx_strlen(s2) == 0){
    return (char *)s1;
  }
  char *ptr = mx_strchr(s1, s2[0]);
  while(ptr != 0){
    if(mx_strncmp(ptr, s2, mx_strlen(s2)) == 0){
      return (char *) ptr;
    }
    else{
      ptr = mx_strchr(ptr+1, s2[0]);
    }
  }
  return 0;
}
