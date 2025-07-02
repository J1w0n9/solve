H, M= map(int, input().split())
OM = int(input())
M+=OM
while M >= 60:
    if M >= 60:
        M-=60
        H+=1
if H >= 24:
    H -= 24
print(H, M)