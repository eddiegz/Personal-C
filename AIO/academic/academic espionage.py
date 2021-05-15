infile=open('acadin.txt','r').readlines()
a,b=0,0
for e in infile:
    i=e.strip()
    if i=='i':
        a+=1
    elif i=='o':
        b+=1
    if i=='x':
        break
total=max(0,a-b)
outfile=open('acadout.txt','w')
outfile.write(str(total))
outfile.close()
        