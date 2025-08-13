#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    int gcd = x;
    int lcm = (a * b) / gcd;
    printf("%d\n", gcd);
    printf("%d\n", lcm);
    return 0;
}