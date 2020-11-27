void mx_printchar(char c);

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
