line=input()
red=0
blue=0
purple=0
pink=0

if line=='Red':
    red+=1
elif line=='Blue':
    blue+=1
elif line=='Purple':
    purple+=1
elif line=='Pink':
    pink+=1
for i in range(0,6):
    line=input()
    if line=='Red':
        red+=1
    elif line=='Blue':
        blue+=1
    elif line=='Purple':
        purple+=1
    elif line=='Pink':
        pink+=1
    
   
if red!=2:
    print('Red')
elif blue!=2:
    print('Blue')
elif purple!=2:
    print('Purple')
elif pink!=2:
    print('Pink')