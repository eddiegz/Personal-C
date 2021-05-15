times=int(input())
h=[int(i) for i in input().split()]
w=[int(i) for i in input().split()]
answer=0
for i in range(len(w)):
    p=(h[i]+h[i+1])*w[i]/2
    answer+=p
print(answer if int(answer)!=answer else int(answer))
