#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[50];
    int i;
    int min = 1000000, max = 2;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("%d\n", min * max);
    return 0;
}