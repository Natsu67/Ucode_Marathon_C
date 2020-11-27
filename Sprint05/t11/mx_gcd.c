int mx_gcd(int a, int b) {
    int min;
    int del=1;
    if (a<b){
        min = a;
    }
    else {
        min = b;
    }
    if (min < 0) {
        min *= -1;
    }
    for (int i = 1; i < min; i++)
    {
        if ((a % i == 0) && (b % i == 0)) {
            del = i;
        }
    }
    return del;
}
