file=open('ninjain.txt','r').readline()
n,k=map(int,file.split())
ans=0
while n>0:
    n-=1
    if n-k>=0:
        n-=k
        ans+=k
    else:
        ans+=n
        n=0
outfile=open('ninjaout.txt','w')
outfile.write(str(ans))
outfile.close()
