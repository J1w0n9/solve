A, B, C, D, F = 4.0, 3.0, 2.0, 1.0, 0.0
score = 0.0
s = input()
if s[0] == 'A':
    score = score + A
    if s[1] == '+':
        score = score + 0.3
    elif s[1] == '0':
        score = score
    elif s[1] == '-':
        score = score - 0.3
elif s[0] == 'B':
    score = score + B
    if s[1] == '+':
        score = score + 0.3
    elif s[1] == '0':
        score = score
    elif s[1] == '-':
        score = score - 0.3
elif s[0] == 'C':
    score = score + C
    if s[1] == '+':
        score = score + 0.3
    elif s[1] == '0':
        score = score
    elif s[1] == '-':
        score = score - 0.3
elif s[0] == 'D':
    score = score + D
    if s[1] == '+':
        score = score + 0.3
    elif s[1] == '0':
        score = score
    elif s[1] == '-':
        score = score - 0.3
elif s[0] == 'F':
    score = score + F

print(score)