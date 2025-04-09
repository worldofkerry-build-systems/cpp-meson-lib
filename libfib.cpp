unsigned long long fibonacci(unsigned n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    unsigned long long a = 0, b = 1, c;
    for (unsigned i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}