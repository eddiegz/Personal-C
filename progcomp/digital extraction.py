times=int(input())
for i in range(times):
    p=input()
    output=[]
    for e in p:
        if e.isdigit():
            output.append(e)
    if len(output)>0:
        print(f"{p}={''.join(output)}")
    else:
        print(f'{p}=no digits')
    