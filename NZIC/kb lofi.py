n=int(input())
m=int(input())
toggle={}
output={}
intercept=[]
answer={}
for i in range(m):
    action,number=input().split()
    if action=='t':
        if int(number) not in toggle:
            toggle[int(number)]=0
        toggle[int(number)]+=1
    else:
        if int(number) not in output:
            output[int(number)]=0
        output[int(number)]+=1
for i in toggle:
    toggle[i]%=2
    if toggle[i]==1:
        intercept.append(i)

intercept.sort()
length=len(intercept)
processed = {key:output[key] for key in sorted(output.keys())}
pl=len(processed)

index,fore=0,0
p=True

for i in processed:
    if length==0:
        answer[i]=i
        break
    while index<length and i>intercept[index] and p:
        fore+=1
        index+=1
        if index>=length:
            index-=1
            p=False
    if index<length and i>intercept[index]:
        answer[i]=i-fore
    elif index>=length:
        if intercept[index]>i:
            answer[i]=i-length+1
        else:
            answer[i]=i-length
    elif index<length and i<intercept[index]:
        answer[i]=i-fore

for i in output:
    if i in toggle and toggle[i]==1:
        print('UNOFFICIAL')
    else:
        print(answer[i])