str = list(input())
for i in range(len(str)):
    if str[i].isupper():
        str[i] = str[i].lower()
    elif str[i].islower():
        str[i] = str[i].upper()
    print(str[i], end="")