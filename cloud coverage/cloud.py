infile=open('cloudin.txt','r').readlines()
n,k=map(int,infile[0].split())
list1=[0,int(infile[1])]
for i in range(1,n-1):
    list1.append(list1[i]+int(infile[i+1]))
answer=10000000000000
for i in range(n-k):
    answer=min(answer,list1[i+k]-list1[i])
outfile=open('cloudout.txt','w')
outfile.write(str(answer))
outfile.close()