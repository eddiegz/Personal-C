time=int(input())
dic={'M':1000,'D':500,'C':100,'L':50,'X':10,'V':5,'I':1}
for i in range(time):
    line=input()
    total=0
    for e in line:
        if e in dic:
            total+=dic[e]
    print(f'{total} {line}')
