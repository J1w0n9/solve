#include <stdio.h>

int main(){
    long long A, B;
    scanf("%lld %lld", &A, &B);
    long long a = A, b = B;
    while (b != 0){
        long long temp = b;
        b = a % b;
        a = temp;
    }
    long long l = (A / a) * B;
    printf("%lld", l);
    return 0;
}