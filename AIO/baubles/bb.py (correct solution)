infile=open('baublesin.txt','r').readline()
ro,bo,s,rp,bp=map(int,infile.split())

answer=0
r=ro-rp
b=bo-bp

if s==0:
    if r<0 or b<0:
        answer=0
    elif r>=b:
        if bo==0 or bp==0:
            answer+=r+1
        else:
            answer+=b+1
    elif b>r:
        if ro==0 or rp==0:
            answer+=b+1
        else:
            answer+=r+1
elif bo==bp==0:
    if s+ro<rp:
        answer=0
    elif s+ro==rp:
        answer=1
    else:
        answer=(ro+s)-rp+1
elif ro==rp==0:
    if s+bo<bp:
        answer=0
    elif s+bo==bp:
        answer=1
    else:
        answer=(bo+s)-bp+1
else:
    min1=min(r,b)
    max1=max(r,b)
    if min1<0:
        if r<0:
            s+=r
            ro=rp
        if b<0:
            s+=b
            bo=bp
        answer=s+1
        if r>=0 and b>=0:
            if r>b:
                answer=b+s+1
            else:
                answer=r+s+1
        if answer<0:
            answer=0
    elif min1==0:
        answer=s+1
    else:
        if rp==0:
            answer=(bo+s)-bp+1
        elif bp==0:
            answer=(ro+s)-rp+1
        else:
            min1+=s+1
            answer=min1

outfile=open('baublesout.txt','w')
outfile.write(str(answer))
outfile.close()
