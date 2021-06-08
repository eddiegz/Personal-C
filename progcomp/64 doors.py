list1=[False]*65
for i in range(1,65):
    for e in range(i,65,i):
        if list1[e]:
            list1[e]=False
        else:
            list1[e]=True
del list1[0]
print(64-sum(list1))
        