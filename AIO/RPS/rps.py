infile=open('rpsin.txt','r')
n=int(infile.readline())
ra,pa,sa=map(int,infile.readline().split())
rb,pb,sb=map(int,infile.readline().split())
answer=0
leftra,leftrb,leftsa,leftsb,leftpa,leftpb=0,0,0,0,0,0
'''
if ra<pb:
    answer+=ra
elif pb==0:
    answer+=pb-ra
else:
    answer+=pb
if pa<sb:
    answer+=pa
elif sb==0:
    answer+=sb-pa
else:
    answer+=sb
if sa<rb:
    answer+=sa
elif rb==0:
    answer+=rb-sa
else:
    answer+=rb'''
if pb==0 and sb==0 and rb>0:
    answer+=sa
    answer-=pa
elif sa==0 and sb==0:
    if pa==pb:
        answer=0
    elif pa<pb:
        answer=pb-pa
    elif pa>pb:
        answer=ra-rb
elif ra>0 and pa==0 and sa==0:
    answer-=sb
    answer+=pb
elif rb==1:
    if ra==1:
        answer=0
    elif pa==1:
        answer=-1
    elif sa==1:
        answer=1
elif pb==1:
    if ra==1:
        answer=1
    elif pa==1:
        answer=0
    elif sa==1:
        answer=-1
elif sb==1:
    if ra==1:
        answer=-1
    elif pa==1:
        answer=1
    elif sa==1:
        answer=0
else:
    a=ra-pb
    if a==0:
        answer+=ra
    elif a>0:
        answer+=pb
        leftra=a
    elif a<0:
        answer+=pb
        leftpb=abs(a)
    b=pa-sb
    if b==0:
        answer+=pa
    elif b>0:
        answer+=sb
        leftrb=b
    elif b<0:
        leftsb=abs(b)
    c=sa-rb
    if c==0:
        answer+=sa
    elif c>0:
        answer+=rb
        leftsa=c
    elif a<0:
        answer+=rb
        leftrb=abs(c)
    if leftpb>0:
        lb=leftpb-leftpa
    else:
        la=leftra-leftrb
    if leftrb>0:
        lr=leftrb-leftra

        
    
        
    


outfile=open('rpsout.txt','w')
outfile.write(str(answer))
outfile.close()