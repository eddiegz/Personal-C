times=int(input())
list1=[]
for i in range(times):
    list1.append(input())
target=input()
string=''
l=[]
for i in list1:
    if target in i:
        l.append(i)
for i in l:
    for e in i:
        for c in list1:
            if e in c:
                l.append(c)
        
