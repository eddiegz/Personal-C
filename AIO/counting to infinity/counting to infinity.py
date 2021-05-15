infile=int(open('countin.txt','r').readline())
outfile=open('countout.txt','w')
for i in range(1,infile+1):
    outfile.write(str(i)+'\n')
outfile.close()
