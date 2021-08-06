n=int(input())
cus=[int(input()) for i in range(n)]
m=int(input())
price=[int(input()) for i in range(m)]
price.sort(reverse=True)
cus.sort(reverse=True)
answer=0
C,P=0,0
while C<n and P<m:
    if cus[C]>=price[P]:
        answer+=price[P]
        C+=1
        P+=1
    else:
        P+=1
print(answer)
