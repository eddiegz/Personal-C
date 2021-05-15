infile=open('hailin.txt','r')
outfile=open('hailout.txt','w')
list1=[]
p=int(infile.readline().strip())

while p!=0:
    step=0
    while p!=1:
        if p%2==0:
            p/=2
        else:
            p=3*p+1
        step+=1
    list1.append(step)
    p=int(infile.readline().strip())
    
for i in list1:
    outfile.write(str(i)+'\n')
    
outfile.close()
    
    