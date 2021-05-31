infile=open('sitin.txt','r')
r,s=map(int,infile.readline().strip().split())
nc=int(infile.readline())

np=r*s
ps=nc-np
if np>nc:
    np,ps=nc,0

open('sitout.txt','w').write(str(np)+' '+str(ps))
