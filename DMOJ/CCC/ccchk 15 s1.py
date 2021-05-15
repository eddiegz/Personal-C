n,m=map(int,input().split())
list1=[int(i) for i in input().split()]
list1.sort()
max1=m-list1[0]
number=0
while max1>0:
    if max1 in list1:
        p=sorted(list1,reverse=True).index(max1)
        if p==0:
            l=len(list1)-1
        else:
            l=len(list1)-p-1
        number+=l
    else:
        max1-=1
        while max1 not in list1 and max1>list1[0]:
            max1-=1
        if max1<list1[0]:
            break
        else:
            p=sorted(list1,reverse=True).index(max1)
            l=len(list1)-p-1
            number+=l
    del list1[0]
    max1=m-list1[0]
if max1==0 and list1[0]==0 and list1[-1]==0:
    number=len(list1)-1
print(number)
