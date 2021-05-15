infile=int(open('fibin.txt','r').readline().strip())
list1=[1,1,2,3,5,8]
if infile>6:
    a=5
    b=8
    for i in range(6,infile):
        c=a+b
        if c==10000:
            break
        a=b
        b=c
        a=str(a)
        b=str(b)
        a=a[-4:]
        b=b[-4:]
        a=int(a)
        b=int(b)
        
    answer=c%1000
else:
    answer=list1[infile-1]%1000

outfile=open('fibout.txt','w')
outfile.write(str(answer))
outfile.close()