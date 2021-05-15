infile=int(open('bugsin.txt','r').readline())
outfile=open('bugsout.txt','w')
while True:
    infile+=1
    if infile%7==0:
        answer=infile
        break
    
outfile.write(str(answer))
outfile.close()
        