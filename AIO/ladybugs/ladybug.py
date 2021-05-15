infile=open('ladyin.txt','r')
list1=[]
for i in infile:
    list1.append(int(i.strip()))

list1.remove(list1[0])
ma=max(list1)
mi=min(list1)

answer=ma-mi+1
outfile=open('ladyout.txt','w')
outfile.write(str(answer))
outfile.close()

