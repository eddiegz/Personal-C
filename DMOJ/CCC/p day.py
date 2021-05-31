pie=int(input())
pe=int(input())
dic={}
def pi(n,k,mi):
    if k==1 or n==k:
        return 1
    if (n,k,mi) in dic:
        return dic[(n,k,mi)]
    t=0
    for i in range(mi,n//k+1):
        t+=pi(n-i,k-1,i)
    dic[(n,k,mi)]=t
    return t
print(pi(pie,pe,1))