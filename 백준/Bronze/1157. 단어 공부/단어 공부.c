#include <stdio.h>

int main() {
    char str[1000001];
    int f[26] = {0};
    int i;
    char c;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (c >= 'a' && c <= 'z') c = c - 'a' + 'A';
        f[c - 'A']++;
    }
    int max = 0;
    int count = 0;
    char result = 'A';

    for (i = 0; i < 26; i++){
        if (f[i] > max) {
            max = f[i];
            result = 'A' + i;
            count = 1;
        }
       else if (f[i] == max){
            count++;
        }
    }
    if (count > 1){
        printf("?\n");
    }
   else{
        printf("%c\n", result);
    }
    return 0;
}