infile=open('chimin.txt','r')
n,a,b,target=int(infile.readline()),infile.readline().strip(),infile.readline().strip(),infile.readline().strip()
temp,count,state,sp='',0,True,1
if a[0]==target[0] and b[0]!=target[0]: p=1
elif b[0]==target[0] and a[0]!=target[0]: p=2
elif a[0]==target[0] and b[0]==target[0]:
    while True:
        if a[sp]!=target[sp]: p=2; break
        elif b[sp]!=target[sp]: p=1; break
        sp+=1
else:
    answer,state='PLAN FOILED',False
for i in range(sp,n):
    if not state: break
    if p==1:
        if b[i]==target[i] and a[i]!=target[i]:
            count,p=count+1,2
        elif b[i]!=target[i] and a[i]!=target[i]:
            count=False
            break
    elif p==2:
        if a[i]==target[i] and b[i]!=target[i]:
            count+=1
            p=1
        elif b[i]!=target[i] and a[i]!=target[i]:
            count=False
            break
outfile=open('chimout.txt','w')
if state and count!=False:
    outfile.write('SUCCESS\n'+str(count))
else:
    outfile.write('PLAN FOILED')
outfile.close()
