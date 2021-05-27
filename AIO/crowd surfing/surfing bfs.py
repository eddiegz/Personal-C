infile=open('surfin.txt','r').readlines()
outfile=open('surfout.txt','w')
r,c=map(int,infile[0].split())
line=[i.strip() for i in infile[1:]]
answer=0
visited=[[False]*c for i in range(r)]
visited[r-1][c-1]=True
row,col=r-1,c-1
tovi=[(row-1,col),(row,col-1)]
while len(tovi)>0:
    for i in tovi:
        if line[i[0]][i[1]]=='>' and line[i[0]][i[1]+1]!='*':
            if line[i[0]][i[1]+1]=='v':
                if i[1]+2<=c-1 and line[i[0]][i[1]+2]!='*':
                    pass
                else:
                    tovi.remove(i)
                    continue
            else:
                if i[0]+1<=r-1 and i[1]+1<=c-1 and line[i[0]+1][i[1]+1]!='*':
                    pass
                else:
                    tovi.remove(i)
                    continue
            if i[0]-1>=0:
                tovi.append((i[0]-1,i[1]))
            if i[1]-1>=0:
                tovi.append((i[0],i[1]-1))
            visited[i[0]][i[1]]=True
        elif line[i[0]][i[1]]=='v' and line[i[0]+1][i[1]]!='*':
            if line[i[0]+1][i[1]]=='v':
                if i[0]+2<=r-1 and line[i[0]+2][i[1]]!='*':
                    pass
                else:
                    tovi.remove(i)
                    continue
            else:
                if i[0]+1<=r-1 and i[1]+1<=c-1 and line[i[0]+1][i[1]+1]!='*':
                    pass
                else:
                    tovi.remove(i)
                    continue
            if i[0]-1>=0:
                tovi.append((i[0]-1,i[1]))
            if i[1]-1>=0:
                tovi.append((i[0],i[1]-1))
            visited[i[0]][i[1]]=True
        tovi.remove(i)

    
for i in visited:
    for e in i:
        if e==False:
            answer+=1
# and (i[0]!=c or i[1]==c-1)      and (i[1]!=r or i[0]==r-1)
outfile.write(str(answer))
outfile.close()