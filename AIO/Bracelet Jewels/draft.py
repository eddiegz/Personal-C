lines=open('jewelsin.txt','r').readlines()
n=int(lines[0])
string=lines[1].strip()
s=string+string
c=1
p=0
bp=0
for i in range(1,2*n):
    if s[i]==s[i-1]:
        c+=1
    else:
        if c+p>bp:
            bp=c+p
        p=c
        c=1
if c>1:
    if c+p>bp:
        bp=c+p
if bp==2*n:
    answer=n
else:
    answer=bp
outfile=open('jewelsout.txt','w')
outfile.write(str(answer))
outfile.close()