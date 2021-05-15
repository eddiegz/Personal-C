infile=open('listin.txt','r')
f=int(infile.readline().strip())
dic={}
for i in range(f):
    a,b=map(int,infile.readline().strip().split())
    if a not in dic:
        dic[a]=0
    if b not in dic:
        dic[b]=0
    dic[a]+=1
    dic[b]+=1
answer=''
list1=[]
max_key = max(dic, key=dic.get)
p=dic[max_key]
del dic[max_key]
max_key2 = max(dic, key=dic.get)
c=dic[max_key2]
del dic[max_key2]
if c==p:
    list1.append(str(max_key))
    list1.append(str(max_key2))
    max_key2 = max(dic, key=dic.get)
    while dic[max_key2]==p:
        list1.append(str(max_key2))
        del dic[max_key2]
        max_key2 = max(dic, key=dic.get)
else:
    list1.append(str(max_key))

list1.sort()
for i in list1:
    answer+=i+'\n'
outfile=open('listout.txt','w')
outfile.write(str(answer))
outfile.close()