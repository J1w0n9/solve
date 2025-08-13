#include <stdio.h>

int main(){
    long n, f;
    scanf("%ld", &n);
    scanf("%ld", &f);
    n = n / 100 * 100;
    int i;
    for (i = 0; i < 100; i++){
        if ((n + i) % f == 0){
            break;
        }
    }
    printf("%02d\n", i);
    return 0;
}