infile=open('streetin.txt','r')
outfile=open('streetout.txt','w')
n,k=map(int,infile.readline().split())

n-=k
if n%(k+1)!=0:
    answer=(n//(k+1))+1
else:
    answer=n//(k+1)

outfile.write(str(answer))
outfile.close()
