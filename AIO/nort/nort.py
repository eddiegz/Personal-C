w,h=map(int,open('nortin.txt','r').readline().split())
if w%2==0 or h%2==0:answer=w*h
else:answer=w*h-1
open('nortout.txt','w').write(str(answer))