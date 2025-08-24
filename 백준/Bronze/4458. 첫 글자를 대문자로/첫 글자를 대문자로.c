#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char s[101];
    for (int i = 0; i < n; i++){
        fgets(s, sizeof(s), stdin);
        if (s[0] >= 'a' && s[0] <= 'z'){
            s[0] = s[0] - 'a' + 'A';
        }
        printf("%s", s);
    }
    return 0;
}