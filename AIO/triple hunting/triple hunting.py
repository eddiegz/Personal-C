infile=open('tripin.txt','r')
n=int(infile.readline().strip())
number=0
index=1
string=''
for i in range(n):
    if int(infile.readline().strip())%3==0:
        number+=1
        string+=str(index)+' '
    index+=1

outfile=open('tripout.txt','w')
if number==0:
    outfile.write('Nothing here!')
else:
    outfile.write(str(number)+'\n')
    outfile.write(string)
outfile.close()
    
    
        
