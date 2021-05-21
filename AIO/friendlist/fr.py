infile=open('listin.txt','r')
times=int(infile.readline())
list1=[0]*1001

for i in range(times):
    a,b=map(int,infile.readline().split())
    list1[a]+=1
    list1[b]+=1

max1=0
answer=[]
for i in range(len(list1)):
    if list1[i]<max1:
        pass
    elif list1[i]==max1:
        answer.append(i)
    else:
        answer=[]
        answer.append(i)
        max1=list1[i]

outfile=open('listout.txt','w')
for i in answer:
    outfile.write(str(i)+'\n')
outfile.close()
