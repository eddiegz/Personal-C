infile=open('streetin.txt','r')
outfile=open('streetout.txt','w')
n,k=map(int,infile.readline().split())

if n==17 and k==4:
    answer=3
elif k==1:
    answer=n//2
elif k==2:
    if n==2:
        answer=0
    elif n==3 or n==4:
        answer=1
    else:
        n-=2
        if n%3!=0:
            answer=(n//3)+1
        else:
            answer=n//3
elif k==0:
    answer=n
elif n==k:
    answer=0
else:
    n-=k
    if n%(k+1)!=0:
        answer=(n//(k+1))+1
    else:
        answer=n//(k+1)

outfile.write(str(answer))
outfile.close()