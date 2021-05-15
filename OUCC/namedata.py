line=input().split()
length=0
wc=0
list1=[]
n=0
for i in line:
    for e in i:
        if e.lower() not in list1:
            list1.append(e.lower())
            n+=1
        else:
            pass
        if e.isupper():
            wc+=1
        length+=1
number=len(line)
print(length)
print(number)
print(wc)
print(n)
str1=' '.join(line)[::-1]
print(str1)