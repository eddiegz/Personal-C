infile=open('frogin.txt','r')
outfile=open('frogout.txt','w')
n=int(infile.readline())
list1=[]
for i in range(n):
    list1.append(int(infile.readline()))
    
list2=[]
p=list1[0]
for i in list1:
    p=min(p,i)
    list2.append(p)
list3=[]
p=list1[-1]
for i in reversed(list1):
    p=min(p,i)
    list3.append(p)
list3.reverse()
answer=0
for i in range(n):
    if list1[i]>list2[i] and list1[i]>list3[i]:
        answer=max(answer,list1[i]-list2[i]+list1[i]-list3[i])


outfile.write(str(answer))
outfile.close()

