infile=open('sitin.txt','r')
r,s=map(int,infile.readline().split())
nc=int(infile.readline())

np=min(nc,r*s)
ps=max(0,nc-np)

open('sitout.txt','w').write(str(np)+' '+str(ps))
