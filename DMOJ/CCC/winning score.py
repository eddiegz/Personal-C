a3=int(input())
a2=int(input())
a1=int(input())
b3=int(input())
b2=int(input())
b1=int(input())
if a3+a2+a1<b3+b2+b1:
    print('B')
elif a3+a2+a1==b3+b2+b1:
    print('T')
else:
    print('A')