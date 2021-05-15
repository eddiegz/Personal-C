limit=int(input('Enter the speed limit: '))
record=int(input('Enter the recorded speed of the car: '))
if record<=limit:
    print('Congratualtions, you are within the speed limit!')
elif record-limit<=20 and record-limit>=1:
    print(f'You are speeding and your fine is $100.')
elif record-limit<=30 and record-limit>=21:
    print('You are speeding and your fine is $270.')
elif record-limit>=31:
    print('You are speeding and your fine is $500.')