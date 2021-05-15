infile=open('cocoin.txt','r')
outfile=open('cocoout.txt','w')
lx,ly,ld=map(int,infile.readline().split())
cx,cy,cd=map(int,infile.readline().split())

dx=abs(lx-cx)
dy=abs(ly-cy)
dz=(dx**2+dy**2)**0.5

if ld+cd>=dz:
    answer='yes'
    if ld>cd+dz or cd>ld+dz:
        answer='no'
else:
    answer='no'
    
    
outfile.write(answer)
outfile.close()