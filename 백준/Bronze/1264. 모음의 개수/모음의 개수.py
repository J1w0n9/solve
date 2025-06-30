s = 0
while 1:
    str = input()
    str = str.lower()
    for i in str:
        if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u':
            s+=1
    if str == "#":
        break
    print(s)
    s = 0