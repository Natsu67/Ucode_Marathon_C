int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    int maxDel = mx_gcd(a,b);
    int krat;
    if (a < b) {
        krat = b;
    }
    else {
        krat = a;
    }
    while (!((krat % a == 0) && (krat % b == 0))) {
        krat +=maxDel;

    }
    return krat;
}
