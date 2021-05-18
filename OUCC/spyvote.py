c=int(input())
m=int(input())
P=[[0]]+[[int(i) for i in input().split()] for j in range(m)]
NE=[]
for i in range(c):
    V=[0 for i in range(c+1)]
    for j in range(1,m+1):
        vote=P[j][0]
        V[vote]=V[vote]+1
    if max(V)/sum(V)>0.5:
        print(V.index(max(V)))
        break
    else:
        min_vote=1000
        for i in range(1,c+1):
            if V[i]<=min_vote and i not in NE:
                min_vote=V[i]
                candidate_to_go=i
        NE.append(candidate_to_go)
        for i in range(1,m+1):
            if candidate_to_go in P[i]:
                P[i].remove(candidate_to_go)
