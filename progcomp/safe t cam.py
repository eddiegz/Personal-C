times=int(input())
dic={}

def speedcheck(time,point,car,dic):
    oldpoint=dic[car][1]
    if int(point)==2 and oldpoint==1: dis=133.0
    elif int(point)==3 and oldpoint==2: dis=57.5
    elif int(point)==3 and oldpoint==1: dis=170.5
    oldtime=[int(i) for i in dic[car][0].split(':')]
    newtime=[int(i) for i in time.split(':')]
    duration=(newtime[0]-oldtime[0])+(newtime[1]-oldtime[1]-(oldtime[2]-newtime[2])/60)/60
    speed=round(dis/duration,1)
    if speed>110:
        print(f'{time} {point} {car} {speed}')
    return 0

for i in range(times):
    line=input().split()
    if line[2] not in dic:
        dic[line[2]]=(line[0],int(line[1]))
    else:
        speedcheck(line[0],line[1],line[2],dic)
        dic[line[2]]=(line[0],int(line[1]))