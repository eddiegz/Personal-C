infile=open('piratein.txt','r')
l=int(infile.readline().strip())
x=int(infile.readline().strip())
y=int(infile.readline())
xp=l-x
yp=l-y
if (xp+yp)>=x+y:
    answer=x+y
else:
    answer=xp+yp
    
outfile=open('pirateout.txt','w')
outfile.write(str(answer))
outfile.close()