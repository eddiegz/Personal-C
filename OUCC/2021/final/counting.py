n=int(input())
if n==0:
    print('0')
else:
    string=''
    for i in range(n,0,-1):
        string+=str(i)+' '
    print(string)