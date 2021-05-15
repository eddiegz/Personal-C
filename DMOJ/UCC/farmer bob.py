h=int(input(''))
t=int(input(''))
tractor=[int(i) for i in input('').split()]
m=int(input(''))
tline=input('')
max1=0
gap=0
for i in tline:
    if gap>max1:
        max1=gap
    if i=='X' or i=='0':
        gap+=1
    else:
        max1=max(max1,gap)
        gap=0
while True:
    tu=max(tractor)
    if tu>max1:
        tractor.remove(tu)
    else:
        break
if h%tu==0:
    answer=int(h//tu)
else:
    answer=int((h//tu)+1)
print(answer)