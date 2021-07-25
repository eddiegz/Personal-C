line=input()
answer=0
number=0
for i in line:
    if number==len(line)-1 and i=='2':
        answer+=1
    elif i=='2' and line[number+1]!='5':
        answer+=1
    number+=1
print(answer)
