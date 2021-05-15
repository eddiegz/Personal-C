infile=open('heatin.txt','r')
outfile=open('heatout.txt','w')
n,h=map(int,infile.readline().split())
answer=0
index=0
for i in range(n):
    temp=int(infile.readline())
    if temp>=h:
        index+=1
        if i==n-1:
            answer=max(answer,index)
    else:
        answer=max(answer,index)
        index=0
outfile.write(str(answer))
outfile.close()