line=input().lower().split()
answer=0
for i in line:
    c=''
    for e in i:
        if e.isalpha():
            c+=e
    if c=='and':
        answer+=1
print(answer)