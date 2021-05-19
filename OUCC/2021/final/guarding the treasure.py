times=int(input())
list1=[]
for i in range(times):
    list1.append(int(input()))
list2=[]
for i in range(len(list1)):
    p=list1[i]
    answer=0
    for e in range(i+1,len(list1)):
        if list1[e]<p:
            answer+=1
    list2.append(answer)
for i in list2:
    print(i)
                     