#include <stdio.h>

int main(){
    int A, I;
    scanf("%d %d", &A, &I);
    int result = A * (I - 1) + 1;
    printf("%d\n", result);
    return 0;
}