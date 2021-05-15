infile=open('bendin.txt','r')
axl,ayl,axr,ayr=map(int,infile.readline().strip().split())
bxl,byl,bxr,byr=map(int,infile.readline().strip().split())
areaa=(axr-axl)*(ayr-ayl)
areab=(bxr-bxl)*(byr-byl)
answer=areaa+areab

if axr>=bxl and ayr>=byl:
    areai=(axr-bxl)*(ayr-byl)
    answer-=areai
elif bxl>=axr and byr>=ayl:
    areai=(bxl-axr)*(byr-ayl)
    answer-=areai
elif axl>=bxr and ayr>=byl:
    areai=(axl-bxr)*(ayr-byl)
    answer-=areai
elif bxr>=axl and byr>=ayl:
    areai=(bxr-axl)*(byr-ayl)
    answer-=areai


outfile=open('bendout.txt','w')
outfile.write(str(answer))
outfile.close()
