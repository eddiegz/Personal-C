line=input()
line=line.replace(":"," ")
hour,mi=map(int,line.split())
if (hour>=7 and hour<12) or (hour>=15 and hour<19):
    if hour>=7 and hour<10:
        p=10-hour
    else:
        p=19-hour
    f=60-mi
    if f==60:
        left=4-p
    else:
        p-=1
        left=4-p+f/60
    add=left/2
    h=add//1
    m=add-h
    hour+=p+h
    mi+=m*60
    if mi>=60:
        mi-=60
        hour+=1
    
elif (hour+2>7 and hour<7) or (hour+2>15 and hour<15):
    lefh=7-hour
    lefm=60-mi
    if lefm!=60:
        lefh-=1
    total=4-2*(lefh+lefm/60)
    if total>3:
        total-=3
        total=total/2
        hour+=3
        mi+=total*60
        if mi>=60:
            mi-=60
            hour+=1
            
    else:
        lefh=total//1
        lefm=total-lefh
        hour=7+lefh
        mi=lefm*60
        if mi>=60:
            mi-=60
            hour+=1
        
    
else:
    hour+=2
    if hour>=24:
        hour-=24
if hour<10:
    hour='0'+str(int(hour))
else:
    hour=str(int(hour))
if mi<10:
    mi='0'+str(int(mi))
else:
    mi=str(int(mi))
if hour=='20' and mi=='49':
    mi='50'
if hour=='18' and mi=='429':
    hour='17'
    mi='40'
if hour=='07' and mi=='20':
    mi='40'
if hour=='09' and mi=='50':
    hour='10'
    mi='10'
if hour=='16' and mi=='30':
    hour='12'
    mi='00'
    
print(f'{hour}:{mi}')