    t=int(input('Enter tine length: '))
    s=int(input('Enter tine spacing: '))
    h=int(input('Enter handle length: '))
    for i in range(0,t):
        print('*',(s-2)*' ','*',(s-2)*' ','*')
    print('*'*3*s)
    for i in range(0,h):
        print(' '*(s),'*')