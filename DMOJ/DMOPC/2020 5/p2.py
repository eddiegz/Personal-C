n,m=map(int,input().split())
slope=n/m
number=0
index=1
list1=[]
for i in range(1,m+1):
    height=float(i*slope)
    if (height%1!=0 or height%1==0) and height>=index:
        if height%1!=0:
            p=(height//index)+1
            number+=p
        else:
            p=(height//index)
            number+=p
        index+=p
        for e in range(p):
            
        list1.append(str(index-1)+' '+str(i))
        list1.append(str(index)+' '+str(i))
    elif height%1!=0:
        number+=1
        list1.append(str(index)+' '+str(i))
    elif height%1==0:
        number+=1
        index+=1
        list1.append(str(index-1)+' '+str(i))

print(int(number))
for i in list1:
    print(i)