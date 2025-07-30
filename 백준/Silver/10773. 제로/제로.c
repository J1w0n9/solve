#include <stdio.h>

int main() {
    int n, input;
    scanf("%d", &n);
    
    int arr[n];
    int cnt=0;
    for (int i=0; i<n; i++) {
        scanf("%d", &input);
        if (input==0) {
            cnt--;
        }
        else {
            arr[cnt]=input;
            cnt++;
        }
    }
    int sum=0;
    for (int i=0; i<cnt; i++){
        sum+=arr[i];   
    }
    printf("%d", sum);
    return 0;
}