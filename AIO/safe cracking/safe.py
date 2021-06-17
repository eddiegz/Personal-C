infile=open('safein.txt','r').readlines()
a,b=map(int,infile[0].split())
list1,line=[int(i) for i in infile[1:1+a]],[int(i) for i in infile[1+a:1+a+b]]
fit,target=[list1[i]-list1[i-1] for i in range(1,a)],[line[i]-line[i-1] for i in range(1,b)]
length=len(target)
for i in range(a-length):
    if fit[i:i+length]==target and list1[i]-line[0]>=0:
        point=i
        break
diff=list1[point]-line[0]
outfile=open('safeout.txt','w')
for i in list1:
    outfile.write(str(i-diff)+'\n')
outfile.close()