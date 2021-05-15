line1=input()
line2=input()
for i in range(min(len(line1),len(line2))):
    if line1[i]!=line2[i]:
        point=i
        p=(int((len(line2)-point)+(len(line1)-point)))
        break
    else:
        p=0
if p==0:
    if len(line1)>len(line2):
        p=len(line1)-len(line2)
    elif len(line1)<len(line2):
        p=len(line2)-len(line1)
print(p)