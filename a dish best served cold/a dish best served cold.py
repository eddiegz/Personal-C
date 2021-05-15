infile=open('dishin.txt','r')
n=int(infile.readline().strip())
list1=[]
for i in range(n):
    list1.append(int(infile.readline().strip()))
min1=min(list1)
max1=max(list1)
mean=sum(list1)//len(list1)

outfile=open('dishout.txt','w')
outfile.write(str(min1)+' '+str(max1)+' '+str(mean))
outfile.close()