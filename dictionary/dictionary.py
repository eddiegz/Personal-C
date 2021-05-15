infile=open('dictin.txt','r')
d,w=map(int,infile.readline().strip().split())
dic={}
string=''
for i in range(d):
    wi,wc=map(int,infile.readline().strip().split())
    dic[wi]=wc
for i in range(w):
    p=int(infile.readline().strip())
    if p not in dic:
        string+='C?'+'\n'
    else:
        string+=str(dic[p])+'\n'

outfile=open('dictout.txt','w')
outfile.write(string)
outfile.close()
