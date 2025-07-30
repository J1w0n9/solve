#include <stdio.h>

int main() {
    int a, b, i=0, n;
    scanf("%d", &n);
    while(i<=n-1){
        scanf("%d, %d", &a, &b);
        printf("%d\n", a+b);
        i++;
    }
    return 0;
}