import math
infile=int(open('fibin.txt','r').readline().strip())

def fi(n):
    five_sqrt = 5 ** 0.5

    return int(round((((1 + five_sqrt)/2) ** n)/five_sqrt))
    

answer=fi(infile)%1000

outfile=open('fibout.txt','w')
outfile.write(str(answer))
outfile.close()
