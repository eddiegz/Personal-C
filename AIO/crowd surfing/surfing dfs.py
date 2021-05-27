infile=open('surfin.txt','r').readlines()
outfile=open('surfout.txt','w')
r,c=map(int,infile[0].split())
lines=[line.strip() for line in infile[1:]]
good=[(r-1,c-1)]

def checker1(square):
    row=square[0]
    col=square[1]
    if row>0 and lines[row-1][col]=='v':
        good.append((row-1,col))
def checker2(square):
    row=square[0]
    col=square[1]
    if col>0 and lines[row][col-1]=='>':
        good.append((row,col-1))
count=0
while len(good)>0:
    square=good.pop()
    count+=1
    checker1(square)
    checker2(square)

outfile.write(str(r*c-count))
outfile.close()