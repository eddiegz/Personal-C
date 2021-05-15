m=int(input())
d=int(input())
if m<2:
    print('Before')
elif m>2:
    print('After')
elif m==2 and d<=17:
    print('Before')
elif m==2 and d>=19:
    print('After')
elif m==2 and d==18:
    print('Special')