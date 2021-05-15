infile=open('mixin.txt').readline()
a,b=map(int,infile.split())
if b==0:
    output=(str(a))
elif a%b==0:
    output=str((a//b))
else:
    p=int(a/b)
    q=a%b
    g=str(q)+'/'+str(b)
    output=str(p)+' '+g
    
outfile=open('mixout.txt','w')
outfile.write(output)
outfile.close()