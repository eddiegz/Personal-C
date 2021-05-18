p=int(input())
l=[0]
used=0
for i in range(p):
    mins,incline=map(int,input().split(','))
    if incline>0:
        used=used+1*mins+incline//10
    elif incline==0:
        used=used+1*mins
    else:
        used=max(0,used+(incline//10)*mins)
    l.append(used)
print(max(l))
