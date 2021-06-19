import sys
sys.stdin=open('bcount.in','r')
sys.stdout=open('bcount.out','w')
n,q=map(int,input().split())
h,g,j=[0],[0],[0]
for i in range(1,n+1):
    p=int(input())
    if p==1:
        h.append(h[i-1]+1)
        g.append(g[i-1])
        j.append(j[i-1])
    elif p==2:
        h.append(h[i-1])
        g.append(g[i-1]+1)
        j.append(j[i-1])
    elif p==3:
        h.append(h[i-1])
        g.append(g[i-1])
        j.append(j[i-1]+1)
for i in range(q):
    a,b=map(int,input().split())
    print(f'{h[b]-h[a-1]} {g[b]-g[a-1]} {j[b]-j[a-1]}')
