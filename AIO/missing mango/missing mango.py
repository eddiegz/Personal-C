line =open('manin.txt','r').readline()
lx,cx,ld,cd=map(int,line.split())


p=lx-ld
l=cx-cd
c=cx+cd
d=lx+ld

if (lx-ld)==(cx-cd):
    result=p
elif (lx-ld)==(cx+cd):
    result=p
elif (lx+ld)==(cx-cd):
    result=d
elif (lx+ld)==(cx+cd):
    result=d

outfile=open('manout.txt','w')
outfile.write(str(result))
outfile.close()