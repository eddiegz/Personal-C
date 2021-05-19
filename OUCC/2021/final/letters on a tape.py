line=[i for i in input()]
list1=sorted(line)
answer=0
for i in range(len(line)):
    if line[i]!=list1[i]:
        answer+=1
print(answer)