infile=open('rainin.txt','r')
n,c=map(int,infile.readline().strip().split())
p=0
number=0
for i in range(n):
    if p>=c:
        break
    p+=int(infile.readline().strip())
    number+=1


    
outfile=open('rainout.txt','w')
outfile.write(str(number))
outfile.close()