line1=[int(i) for i in input().split()]
line2=[int(i) for i in input().split()]
line1.sort()
line2.sort()
st=True
for i in range(min(len(line1),len(line2))):
    if line1[i]!=line2[i]:
        st=False
if st==False:
    print('False')
else:
    print('True')
