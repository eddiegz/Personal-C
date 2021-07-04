infile=open('hippoin.txt','r').readlines()
n,h,f=map(int,infile[0].strip().split())
place=[0]+[int(i) for i in infile[1:]]+[n]
length=[]
for i in range(1,h+1):
    length.append(place[i]-place[i-1]-1)
length.append(place[-1]-place[-2])
answer=0 
modi=length[1:-1]
modi.sort()
    
chance=f//2
if chance>0:answer=sum(modi[-chance:])

chance=(f-1)//2
current=0
if length[0]>length[-1]:current+=length[0]
else:current+=length[-1]
if chance>0:current+=sum(modi[-chance:])
answer=max(current,answer)

chance=(f-2)//2
current=length[0]+length[-1]
if chance>0:current+=sum(modi[-chance:])
answer=max(current,answer)

open('hippoout.txt','w').write(str(max(0,answer)))
