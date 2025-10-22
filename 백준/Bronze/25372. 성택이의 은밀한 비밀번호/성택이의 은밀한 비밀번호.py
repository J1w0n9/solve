n = int(input())
for _ in range(n):
    pw = input()
    if(len(pw)<=9 and len(pw)>=6):
        print("yes")
    else:
        print("no")