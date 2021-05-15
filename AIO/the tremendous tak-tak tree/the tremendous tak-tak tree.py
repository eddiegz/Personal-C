infile=int(open('taktakin.txt','r').readline())
number=0
while (infile-1)%11!=0:
    infile*=2
    number+=1
outfile=open('taktakout.txt','w')
outfile.write(str(number)+' '+str(infile))
outfile.close()