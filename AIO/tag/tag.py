infile=open('tagin.txt','r')
outfile=open('tagout.txt','w')
n,m=map(int,infile.readline().split())

list1=[0]*n
list2=[0]*n
list1[0]=1
list2[0]=1
for i in range(m):
    a,b=map(int,infile.readline().split())
    if list1[a-1]==1:
        list1[b-1]=1
    else:
        list2[b-1]=1
ta=sum(list1)
tb=sum(list2)
    
    
outfile.write(str(str(ta)+' '+str(tb)))

