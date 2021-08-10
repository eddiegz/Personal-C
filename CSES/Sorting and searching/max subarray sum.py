n=int(input())
line=[int(i) for i in input().split()]
list1=[0]
for i in range(n):
    list1.append(line[i]+list1[i])
answer=list1[1]
small=list1[0]
for i in range(1,n+1):
    answer=max(answer,list1[i]-small)
    small=min(small,list1[i])
print(answer)