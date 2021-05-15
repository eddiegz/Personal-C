action=input()
line=input()
output=''
if action=='encode':
    if len(line)%4!=0:
        line+=(4-len(line)%4)*'X'
    for i in range(0,(len(line)//4)-1):
        for e in range(len(line)//4):
            output+=(line[i+4*e]).upper()
elif action=='decode':
    number=len(line)//4
    for i in range(number):
        index=0
        for e in range(4):
            output+=line[i+index*number].lower()
            index+=1

print(output)