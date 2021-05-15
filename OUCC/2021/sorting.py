times=int(input())
line=[]
for i in range(times):
    a=list(map(int,input().split()))
    line.append(a)
for i in range(len(line)):
    if i==len(line)-1:
        break
    if line[i]>line[i+1]:
        line[i],line[i+1]=line[i+1],line[i]
for i in range(len(line)):
    if i==len(line)-1:
        break
    if line[i]>line[i+1]:
        line[i],line[i+1]=line[i+1],line[i]
for i in range(len(line)):
    if i==len(line)-1:
        break
    if line[i]>line[i+1]:
        line[i],line[i+1]=line[i+1],line[i]
for i in range(len(line)):
    if i==len(line)-1:
        break
    if line[i]>line[i+1]:
        line[i],line[i+1]=line[i+1],line[i]
for i in line:
    print(' '.join(list(map(str,i))))