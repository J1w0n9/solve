#include <stdio.h>

int main() {
    int H, M, C;
    scanf("%d %d", &H, &M);
    scanf("%d", &C);
    M+=C;
    while(M>=60){
        if(M>=60){
            M-=60;
            H+=1;
        }
    }
    if(H>=24){
        H-=24;
    }
    printf("%d %d", H, M);
    return 0;
}
