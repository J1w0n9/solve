sn = []
min = 0
for i in range(28):
    sn.append(int(input()))
for j in range(1,31):
    if j not in sn:
        print(j)