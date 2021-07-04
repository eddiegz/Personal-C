infile=open('hirein.txt','r').readlines()
n=int(infile[0])
monks=[int(i) for i in infile[1:1+n]]
s=int(infile[1+n])
student=[int(i) for i in infile[2+n:2+n+s]]
m=int(infile[2+n+s])
master=[int(i) for i in infile[3+n+s:]]
answer=0

monks.sort()
student.sort()
master.sort()

N,S,M=0,0,0
while N<n and S<s:
    if monks[N]<=student[S]:
        answer+=1
        N+=1
        S+=1
    else:
        S+=1
while N<n and M<m:
    if monks[N]>=master[M]:
        answer+=1
        N+=1
        M+=1
    else:
        N+=1
        
open('hireout.txt','w').write(str(answer))