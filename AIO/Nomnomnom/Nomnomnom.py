infile=open('nomin.txt','r')
outfile=open('nomout.txt','w')
n=int(infile.readline())
list1=[]
for i in range(n):
    list1.append(int(infile.readline()))
answer=1
hi=list1[0]
limit=hi
number=1
while number<n:
    current=0
    while current<limit:
        if number>=n:
            break
        current+=list1[number]
        number+=1
    if number>=n and current<limit:
        break
    limit=current
    answer+=1
outfile.write(str(answer))
outfile.close()   
