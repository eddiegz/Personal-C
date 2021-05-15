infile=open('farmin.txt','r')
outfile=open('farmout.txt','w')
n=int(infile.readline())
line=[int(i) for i in infile.readline().split()]
answer,i,j,index,p1,p2=0,0,0,1,0,0

anna=[line[0]]
for i in range(len(line)-1):
    anna.append(anna[i]+line[i+1])
line.reverse()                    
bob=[line[0]]
for i in range(len(line)-1):
    bob.append(bob[i]+line[i+1])
anna=set(anna)
bob=set(bob)
p=anna.intersection(bob)
answer=len(line)-len(p)

'''
for i in range(n//2):
    p1+=line[index-1]
    p2+=line[-index]
    if p1==p2:
        p1=0
        p2=0
    else:
        step=0
        while p1!=p2:
            if p1+line[index+step]==p2:
                answer+=1
                p1,p2=0,0
                break
            elif p2+line[-(index+step+1)]:
                answer+=1
                p1,p2=0,0
                break
            else:
                p1+=line[index+step]
                p2+=line[-(index+step+1)]
                step+=1
                answer+=step*2
    index+=1
'''


outfile.write(str(answer))
outfile.close()