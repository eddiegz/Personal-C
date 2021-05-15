line=[float(i) for i in input().split()]
line.sort()
if line[0]%1==0:
    print(int(line[0]))
else:
    print(line[0])
if line[-1]%1==0:
    print(int(line[-1]))
else:
    print(line[-1])