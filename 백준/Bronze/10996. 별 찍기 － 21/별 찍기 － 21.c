#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N * 2; i++){
        int s = (i % 2 == 0) ? (N / 2 + N % 2) : (N / 2);
        if (i % 2 == 1) {
            printf(" ");
        }
        for (int j = 0; j < s; j++){
            printf("*");
            if (j != s - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}