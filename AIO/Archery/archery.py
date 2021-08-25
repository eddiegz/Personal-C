n,a,b=map(int,open('archin.txt','r').readline().split());open('archout.txt','w').write(str(max(n-(n-a)-(n-b),1))+' '+str(min((a-1)+(b-1)+1,n)))
