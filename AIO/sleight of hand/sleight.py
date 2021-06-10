infile=open('handin.txt','r')
n,s,k=map(int,infile.readline().split())
for i in range(k):
    a,b=map(int,infile.readline().split())
    if a<s and b>=s:
        s-=1
    elif a==s:
        s=b
    elif a>s and b<=s:
        s+=1
open('handout.txt','w').write(str(s))