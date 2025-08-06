#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int c = -1;
    for (int i = n / 5; i >= 0; i--) {
        int r = n - (5 * i);
        if (r % 3 == 0) {
            c = i + (r / 3);
            break;
        }
    }
    printf("%d\n", c);
    return 0;
}