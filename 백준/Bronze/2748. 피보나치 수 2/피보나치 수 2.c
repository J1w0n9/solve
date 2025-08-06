#include <stdio.h>

int main() {
    long n, a = 0, b = 1, fib = 0;
    scanf("%ld", &n);
    if (n == 0){
        printf("0");
        return 0;
    }
    else if (n == 1){
        printf("1");
        return 0;
    }
    for (int i = 2; i <= n; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    printf("%ld", fib);
    return 0;
}