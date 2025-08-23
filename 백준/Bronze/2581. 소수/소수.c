#include <stdio.h>

int main() {
    int M, N, sum = 0, min = 0;
    scanf("%d%d", &M, &N);

    for (int i = M; i <= N; i++){
        if (i < 2) continue;
        int prime = 1;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                prime = 0;
                break;
            }
        }
        if (prime){
            sum += i;
            if (!min){
                min = i;
            }
        }
    }
    if (!sum){
        printf("-1\n");
    }
    else{
        printf("%d\n%d\n", sum, min);
    }

    return 0;
}