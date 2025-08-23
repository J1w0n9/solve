#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n", &a);
    int arr[2001] = {0};
    for(int i = 0; i<a; i++){
        scanf("%d\n", &b);
        arr[b+1000] = 1;
    }
    for(int i = 0; i <= 2000; i++){
        if(arr[i]){
            printf("%d\n", i - 1000);
        }
    }
    return 0;
}