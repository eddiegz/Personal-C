l,sb,sp,n=map(int,input().split())
dic={i:[] for i in range(1,l+1)}
for i in range(n):
    p1,p2=map(int,input().split())
    dic[p1].append(p2)

level=0
visited={i:False for i in range(1,l+1)}
visited[sb]=True
queue=[sb]

while not visited[sp]:
    level+=1
    new=[]
    for i in queue:
        for e in dic[i]:
            if not visited[e]:
                visited[e]=True
                new.append(e)
    queue=new
print(level)