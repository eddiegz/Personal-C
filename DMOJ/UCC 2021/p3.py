n=int(input())
x,y=map(int,input().split())
r=int(input())
answer=0
for i in range(r):
    l,r=map(int,input().split())
    if l<=x and r>=y:
        p=y-x+1
    elif l<x and r<x:
        p=0
    elif l>y and r>y:
        p=0
    elif l<=x:
        p=r-x+1
    elif r>=y:
        p=y-l+1
    else:
        p=r-l+1
    answer+=p

print(answer)