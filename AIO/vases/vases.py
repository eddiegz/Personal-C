infile=int(open('vasesin.txt','r').readline())
a=0
b=0
c=0
if infile>=6:
    a=1
    b=2
    c=3
    infile-=6
else:
    a=0
    b=0
    c=0
while infile>0 and a!=0:
    c+=1
    infile-=1
answer=''
answer+=str(a)+' '+str(b)+' '+str(c)
outfile=open('vasesout.txt','w')
outfile.write(answer)
outfile.close()