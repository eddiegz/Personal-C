infile=open('mousein.txt','r').readlines()
dic1,dic2={},{}
for i in infile:
    a,b=map(int,i.split())
    if a not in dic1:dic1[a]=0
    if a not in dic2:dic2[a]=0
    if b not in dic1:dic1[b]=0
    if b not in dic2:dic2[b]=0
    dic1[a]+=1
    dic2[b]+=1
rec,short=[],[]
for i in infile:
    a,b=map(int,i.split())
    if dic1[a]<=2 and dic2[b]<=2:rec.append((a,b))
    else:short.append((a,b))
short.sort()
rec.append(short[0])
rec.append(short[-1])
left,right,up,down=10000000,0,0,100000000
for i in rec:
    a,b=i
    left=min(a,left)
    right=max(a,right)
    up=max(b,up)
    down=min(b,down)
del short[0]
del short[-1]
a,b,d=[],[],False
for i in short:
    al,bl=i
    a.append(al)
    b.append(bl)
if sum(a)==a[0]*2:same=a[0]
else:same=b[0];d=True
if same==left and d==False:answer='W'
elif same==right and d==False:answer='E'
elif same==up and d:answer='N'
else:answer='S'
open('mouseout.txt','w').write(str(answer))