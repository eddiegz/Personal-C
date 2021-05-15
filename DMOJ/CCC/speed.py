limit=int(input())
sp=int(input())
if sp<=limit:
    print('Congratulations, you are within the speed limit!')
else:
    if sp-limit<=20:
        print('You are speeding and your fine is $100.')
    elif sp-limit<=30:
        print('You are speeding and your fine is $270.')
    else:
        print('You are speeding and your fine is $500.')