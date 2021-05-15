infile=open('atlanin.txt','r')
n=int(infile.readline().strip())
list1=[]
number=0
max1=0
setpoint=0
for i in range(n):
    list1.append(int(infile.readline().strip()))
max1=list1[0]
for i in range(1,len(list1)):
    if list1[i]>max1:
        if i==1:
            pass
        elif i==len(list1)-1:
            pass
        else:
            number+=list1.index(list1[i])-list1.index(max1)-1
        max1=list1[i]
    elif list1[i]<=max1 and list1[i]>list1[i-1]:
        if i==len(list1)-1:
            pass
        elif i==1:
            pass
        else:
            if setpoint==0:
                number+=i-list1.index(max1)-1
                setpoint=i-1
            else:
                number+=i-1-setpoint
                setpoint=i-1
            


outfile=open('atlanout.txt','w')
outfile.write(str(number))
outfile.close()