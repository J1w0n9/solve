#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int age;
    char name[101];
    int index;
}Member;
int compare(const void *a, const void *b){
    Member *m1 = (Member *)a;
    Member *m2 = (Member *)b;

    if(m1->age == m2->age)
        return m1->index - m2->index;
    return m1->age - m2->age;
}
int main() {
    int n;
    scanf("%d", &n);
    Member *arr = (Member *)malloc(sizeof(Member) * n);
    for (int i = 0; i < n; i++){
        scanf("%d %s", &arr[i].age, arr[i].name);
        arr[i].index = i;
    }
    qsort(arr, n, sizeof(Member), compare);
    for (int i = 0; i < n; i++){
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
    free(arr);
    return 0;

}
