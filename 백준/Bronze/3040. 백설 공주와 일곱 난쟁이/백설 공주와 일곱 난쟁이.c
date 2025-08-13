#include <stdio.h>

int main(){
    int h[9], sum = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &h[i]);
        sum += h[i];
    }
    int a = -1, b = -1;
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum - h[i] - h[j] == 100){
                a = i;
                b = j;
                break;
            }
        }
        if(a != -1){
            break;
        }
    }
    int res[7], idx = 0;
    for(int i = 0; i < 9; i++){
        if(i != a && i != b){
            res[idx] = h[i];
            idx++;
        }
    }
    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 7; j++){
            if(res[i] > res[j]){
                int t = res[i];
                res[i] = res[j];
                res[j] = t;
            }
        }
    }
    for(int i = 0; i < 7; i++){
        printf("%d\n", res[i]);
    }
    return 0;
}