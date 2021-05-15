infile=open('cutein.txt','r')
list1=[]
for i in infile:
    list1.append(int(i.strip()))
list1.reverse()
number=0
for i in list1:
    if i==0:
        number+=1
    else:
        break
outfile=open('cuteout.txt','w')
outfile.write(str(number))
outfile.close()
