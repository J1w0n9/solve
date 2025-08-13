#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int a = 1; a <= n/3; a++){
        for (int b = a; b <= (n - a)/2; b++){
            int c = n - a - b;
            if(c < a + b){
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}