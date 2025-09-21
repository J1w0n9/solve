#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);
    long long result = n*(n-1)*(n+1)/2;
    printf("%lld\n", result);
    return 0;
}