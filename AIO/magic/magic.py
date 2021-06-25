infile=open('magicin.txt','r')
a,b,c=map(int,infile.readline().split())
limit=27 if min(a,b,c)>=4 else 20
list1=[[a,b,0],[c,1,1],[0,1,1]]
list1[0][-1]=limit-sum(list1[0])
list1[2][0]=limit-list1[0][0]-list1[1][0]
list1[1][1]=limit-list1[1][0]-(limit-1-list1[0][2])
list1[1][2]=limit-list1[1][0]-list1[1][1]
list1[2][1]=limit-list1[0][1]-list1[1][1]
list1[2][2]=limit-list1[2][0]-list1[2][1]
outfile=open('magicout.txt','w')
for i in list1:
    string=' '.join(list(map(str,i)))
    outfile.write(string+'\n')
outfile.close()