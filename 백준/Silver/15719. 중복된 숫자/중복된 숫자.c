#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    long long sum = 0;
    long long total = (N - 1) * N / 2;
    long long x;
    for(long long i = 0; i < N; i++) {
        scanf("%lld", &x);
        sum += x;
    }
    printf("%lld\n", sum - total);
    return 0;
}