#include <unistd.h>
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_printint(int n);

void mx_printchar(char c)
{
	write(1, &c, 1);
}

void mx_printint(int n) {
	char str[50];
    long n1 = n;
	int sign, i = 0;
	if (n == 0) 
        mx_printchar('0');
	if ((sign = n) < 0) 
		n1 = n1 * -1;

	while (n1 != 0) {
		str[i++] = n1 % 10 + '0';
		n1 = n1 / 10;
	}

	if (sign < 0) str[i++] = '-';
	for (int j = i-1; j>=0; --j) 
             mx_printchar(str[j]); 
}

void mx_printstr(const char *s) {
    int len = mx_strlen(s);
    write(1, s, len);
}

int mx_strlen(const char *s) {
    int count = 0;
    char i = s[0];
    while (i != '\0') {
        count++;
        i = s[count];
    }
    return count;
}

int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}
