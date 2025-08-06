#include <stdio.h>

int main() {
    int n, a = 0, b = 1, fib;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    else if (n == 1) {
        printf("1");
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    printf("%d", fib);
    return 0;
}