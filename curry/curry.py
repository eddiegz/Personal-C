infile=open('curryin.txt','r').readline()
c,r,v=map(int,infile.split())









outfile=open('curryout.txt','w')
outfile.write(str(answer))
outfile.close()
