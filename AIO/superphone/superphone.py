infile=open('phonein.txt','r')
n=int(infile.readline().strip())
total,d,e,g=0,0,0,0

for i in range(1,n+1):
    if i==n:
        a=int(infile.readline().strip())
    else:
        a,b,c=map(int,infile.readline().strip().split())
    if n%2!=0:
        if i%2!=0:
            if a<=b+c:
                total+=a
            else:
                
                total+=b+c
        else:
            if c<=a+b:
                total+=c
            else:
                pass
    else:
        if i%2!=0:
            pass
        else:
            pass
        
outfile=open('phoneout.txt','w')
outfile.write(str(total))
outfile.close()