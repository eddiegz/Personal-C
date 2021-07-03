r,c,rr,cr,rs,cs=map(int,open('snapin.txt','r').readline().split())
if ((rr-rs)+(cr-cs))%2==1:answer='ROSE'
else:answer='SCARLET'
open('snapout.txt','w').write(answer)