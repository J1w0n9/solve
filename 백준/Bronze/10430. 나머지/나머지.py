a, b, c = map(int, input().split())
#(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
#(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
print((a+b)%c)
print(((a%c)+(b%c))%c)
print((a*b)%c)
print(((a%c)*(b%c))%c)