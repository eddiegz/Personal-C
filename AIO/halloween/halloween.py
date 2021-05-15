infile=int(open('hallin.txt','r').readline())
outfile=open('hallout.txt','w')
index=1
while True:
    if infile>=index:
        infile-=index
        index+=1
    else:
        break
    
outfile.write(str(index))
outfile.close()