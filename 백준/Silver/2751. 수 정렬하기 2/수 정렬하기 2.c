#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n", &a);
    int arr[2000001] = {0};
    for(int i = 0; i<a; i++){
        scanf("%d\n", &b);
        arr[b+1000000] = 1;
    }
    for(int i = 0; i <= 2000000; i++){
        if(arr[i]){
            printf("%d\n", i - 1000000);
        }
    }
    return 0;
}