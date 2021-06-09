open('addout.txt','w').write(str(sum(map(int,open('addin.txt','r').readline().split()))))
