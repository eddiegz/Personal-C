number=0
list1=[]
wnumber=0
lnumber=0
while number<7:
    winnumber=input().upper()
    number+=1
    list1.append(winnumber)
for i in list1:
    if 'W' == i:
        wnumber+=1
    else:
        lnumber+=1
        
if wnumber>=5:
    print('1')
elif wnumber<=4 and wnumber>=3:
    print('2')
elif wnumber<=2 and wnumber>=1:
    print('3')
else:
    print('-1')