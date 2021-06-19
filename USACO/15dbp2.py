import sys
#sys.stdin=open('speeding.in','r')
#sys.stdout=open("speeding.out",'w')
n,m=map(int,input().split())
sl={}
for i in range(n):
    l,ss=map(int,input().split())
    sl[l]=ss
bs={}
for i in range(m):
    l,ss=map(int,input().split())
    bs[l]=ss
answer=0
current=0
seg=0
for i in sl:
    for e in bs:
        if bs[e]>sl[i] and e>=i:
            answer=max(bs[e]-sl[i],answer)
        current+=e
        if current>i:
            p=False
            break
    if not p:
        pass
print(answer)