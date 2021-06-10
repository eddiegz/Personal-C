infile=open('ghostin.txt','r')
n,k=map(int,infile.readline().strip().split())
x,y,dic=[],[],{}
for i in range(n):
    a,b=map(int,infile.readline().split())
    x.append(a)
    y.append(b)
time=[k*i for i in x]
for i in range(n):
    ts=y[i]-time[i]
    if ts not in dic:
        dic[ts]=0
    dic[ts]+=1
open('ghostout.txt','w').write(str(max(dic.values())))
