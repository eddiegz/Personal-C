ln=int(input())
number=0
x,y=[],[]
while True:
    xp,yp=input().split()
    x.append(int(xp))
    y.append(yp)
    number+=1
    if number==ln:
        print(x)
        print(y)
        for i in number:
            print(int(xp)*yp)
        #print(int(xp)*yp)
        break
