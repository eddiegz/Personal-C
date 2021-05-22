infile=open('bendin.txt','r')
axl,ayl,axr,ayr=map(int,infile.readline().strip().split())
bxl,byl,bxr,byr=map(int,infile.readline().strip().split())

left=max(axl,bxl)
bottom=max(ayl,byl)
right=min(axr,bxr)
top=min(ayr,byr)
area1=(axr-axl)*(ayr-ayl)
area2=(bxr-bxl)*(byr-byl)
if(left<right and bottom<top):
    areai=(right-left)*(top-bottom)
else:
    areai=0

answer=area1+area2-areai

outfile=open('bendout.txt','w')
outfile.write(str(answer))
outfile.close()

