infile=open('cartin.txt','r')
w,h=map(int,infile.readline().split())
total=0
list1=[]
list2=[]

for i in range(h):
    line=[e for e in infile.readline().strip()]
    list1.append(line)
    fin,fend=0,0
    if '#' in line:
        fin=line.index('#')
        if fin==0:
            list2.append([i,fin])
        for e in range(len(line)):
            if line[e]=='#':
                fend=max(fend,e)
                if fend==len(line)-1:
                    list2.append([i,fend])
        total+=(fend-fin)+1
index=0
list3=[]
for i in range(len(list2)-1):
    c=list2[i][1]
    for i in range(list2[i][0]+1,list2[i+1][0]):
        list3.append([i,c])
for i in list3:
    if i[1]==w-1:
        f=list1[i[0]][::-1]
        for e in f:
            if e=='.':
                total+=1
            else:
                break
    elif i[1]==0:
        f=list1[i[0]]
        for e in f:
            if e=='.':
                total+=1
            else:
                break
        
'''
for i in range(h):
    line=[e for e in infile.readline().strip()]
    for i in line:
        if i=='.':
            total-=1
        else:
            line=line[::-1]
            for i in line:
                if i=='.':
                    total-=1
                else:
                    p=False
                    break
            if p==False:
                break'''
    

outfile=open('cartout.txt','w')
outfile.write(str(total))
outfile.close()
    