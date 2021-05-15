line=[int(i) for i in input()]
list1=[]
p=0
list2=[]
for i in range(5):
    list1.append(line[p:p+6])
    p+=6
for i in range(6):
    list2.append(line[i::6])
r=0
y=0
for i in list1:
    ri=0
    yi=0
    for e in i:
        if e==1:
            yi=0
            ri+=1
        else:
            ri=0
            yi+=1
        if ri==3:
            r+=1
            ri-=1
        elif yi==3:
            y+=1
            yi-=1
for i in list2:
    ri=0
    yi=0
    for e in i:
        if e==1:
            yi=0
            ri+=1
        else:
            ri=0
            yi+=1
        if ri==3:
            r+=1
            ri-=1
        elif yi==3:
            y+=1
            yi-=1
print(f'R {r}')
print(f'Y {y}')
if r>y:
    print('R')
elif y>r:
    print('Y')
else:
    print('tie')
    
            