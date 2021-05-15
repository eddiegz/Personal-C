infile=open('pairin.txt','r')
n=int(infile.readline().strip())
dic={}
for i in range(2*n):
    sn=int(infile.readline().strip())
    if sn not in dic:
        dic[sn]=i
    else:
        dic[sn]-=i
maxkey=min(dic,key=dic.get)
outfile=open('pairout.txt','w')
outfile.write(str(abs(dic[maxkey])))
outfile.close()