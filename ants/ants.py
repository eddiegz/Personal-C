infile=open('antsin.txt','r')
outfile=open('antsout.txt','w')
d=int(infile.readline())
answer=0
p=int(infile.readline())
index=False
for i in range(d-1):
    c=int(infile.readline())
    if c>p:
        index=True
        if i==d-2:
            answer+=1
    else:
        if index==True:
            answer+=1
        index=False
    p=c
outfile.write(str(answer))
outfile.close()
    
        
