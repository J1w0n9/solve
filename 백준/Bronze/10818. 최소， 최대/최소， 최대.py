n = int(input())
a = list(map(int, input().split()))
max = a[0]
min = a[0]
for i in range(n-1):
    if max < a[i+1]:
        max = a[i+1]
    if min > a[i+1]:
        min = a[i+1]
print(min, max)