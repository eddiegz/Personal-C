infile=open('flowin.txt','r')
n=int(infile.readline())
m=int(infile.readline())
q1x,q1y,q2x,q2y,q3x,q3y,q4x,q4y=n,n,2*n,n,n,2*n,2*n,2*n
list1=[0 for i in range(4)]
for i in range(m):
    x,y=map(int,infile.readline().split())
    if x<=q1x and y<=q1y:
        list1[0]+=1
    elif x>q1x and x<=q2x and y<=q2y:
        list1[1]+=1
    elif x<=q3x and y>q1y and y<=q3y:
        list1[2]+=1
    elif x>q3x and x<=q4x and y>q2y and y<=q4y:
        list1[3]+=1
maxq=max(list1)
maxindex=list1.index(maxq)
outfile=open('flowout.txt','w')
outfile.write(str(maxindex+1)+' '+str(maxq))
outfile.close()

