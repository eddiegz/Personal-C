n=int(input())
fibo=[1,1]
a=1
b=1
alist=[]
index=1
for i in range(n):
    c=a+b
    b=a
    a=c
    fibo.append(c)
for i in fibo:
    p=(i%2021)+((index)%50)
    if p>n:
        break
    else:
        alist.append(p)
    index+=1
position=1
move=0
while position!=n:
    position+=max(alist)
    if position>n:
        position-=max(alist)
        alist.remove(max(alist))
    elif position<n:
        dis=n-position
        move+=max(alist)
        alist.remove(max(alist))
        if dis<max(alist)+1:
            move+=dis
        else:
            move+=max(alist)+1
    else:
        move+=max(alist)
        break
print(move)