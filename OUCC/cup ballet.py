number=int(input())
swaps=int(input())
p=number-1
for i in range(swaps):
    a,b=map(int,input().split())
    if a == p:
        p=b
    elif b==p:
        p=a
print(p)
        