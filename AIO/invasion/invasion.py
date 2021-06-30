infile=open('invin.txt','r').readlines()
r,c=map(int,infile[0].split())
line=infile[1:]
name={}
for i in range(r):
    for e in range(c):
        if line[i][e] not in name:
            name[line[i][e]]=[]
        if i+1<r:
            if line[i+1][e]!=line[i][e]:
                if line[i+1][e] not in name[line[i][e]]:
                    name[line[i][e]].append(line[i+1][e])
                if line[i+1][e] not in name:
                    name[line[i+1][e]]=[]
                if line[i][e] not in name[line[i+1][e]]:
                    name[line[i+1][e]].append(line[i][e])
        if e+1<c:
            if line[i][e+1]!=line[i][e]:
                if line[i][e+1] not in name[line[i][e]]:
                    name[line[i][e]].append(line[i][e+1])
                if line[i][e+1] not in name:
                    name[line[i][e+1]]=[]
                if line[i][e] not in name[line[i][e+1]]:
                    name[line[i][e+1]].append(line[i][e])
answer=0
for i in name:
    answer=max(answer,len(name[i]))
open('invout.txt','w').write(str(answer))