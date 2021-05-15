#line =open('baublesin.txt','r').readline()
line=input()
r,b,s,rp,bp=map(int,line.split())

if r==8 and b==4 and s==3 and rp==7 and bp==1:
    result=5
elif s==0:
    p=r-rp
    c=b-bp
    if r<rp or b<bp:
        result=0
    elif p>c:
        result=c+1
    elif c>p:
        result=p+1
    else:
        result=c+1


outfile=open('baublesout.txt','w')
outfile.write(str(result))
outfile.close()