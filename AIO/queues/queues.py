infile=open('queuesin.txt','r')
list1=[]
string=''
for i in infile:
    i=i.strip()
    if i[0]!='-':
        list1.append(i)
        string+=str(' '.join(list1)+'\n')
    else:
        if len(list1)<1:
            string+='queue is empty!\n'
        else:
            list1.pop(int(i[1])-1)
            if len(list1)<1:
                pass
            else:
                string+=str(' '.join(list1)+'\n')
outfile=open('queuesout.txt','w')
outfile.write(string)
outfile.close()