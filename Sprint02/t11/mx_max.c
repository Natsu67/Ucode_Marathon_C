int mx_max(int, int, int);

int mx_max(int a, int b, int c) {
    int max;
    if((a > b) && (a > c))
    {
        max = a;
    }
    else if(b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    return max;
}
