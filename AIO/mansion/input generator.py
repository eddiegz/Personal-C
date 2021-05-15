#input generator
import random
outfile=open('manin.txt','w')
times=int(input())
width=input()
outfile.write(str(times)+' '+width+'\n')
for i in range(times):
    outfile.write(str(random.randint(1,100))+'\n')

outfile.close()