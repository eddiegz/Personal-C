x,y=map(int,open('snakein.txt','r').readline().split())
a,b,time,p,answer,f,o=0,0,0,True,'',0,0
while a!=x or b!=y:
    if time%2==0:
        if x<a:
            answer+='L' if p==True else 'R'
            a,p=a-1,True
        elif x==a:
            if p:
                answer+='RRR' if y<b else 'RLL'
            else:
                answer+='LRR' if y<b else 'LLL'
            b-=1 if y<b else -1
            p=True
        else:
            answer+='R' if p==True else 'L'
            a,p=a+1,False
    else:
        if y>b:
            answer+='R' if p==True else 'L'
            b,p=b+1,True
        elif y==b:
            answer+='LRR' if x<a else 'RLL'
            a-=1 if x<a else -1
            p=True
        else:
            answer+='L' if p==True else 'R'
            b,p=b-1,False 
    time+=1
open('snakeout.txt','w').write(answer)