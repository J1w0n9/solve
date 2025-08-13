#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        long n;
        scanf("%ld", &n);
        long r = (long)sqrt((double)n);
        if (r * r == n) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}