#include <stdio.h>

int main(){
    int n, x;
    int count[2000001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        count[x + 1000000] = 1;
    }
    for (int i = 0; i <= 2000000; i++){
        if (count[i]) {
            printf("%d\n", i - 1000000);
        }
    }
    return 0;
}