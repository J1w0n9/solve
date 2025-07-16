n = int(input())
li = []
sum = 0
for _ in range(n):
    a = int(input())
    if a == 0:
        li.pop()
    else:
        li.append(a)
for i in li:
    sum+=i
print(sum)