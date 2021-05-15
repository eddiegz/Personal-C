infile=open('encyin.txt','r')
n,q=map(int,infile.readline().strip().split())
list1=[]
string=''
for i in range(n):
    list1.append(int(infile.readline().strip()))
for i in range(q):
    string+=str(list1[int(infile.readline().strip())-1])+'\n'
outfile=open('encyout.txt','w')
outfile.write(string)
outfile.close()