infile=open('ghostin.txt','r')
n,k=map(int,infile.readline().strip().split())
dic={}

for i in range(n):
    x,t=map(int,infile.readline().strip().split())
    if x not in dic:
        dic[x]=[]
    dic[x].append(t)
answer=0
for s in range(1,11):
    p=0
    index=0
    last=list(dic)[-1]
    time=s
    while index<=last:
        if index in dic:
            for i in dic[index]:
                if i==time:
                    p+=1
        index+=1
        time+=k
    answer=max(answer,p)
            
    

outfile=open('ghostout.txt','w')
outfile.write(str(answer))
outfile.close()