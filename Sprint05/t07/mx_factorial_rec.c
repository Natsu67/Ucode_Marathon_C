int mx_factorial_rec(int n) {
    if(n < 0) {
        return 0;
    }
    if(n==1) {
        return n;
    }
    return (n*mx_factorial_rec(n-1));
}
#include <stdio.h>
int main() {
    printf("%d", mx_factorial_rec(4));
}