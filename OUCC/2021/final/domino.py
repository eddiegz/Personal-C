n=int(input())
index=1
if n==0:
    index=0
while n>=index:
    n-=index
    index+=1
    if n<index:
        index-=1
        break
print(index)