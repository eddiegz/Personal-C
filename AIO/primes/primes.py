infile=int(open('primes.in','r').readline())
outfile=open('primes.out','w')
max1=10**infile
for i in range(infile,max1):
    prime=True
    for e in range(2,i//2):
       if (i%e) == 0:
           prime=False
           break
    if i==1:
        answer=0
        break
    elif prime==True:
        answer=i
        break
outfile.write(str(answer))
outfile.close()
