infile=open("tennisin.txt","r")
outfile=open("tennisout.txt","w")

b,n=map(int,infile.readline().split())
answer,index,bins=0,1,[]
done=[False]*100005
for i in infile.readline().split():
    bins.append((int(i),index))
    index+=1

bins.sort(reverse=True)
length=b
available=b
initial=0

while True:
    if n<=0:break
    to_go=[bins[-1]]
    ch=bins[-1][0]
    index=bins[-1][1]
    bins.pop()
    for i in range(length-2,-1,-1):
        if bins[i][0]==ch:
            to_go.append(bins[i])
            bins.pop()
        else:
            break
    length-=len(to_go)
    if (ch-initial)*available<n:
        n-=(ch-initial)*available
        available-=len(to_go)
        initial=ch
        for vol,index in to_go:
            done[index]=True
    else:
        time=n//(available)
        if time>0:
            if n%available>0:
                n-=time*available
                for i in range(1,b+1):
                    if done[i]==False:
                        n-=1
                    if n==0:
                        answer=i
                        break
            else:
                for i in range(b,0,-1):
                    if done[i]==False:
                        answer=i
                        n=0
                        break
        else:
            for i in range(1,b+1):
                if done[i]==False:
                    n-=1
                if n==0:
                    answer=i
                    break

outfile.write(str(answer))
outfile.close()