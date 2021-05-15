n,p=map(int,open('genin.txt','r').readline().split())
list1=[0 for i in range(n)]
index=0
while True:
    for i in range(1,n+1):
        if p>=i+index*n:
            p-=i+index*n
            list1[i-1]+=i+index*n
        else:
            left=p-0
            list1[i-1]+=left
            p=0
            break
    index+=1
    if p==0:
        break
answer=max(list1)
ai=list1.index(max(list1))+1
outfile=open('genout.txt','w')
outfile.write(str(ai)+' '+str(answer))
outfile.close()