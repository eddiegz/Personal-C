file=open('salesin.txt','r')
list1=[]
for i in file:
    list1.append(int(i))
a=list1[0]
b=list1[1]
c=list1[2]
ac=a+c
ab=a+b
bc=b+c
if ac>=ab and ac>=bc:
    answer=ac
elif ab>=ac and ab>=bc:
    answer=ab
elif bc>=ac and bc>=ab:
    answer=bc
    
    
outfile=open('salesout.txt','w')
outfile.write(str(answer))
outfile.close()
