#include <stdio.h>
#include <string.h>

int main(){
    char room[8];
    int count[10] = {0};
    scanf("%s", room);
    int len = strlen(room);
    for (int i = 0; i < len; i++) {
        int d = room[i] - '0';
        count[d]++;
    }
    int s = count[6] + count[9];
    int s2 = (s + 1) / 2;
    count[6] = s2;
    count[9] = 0;
    int m = 0;
    for (int i = 0; i < 10; i++){
        if (count[i] > m)
            m = count[i];
    }
    printf("%d\n", m);
    return 0;
}