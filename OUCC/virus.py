n,m=map(int,input().split())
G=[input() for i in range(n)]
S=[m*[0] for j in range(n)]

pc=0
path=0
for row in range(n):
    for col in range(m):
        if S[row][col]==0:
            path+=1
            r=row
            c=col
            while S[r][c]==0:
                S[r][c]=path
                if G[r][c]=='N':
                    r-=1
                elif G[r][c]=='S':
                    r+=1
                elif G[r][c]=='E':
                    c+=1
                elif G[r][c]=='W':
                    c-=1
            if S[r][c]==path:
                pc+=1
print(pc)
