infile=open('baublesin.txt').readline()
ro,bo,s,rp,bp=map(int,infile.split())

answer1=0
r=ro-rp
b=bo-bp
if r<0:
    s=int(s)+r
    ro=int(rp)
if b<0:
    s=int(s)+b
    bo=int(bp)
answer1=int(s)+1
if r>=0 and b>=0:
    if r>b:
        answer1=b+int(s)+1
    else:
        answer1=r+int(s)+1
if answer1<0:
    answer1=0

    

outfile=open('baublesout.txt','w')
outfile.write(str(answer1))
outfile.close()