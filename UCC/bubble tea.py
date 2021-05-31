n=int(input())
price=[100000,100000,100000]
t=[0,0,0]
for i in range(n):
    p=int(input())
    total1=t[-1]+p
    total2=t[-2]+(price[-1]+p-0.25*min(price[-1],p))
    total3=t[-3]+(price[-2]+price[-1]+p-0.5*min(price[-2],price[-1],p))
    
    besttotal=min(total1,total2,total3)
    
    price.append(p)
    t.append(besttotal)
print(int(t[-1]))