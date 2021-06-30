infile=open('invin.txt','r').readlines()
r,c=map(int,infile[0].split())
line,name=infile[1:],{}
for i in range(r):
    for j in range(c-1):
        ce1,ce2=line[i][j],line[i][j+1]
        if ce1!=ce2:
            if ce1 not in name:name[ce1]=[ce2]
            if ce2 not in name:name[ce2]=[ce1]
            if ce1 not in name[ce2]:name[ce2].append(ce1)
            if ce2 not in name[ce1]:name[ce1].append(ce2)
for j in range(c):
    for i in range(r-1):
        ce1,ce2=line[i][j],line[i+1][j]
        if ce1!=ce2:
            if ce1 not in name:name[ce1]=[ce2]
            if ce2 not in name:name[ce2]=[ce1]
            if ce1 not in name[ce2]:name[ce2].append(ce1)
            if ce2 not in name[ce1]:name[ce1].append(ce2)
answer=0
for i in name:
    answer=max(answer,len(name[i]))
open('invout.txt','w').write(str(answer))