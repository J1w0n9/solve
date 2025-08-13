int main(){
    int n;
    scanf("%d", &n);
    int pos[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &pos[i]);
    }
    int diff[n-1];
    for (int i = 0; i < n-1; i++){
        diff[i] = pos[i+1] - pos[i];
    }
    int gcd = diff[0];
    for (int i = 1; i < n-1; i++){
        int a = gcd, b = diff[i];
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }
    int result = 0;
    for (int i = 0; i < n-1; i++){
        result += (diff[i] / gcd) - 1;
    }
    printf("%d\n", result);
    return 0;
}