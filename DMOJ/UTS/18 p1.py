n,m=map(int,input().split())
sum1=n+m
diff=max(n,m)-min(n,m)
pro=n*m
print(max(sum1,diff,pro))
