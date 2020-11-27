int mx_sum_digits(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num = num / 10;
	}
	return ((sum < 0) ? -sum : sum);
}
