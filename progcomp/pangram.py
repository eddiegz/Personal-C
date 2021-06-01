times=int(input())
for i in range(times):
    dic={'a':1,'b':1,'c':1,'d':1,'e':1,'f':1,'g':1,'h':1,'i':1,'j':1,'k':1,'l':1,'m':1,'n':1,'o':1,'p':1,'q':1,'r':1,'s':1,'t':1,'u':1,'v':1,'w':1,'x':1,'y':1,'z':1}
    output=input()
    line=output.lower()
    for e in line:
        if e in dic:
            dic[e]-=1
    response=''
    for c in dic:
        if dic[c]==1:
            response+=c
    print(output)
    if len(response)==0:
        print('  pangram')
    else:
        print(f'  Not a pangram, does not contain: {response}')
        
