infile=open('wetin.txt','r')
list1=[]
for i in infile:
    list1.append(int(i.strip()))
amount=0
for i in list1:
    amount+=i
    if amount>=10:
        amount-=10
    else:
        amount=0
outfile=open('wetout.txt','w')
outfile.write(str(amount))
outfile.close()