n=int(input())
st=['0','1']
for i in range(n-1):
    if n==1:
        break
    else:
        rst=st[::-1]
        length=len(st)
        for e in range(length):
            st[e]='0'+st[e]
            rst[e]='1'+rst[e]
        st=st+rst  
for i in st:
    print(i)