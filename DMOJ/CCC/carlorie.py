b=int(input())
s=int(input())
d=int(input())
de=int(input())
total=0
if b==1:
    total+=461
elif b==2:
    total+=431
elif b==3:
    total+=420
elif b==4:
    pass
if s==1:
    total+=100
elif s==2:
    total+=57
elif s==3:
    total+=70
elif s==4:
    pass
if d==1:
    total+=130
elif d==2:
    total+=160
elif d==3:
    total+=118
elif d==4:
    pass
if de==1:
    total+=167
elif de==2:
    total+=266
elif de==3:
    total+=75
elif de==4:
    pass
print(f'Your total Calorie count is {total}.')