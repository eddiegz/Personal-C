infile=open('janitorin.txt','r').readlines()
outfile=open('janitorout.txt','w')
r,c,q=map(int,infile[0].split())
line=[[int(i) for i in infile[e].split()] for e in range(1,r+1)]
change=[[int(i) for i in infile[e].split()] for e in range(r+1,1+r+q)]
count=0
def peakcheck(cell):
    row,col=cell
    h=line[row][col]
    if row>0 and line[row-1][col]>h:
        return False
    if row<r-1 and line[row+1][col]>h:
        return False
    if col>0 and line[row][col-1]>h:
        return False
    if col<c-1 and line[row][col+1]>h:
        return False
    return True
def peak(cell):
    row,col=cell
    co=0
    if peakcheck((row,col)):
        return 1
    if row>0 and peakcheck((row-1,col)):
        co+=1
    if row<r-1 and peakcheck((row+1,col)):
        co+=1
    if col>0 and peakcheck((row,col-1)):
        co+=1
    if col<c-1 and peakcheck((row,col+1)):
        co+=1
    return co
for i in range(r):
    for e in range(c):
        if peakcheck((i,e)):
            count+=1
outfile.write(str(count)+'\n')
for ch in change:
    i,j,h=ch
    i,j=i-1,j-1
    before=peak((i,j))
    line[i][j]=h
    after=peak((i,j))
    count+=after-before
    outfile.write(str(count)+'\n')
outfile.close()