from sys import stdin, stdout
stdin = open('shufflein.txt', 'r')
stdout = open('shuffleout.txt', 'w')
input = lambda: stdin.readline().strip()

n,k=map(int,input().split())
chair=[int(i) for i in input().split()]
man=[int(i) for i in input().split()]

queue={ch:[] for ch in chair}

i=0
for ch in chair:
    while i<k+1 and man[i]<=ch:
        queue[ch].append(i+1)
        i+=1
if i<k+1:
    queue[chair[0]]=list(range(i+1,k+2,1))+queue[chair[0]]
taken={ch:False for ch in chair}

free=[]
for ch in 2*chair:
    if not taken[ch]:
        if len(queue[ch])>=1:
            taken[ch]=True
            free=free+queue[ch][:-1]
            queue[ch]=queue[ch][-1]
        elif len(free)>=1:
            taken[ch]=True
            queue[ch]=free.pop()
ans1=queue[chair[0]]
ans2=free[0]

stdout.write(str(ans1)+'\n'+str(ans2)) 