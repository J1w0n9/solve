jh = input()
h = input()
jh_a, h_a = 0, 0
for i in range(len(jh)):
    if jh[i] == 'a':
        jh_a+=1
for j in range(len(h)):
    if h[j] == 'a':
        h_a+=1
if jh_a >= h_a:
    print("go")
else:
    print("no")