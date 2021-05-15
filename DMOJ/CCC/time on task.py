t=int(input())
c=int(input())
list1=[]
for i in range(c):
    list1.append(int(input()))
list1.sort()
total=0
number=0
for i in list1:
    if total<t:
        total+=i
        number+=1
    else:
        break
    if total>t:
        number-=1
        break
print(number)