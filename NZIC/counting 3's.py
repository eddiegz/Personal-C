number=int(input())
times=0

for i in range(1,number+1):
    if '3' in str(i):
        e=str(i).count('3')
        times+=e 
print(times)