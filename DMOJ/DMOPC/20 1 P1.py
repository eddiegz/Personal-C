a,b=input().split()
list1=[]
action=[]
result=[]
for i in range(0,int(a)):
    line=input().split()
    for e in line:
        list1.append(e)
for i in range(0,int(b)):
    p=int(input())
    action.append(p)

for i in action:
    r=0
    f=0
    for e in list1[:i]:
        r+=e
    for g in list1[i:]:
        f+=g
    if r>=f:
        result.append(f)
    else:
        result.append(r)
for i in result:
    print(i)