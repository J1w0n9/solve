#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1){
        return 0;
    }
    long long m = 0;
    long long sum = 0;
    while(sum+(m+1) <= n){
        m++;
        sum += m;
    }
    if (m%2 == 1) {
        printf("0\n");
    }
    else {
        long long next = sum+(m+1);
        printf("%lld\n", next-n);
    }
    return 0;
}
