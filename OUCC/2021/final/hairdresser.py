line=[int(i) for i in input().split()]
time=0
list1=[]
for i in range(len(line)):
    list1.append(i*10)
for i in range(len(list1)):
    if abs(list1[i]-line[i])%10==0:
        p=0
    else:
        p=abs(list1[i]-line[i])
    time=max(time,p)
print(time)