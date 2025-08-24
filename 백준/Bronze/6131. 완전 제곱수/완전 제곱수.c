#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int cnt = 0;
    for (int A = 1; A <= 500; A++){
        for (int B = 1; B <= A; B++){
            if(A*A - B*B == N){
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}