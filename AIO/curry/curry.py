infile=open('curryin.txt','r').readline()
c,r,v=map(int,infile.split())
cr,cv,rv=0,0,0
if max(c,r,v)>=min(c,r,v)+(c+r+v)-min(c,r,v)-max(c,r,v):
    if c==max(c,r,v):
        answer=[0,v,r]
    elif r==max(c,r,v):
        answer=[v,0,c]
    else:
        answer=[r,c,0]
else:
    while max(c, r, v) != sum([c, r, v]):
        if min(c, r, v) == c:
            c += 1
            rv += 1
        elif min(c, r, v) == r:
            r += 1
            cv += 1
        else:
            v += 1
            cr += 1
        c -= 1
        r -= 1
        v -= 1
    answer=[rv,cv,cr]
outfile=open('curryout.txt','w')
outfile.write(' '.join(list(map(str,answer))))
outfile.close()
