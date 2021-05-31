n=int(input())
list1=[0]*(n+1)
fib=[0]*(n+1)
mod=2021
for i in range(n):
    if i==1 or i==2:
        fib[i]=1
    else:
        fib[i]=(fib[i-1]+fib[i-2])%2021
        list1[i]=fib[i]+i%50
visited=[0]*(n+1)
to=[1]
while len(to)>0:
    v=to[0]
    to.pop()
    if v+1<=n and not visited[v+1]:
        visited[v+1]=visited[v]+1
        to.append(v+1)
    if v-1>=1 and not visited[v-1]:
        visited[v-1]=visited[v]+1
        to.append(v-1)
    if v+list1[v]<=n and not visited[v+list1[v]]:
        visited[v+list1[v]]=visited[v]+1
        to.append(v+list1[v])
    if v-list1[v]>=1 and not visited[v-list1[v]]:
        visited[v-list1[v]]=visited[v]+1
        to.append(v-list1[v])
    if v==n:
        print(visited[v])
