infile=open('sitin.txt','r')
r,s=map(int,infile.readline().strip().split())
nc=int(infile.readline())

np=r*s
ps=nc-np
if np>nc:
    np=nc
    ps=0

answer=''
answer+=str(np)+' '+str(ps)

outfile=open('sitout.txt','w')
outfile.write(answer)
outfile.close()