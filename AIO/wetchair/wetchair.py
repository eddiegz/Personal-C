infile=open('chairsin.txt','r')
c,n,k=map(int,infile.readline().split())
line=[i for i in infile.readline()]

answer,i,j,d,w=c,0,0,0,0

while i<c:
    while (d<n-k or w+d<n) and j<c:
        if line[j]=='w':
            w+=1
        else:
            d+=1
        j+=1
        
    if w+d>=n and d>=n-k:
        answer=min(answer,j-i)
    
    if line[i]=='w':
        w-=1
    else:
        d-=1
    i+=1
        

outfile=open('chairsout.txt','w')
outfile.write(str(answer))
outfile.close()