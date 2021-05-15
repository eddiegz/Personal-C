infile=open('frogin.txt','r')
outfile=open('frogout.txt','w')
n=int(infile.readline())
list1=[]
for i in range(n):
    list1.append(int(infile.readline()))
i,j=0,0
answer=0
while i<n-1:
    while list1[j]<=list1[i] and j<n-1:
        j+=1
    if list1[j]<max(list1[j:]):
        j+=1
    p=(list1[j]-list1[i])+(list1[j]-min(list1[j:]))
    answer=max(answer,p)
    i+=1
    j=i




outfile.write(str(answer))
outfile.close()
