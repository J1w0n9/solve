#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int min = n - m * k;
    if (min < 0){
      min = 0;
    }
    int max = n - 1 - (m * (k - 1));
    if (max < 0){
      max = 0;
    }
    printf("%d %d\n", min, max);
    return 0;
}