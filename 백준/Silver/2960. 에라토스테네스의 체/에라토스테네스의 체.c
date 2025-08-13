#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int prime[1001] = {0};
    for(int i = 2; i <= n; i++){
      prime[i] = 1;
      }
    int cnt = 0;
    for(int i = 2; i <= n; i++){
        if(prime[i]) {
            for(int j = i; j <= n; j += i){
                if(prime[j]) {
                    prime[j] = 0;
                    cnt++;
                    if(cnt == k){
                        printf("%d\n", j);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}