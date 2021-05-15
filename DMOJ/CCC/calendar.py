day,leng=map(int,input().split())
print('Sun Mon Tue Wed Thr Fri Sat')
for i in range(day-1):
    print('    ',end='')
wk1=7-day+1
index=0
for i in range(1,leng+1):
    if i==wk1+index*7 or i==leng:
        if i<10:
            print(f'  {i}')
        else:
            print(f' {i}')
        index+=1
    elif i<10:
        print(f'  {i} ',end='')
    else:
        print(f' {i} ',end='')
