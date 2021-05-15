quarter=int(input())
p1=int(input())
p2=int(input())
p3=int(input())
time=0
while quarter>0:
    if quarter == 0:
        continue
    p1+=1
    quarter-=1
    time+=1
    if p1==35:
        quarter+=30
        p1=0
    if quarter == 0:
        continue
        
    time+=1
    p2+=1
    quarter-=1
    if p2==100:
        p2=0
        quarter+=60
    if quarter == 0:
        continue
        
    p3+=1
    time+=1
    quarter-=1
    if p3==10:
        quarter+=9
        p3=0
        
    
    
print(f'Martha plays {time} times before going broke.')
    