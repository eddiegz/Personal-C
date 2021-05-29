infile=open('rpsin.txt','r')
outfile=open('rpsout.txt','w')
n=int(infile.readline())
ra,pa,sa=map(int,infile.readline().split())
rb,pb,sb=map(int,infile.readline().split())

win=min(rb,sa)+min(pb,ra)+min(sb,pa)
if rb>sa:
    rb,sa=rb-sa,0
elif rb==sa:
    rb,sa=0,0
else:
    sa,rb=sa-rb,0
if pb>ra:
    pb,ra=pb-ra,0
elif pb==ra:
    pb,ra=0,0
else:
    ra,pb=ra-pb,0
if sb>pa:
    sb,pa=sb-pa,0
elif sb==pa:
    sb,pa=0,0
else:
    pa,sb=pa-sb,0

outfile.write(str(win-(max(0,rb-ra)+max(0,pb-pa)+max(0,sb-sa))))
outfile.close()

