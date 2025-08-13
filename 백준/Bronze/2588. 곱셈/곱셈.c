#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int b1 = b % 10;
    int b2 = (b / 10) % 10;
    int b3 = b / 100;
    int res1 = a * b1;
    int res2 = a * b2;
    int res3 = a * b3;
    int res4 = a * b;
    printf("%d\n", res1);
    printf("%d\n", res2);
    printf("%d\n", res3);
    printf("%d\n", res4);

    return 0;
}