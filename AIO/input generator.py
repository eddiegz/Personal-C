#input generator
import random

times=random.randint(1,10000000)
y=random.randint(1,times)
x=random.randint(1,y)
r=random.randint(1,4000)
print(times)
print(str(x)+' '+str(y))
print(r)
for i in range(r):
    r=random.randint(1,times)
    l=random.randint(1,r)
    print(str(l)+' '+str(r))
