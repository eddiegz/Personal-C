n=int(input())
line=[int(i) for i in input().split()]
max1=0
answer=[]
for i in line:
    if i%2==0:
        max1+=i
        if i==line[-1]:
            answer.append(max1)
    else:
        answer.append(max1)
        max1=0
        
print(max(answer))
