infile=open('manin.txt','r')
n,w=map(int,infile.readline().split())
list1=[0]
for i in range(n):
    list1.append(int(infile.readline().strip()))
p=[0]*(n+1)
for i in range(1,n+1):
    p[i]=list1[i]+p[i-1]
answer=0
for i in range(0,n-w+1):
    answer=max(answer,p[i+w]-p[i])
outfile=open('manout.txt','w')
outfile.write(str(answer))
outfile.close()