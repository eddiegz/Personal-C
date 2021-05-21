infile=open('hippoin.txt','r')
outfile=open('hippoout.txt','w')
n=int(infile.readline())
list1=[i for i in range(1,n+1)]
p1,p2,p3=int(infile.readline()),int(infile.readline()),int(infile.readline())
list1.remove(p1)
list1.remove(p2)
list1.remove(p3)
number=3
i,j=0,0
length=len(list1)
if length>=1:
    index=list1[0]
list2=[]
rc=0
step=0
    
while i<length:
    step=0
    while j<length and list1[j]==index:
        j+=1
        index+=1
        step+=1
    list2.append(step)
    if j==length:
        break
    index=list1[j]
    i+=1

answer=0
if len(list2)>=3:
    pp=max(list2[0],list2[-1])
    list2.remove(pp)
    pc=max(list2)
    answer=pp+pc
elif len(list2)==2:
    if p1==1 and p3==n:
        answer=max(list2)
    else:
        answer=sum(list2)
elif len(list2)==1:
    answer=sum(list2)

    
    
outfile.write(str(answer))
outfile.close()