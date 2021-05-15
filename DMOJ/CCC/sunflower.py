freq=int(input())
list1=[]
list2=[]

for i in range(0,freq):
    row=[]
    fn=input().split()
    fn=[int(i) for i in fn]
    for e in fn:
        row.append(e)
    #[row.append(e) for e in fn]
    list1.append(row)
for row in list1:
    for i in range(0,freq):
        list2.append(list1[0][i])
    #for e in row:
        
    

for row in list1:
    print(row)
print(list2)
    
