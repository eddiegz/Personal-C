infile=open('alienin.txt','r')
n,w=map(int,infile.readline().split())
list1=[]
for i in range(n):
    p=int(infile.readline())
    list1.append(p)
i,j=0,0
index=0
currentp=0
answer=0
while i<n:
    while index<w and j<n:
        index=(list1[j]-list1[i])
        if index<w:
            currentp+=1
        j+=1
    if currentp>answer:
        answer=max(answer,currentp)
    index=0
    i+=1
outfile=open('alienout.txt','w')
outfile.write(str(answer))
outfile.close()

    