infile=open('listin.txt','r')
f=int(infile.readline().strip())

list1=[]
list2=[]
list3=[]
for i in range(f):
    a,b=map(int,infile.readline().strip().split())
    list1.extend((a,b))

for i in list1:
    if i not in list2:
        list2.append(i)

max1=list1.count(list2[0])
list3.append(max1)
for i in list2[1:]:
    if list1.count(i)>max1:
        list3.clear()
        list3.append(i)
        max1=list1.count(i)
    elif list1.count(i)==max1:
        list3.append(i)

list3.sort()
number=''
for i in list3:
    number+=str(i)+'\n'

outfile=open('listout.txt','w')
outfile.write(str(number))
outfile.close()