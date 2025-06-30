num = []
max_id = 0
for i in range(9):
    num.append(int(input()))
for i in range(1, 9):
    if num[i] > num[max_id]:
        max_id = i
print(num[max_id])
print(max_id+1)