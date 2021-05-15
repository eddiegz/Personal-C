infile=int(open('cultin.txt','r').readline())
outfile=open('cultout.txt','w')
number=0
while infile%2==0:
    infile//=2
    number+=1

outfile.write(str(infile)+' '+str(number))
outfile.close()