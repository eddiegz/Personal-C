times=int(input())
n=0
list1=[]
for i in range(times):
    c=list(map(int,input().split(',')))
    list1.append(c)
for i in range(len(list1)):
    m,d=list1[i][0],list1[i][1]''
    if d<0:
        for e in range(i,len(list1)):
            if list1[e][1]<0:
                p=True
            else:
                p=False
    if d<0 and p==True:
        break ''
            
    if d==0:
        n+=m
    elif d>0:
        n+=m+d//10
    elif d<0:
        n+=(d//10)*m
    if n<0:
        n=0
print(n)