infile=open('holesin.txt','r')
outfile=open('holesout.txt','w')
l,w=map(int,infile.readline().split())
a,b=map(int,infile.readline().split())

answer=(l//a)*(w//b)

outfile.write(str(answer))
outfile.close()