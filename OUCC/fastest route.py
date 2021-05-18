start,end=input().split()
edges=[("ab",1)("ac",1),("be",3),("cd",1),("de",1),("df",2),("eg",1),("fg",1),("ba",1),("ca",1),("eb",3),("dc",1),("ed",1),("fd",2),("ge",1),("gf",1)]
paths=[(start,0)]
while True:
    new_paths=paths
    for (path,T) in paths:
        for (edge,t) in edges:
            if path[-1]==edge[0] and edge[1] not in path:
                if (path+edge[1],T+t) not in new_paths:
                    new_paths.append((path+edge[1],T+t))
    if len(new_paths)!=len(paths):
        paths=new_paths
    else:
        break
best_time=100
for (path,T) in paths:
    if path[-1]==end:
        if T<best_time:
            best_time=T
            best_path=path
print(best_path)