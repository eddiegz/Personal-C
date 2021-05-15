infile=int(open('primein.txt','r').readline())
outfile=open('primeout.txt','w')
for i in range(2,infile+1):
    prime=True
    for e in range(2,i):
        if (i%e) == 0:
            prime=False
            break
    if prime==True:
        outfile.write(str(i)+'\n')
outfile.close()