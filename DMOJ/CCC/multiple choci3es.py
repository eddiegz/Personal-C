times=int(input())
list1=[]
list2=[]
answer=0
for i in range(times):
    list1.append(input())
for i in range(times):
    list2.append(input())
for i in range(times):
    if list1[i]==list2[i]:
        answer+=1
print(answer)