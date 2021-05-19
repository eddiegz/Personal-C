line=input()
l1=line[:4]
l2=line[4:]
l1=l1[::-1]
l3=l1[:3]
l4=l1[3:]+l2
l3=l3[::-1]
l5=l3[:2]
l6=l3[2:]+l4
l5=l5[::-1]
print(l5+l6)

