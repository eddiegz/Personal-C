line=[i for i in input().split()]
point=0
over=0
legal=0
for i in line:
    if i.isdigit():
        point+=int(i)
        legal+=1
    elif i=='NB':
        point+=1
    else:
        legal+=1
print(point)
print(legal/10)
    