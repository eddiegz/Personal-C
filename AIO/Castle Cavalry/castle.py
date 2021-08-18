infile=open('cavalryin.txt')
n=int(infile.readline())
dic={}
for i in range(n):
    p=int(infile.readline())
    if p not in dic:
        dic[p]=0
    dic[p]+=1
for i in dic:
    if dic[i]%i!=0:
        answer='NO'
        break
    else:
        answer='YES'
outfile=open('cavalryout.txt','w')
outfile.write(answer)
outfile.close()
