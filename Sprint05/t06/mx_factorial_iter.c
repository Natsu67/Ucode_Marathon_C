int mx_factorial_iter(int n) {
    if (n < 0 || n > 13) return 0;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
