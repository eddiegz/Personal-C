times=int(input())
for i in range(times):
    a,b=input().split()
    if len(a)!=len(b):
        print(f'{a}, {b} have different lengths')
    else:
        length=len(a)
        pa=[]
        for e in range(length):
            for c in range(e+1,length):
                if a[e]==a[c]:
                    pa.append('+'+str(c-e))
                    break
            if len(pa)!=e+1:
                pa.append(str(0))
        pb=[]
        for e in range(length):
            for c in range(e+1,length):
                if b[e]==b[c]:
                    pb.append('+'+str(c-e))
                    break
            if len(pb)!=e+1:
                pb.append(str(0))
        if set(pa)!=set(pb):
            print(f'{a}, {b} are not isomorphs')
        else:
            print(f"{a}, {b} are isomorphs with repetition pattern {' '.join(pa)}")