import collections

def cal(num):
    i=1
    f=factor[num]
    while i*i<=num:
        if num%i==0 and i<=max(n,m) and num//i<=max(n,m):
            f.append(i)
        i+=1
    return num

def dfs(i,j):
    if i==m-1 and j==n-1:
        return True
    if i>=m and j>=n or grid[i][j] in factor:
        return False
    num=cal(grid[i][j])
    for p in factor[num]:
        nj=num//p
        if dfs(p-1,nj-1) or dfs(nj-1,p-1):
            return True
        return False

m=int(input())
n=int(input())
grid=[]
for i in range(m):
    grid.append(list(map(int,input().split())))
factor=collections.defaultdict(list)
print('yes' if dfs(0, 0) else 'no')
