int mySqrt(int n) {
    if (n == 0)
        return 0;

    int i = 1;
    while ((long long)i * i <= n) {
        i++;
    }
    return i - 1;
}
