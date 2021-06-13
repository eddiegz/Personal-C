times=int(input())
for i in range(times):
    line=[int(e) for e in input()]
    if len(line)<12 or len(line)>13:
        print(f"{''.join(list(map(str,line)))} has the wrong length")
    else:
        if len(line)==13:
            total=0
            for c in range(0,13,2):
                total+=line[c]
            for c in range(1,13,2):
                total+=line[c]*3
            if total%10==0:
                print(f"{''.join(list(map(str,line)))} is valid")
            else:
                print(f"{''.join(list(map(str,line)))} is INVALID")
        else:
            total=0
            for c in range(0,12,2):
                total+=line[c]
            for c in range(1,12,2):
                total+=line[c]*3
            left=total%10
            addon=10-left if left!=0 else 0
            print(f"{''.join(list(map(str,line)))} full code is ",end='')
            line.append(addon)
            print(f"{''.join(list(map(str,line)))}")
            
