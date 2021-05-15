infile=open('cookiesin.txt','r')
outfile=open('cookiesout.txt','w')
d,c0=map(int,infile.readline().strip().split())
p1,c1=map(int,infile.readline().strip().split())
p2,c2=map(int,infile.readline().strip().split())
#Eddie Gao

def first(d,c0,p1,c1,p2,c2):
    if p1%c0!=0:
        day=p1//c0+1
    else:
        day=p1//c0
    left=(day*c0)-p1
    vel=c0+c1
    d-=day
    total=(d*vel)+left
    return total

def second(d,c0,p1,c1,p2,c2):
    if p2%c0!=0:
        day=p2//c0+1
    else:
        day=p2//c0
    left=(day*c0)-p2
    vel=c0+c2
    d-=day
    total=(d*vel)+left
    return total
    
def both1(d,c0,p1,c1,p2,c2):
    if p2%c0!=0:
        day=p2//c0+1
    else:
        day=p2//c0
    left=(day*c0)-p2
    vel=c0+c2
    d-=day
    p1-=left
    if p1%vel!=0:
        day=p1//vel+1
    else:
        day=p1//vel
    left=(day*vel)-p1
    vel+=c1
    d-=day
    total=(d*vel)+left
    return total

def both2(d,c0,p1,c1,p2,c2):
    if p1%c0!=0:
        day=p1//c0+1
    else:
        day=p1//c0
    left=(day*c0)-p1
    vel=c0+c1
    d-=day
    p2-=left
    if p2%vel!=0:
        day=p2//vel+1
    else:
        day=p2//vel
    left=(day*vel)-p2
    vel+=c2
    d-=day
    total=(d*vel)+left
    return total

sol1=d*c0                                                           #don't buy anyting
sol2=first(d,c0,p1,c1,p2,c2)                                        #only buy the first factory
sol3=second(d,c0,p1,c1,p2,c2)                                       #only buy the second factory
sol4=max(both1(d,c0,p1,c1,p2,c2),both2(d,c0,p1,c1,p2,c2))           #buy both factory
    
answer=max(sol1,sol2,sol3,sol4)
outfile.write(str(answer))
outfile.close()