line=[int(i) for i in input().split()]
si=0
time=100000000
list1=[0]*len(line)
for i in line:
    if i<time:
        time=i
        list1[1]=list1[0]
        si+=1
        list1[0]=i
print(si)
        