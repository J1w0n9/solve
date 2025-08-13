#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        long a, b;
        scanf("%ld %ld", &a, &b);
        long x = a, y = b;
        while (y != 0){
            long temp = y;
            y = x % y;
            x = temp;
        }
        long l = (a / x) * b;
        printf("%ld\n", l);
    }
    return 0;
}