infile=open('fashin.txt','r').readline()
innumber=int(infile.strip())
number=0
while innumber>0:
    if innumber>=100:
        innumber-=100
        number+=1
    elif innumber>=20:
        innumber-=20
        number+=1
    elif innumber>=5:
        innumber-=5
        number+=1
    elif innumber>=1:
        innumber-=1
        number+=1

outfile=open('fashout.txt','w')
outfile.write(str(number))
outfile.close()