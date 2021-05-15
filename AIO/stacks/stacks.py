infile=open('stacksin.txt','r')
outfile=open('stacksout.txt','w')
list2=[]
string=''
for c in infile:
    i=c.strip()
    if i.isalpha()==False:
        list2.append(i)
        string+=str(' '.join(list2)+'\n')
    elif i=='p':
        list2.pop()
        if len(list2)==0:
            string+='stack is empty!\n'
        else:
            string+=str(' '.join(list2)+'\n')
    elif i=='q':
        break
outfile.write(string)
outfile.close()


