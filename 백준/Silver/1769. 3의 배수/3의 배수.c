#include <stdio.h>
#include <string.h>

int main() {
    char X[1000001];
    scanf("%s", X);
    int c = 0;
    if (strlen(X) == 1){
        c = 0;
    }
    else{
        c = 1;
    }
    while (strlen(X) > 1){
        int sum = 0;
        for (int i = 0; X[i] != '\0'; i++){
            sum += X[i] - '0';
        }
        sprintf(X, "%d", sum);
        if (strlen(X) > 1){
            c++;
        }
        else{
            break;
        }
    }
    int ld = X[0] - '0';
    printf("%d\n", c);
    if (ld == 3 || ld == 6 || ld == 9){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}