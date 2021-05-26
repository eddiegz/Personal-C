infile=open('jewelsin.txt','r')
outfile=open('jewelsout.txt','w')
n=int(infile.readline())
list1=[]
line=infile.readline().strip()
list2=[]
for i in line:
    list1.append(i)
step=0
start=list1[0]
for i in range(n):
    if list1[i]==start:
        step+=1
        if i==n-1:
            list2.append(step)
    else:
        list2.append(step)
        step=1
        start=list1[i]
        if i==n-1:
            list2.append(step)

if len(list2)>=3:
    if list1[0]==list1[-1]:
        list2[0]+=list2[-1]
        del list2[-1]
answer=0
if len(list2)==1:
    answer=sum(list2)
else:
    for i in range(len(list2)):
        answer=max(answer,list2[i]+list2[i-1])


outfile.write(str(answer))
outfile.close()  