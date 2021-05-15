#input generator
import random
outfile=open('atlanin.txt','w')
times=int(input())
outfile.write(str(times)+'\n')
for i in range(times):
    outfile.write(str(random.randint(1,2000000000))+'\n')

outfile.close()