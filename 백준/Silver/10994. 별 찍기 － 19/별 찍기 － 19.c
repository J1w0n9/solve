#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int s = n * 4 - 3;
    char p[s][s];
    for (int i = 0; i < s; i++)
        for (int j = 0; j < s; j++)
            p[i][j] = ' ';
    for (int k = 0; k < n; k++) {
        int st = k * 2;
        int ed = s - st - 1;
        for (int i = st; i <= ed; i++) {
            p[st][i] = '*';
            p[ed][i] = '*';
            p[i][st] = '*';
            p[i][ed] = '*';
        }
        for (int i = st + 2; i < ed; i += 2)
            for (int j = st + 2; j < ed; j += 2)
                p[i][j] = '*';
    }
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++)
            printf("%c", p[i][j]);
        printf("\n");
    }
    return 0;
}